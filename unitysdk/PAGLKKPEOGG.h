#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyGuessConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PAGLKKPEOGG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2BF7E0)
#define PAGLKKPEOGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2BFDB0)
#define PAGLKKPEOGG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2BF950)
#define PAGLKKPEOGG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2BF250)
#define PAGLKKPEOGG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2BF4E0)
#define PAGLKKPEOGG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2BF9F0)
#define PAGLKKPEOGG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2BFA40)
#define PAGLKKPEOGG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2BF820)
#define PAGLKKPEOGG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2BF480)
#define PAGLKKPEOGG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2BF650)
#define PAGLKKPEOGG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2BF8B0)
#define PAGLKKPEOGG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2BF1D0)

	class PAGLKKPEOGG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PAGLKKPEOGG")->GetStaticField(0x3D760);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PAGLKKPEOGG")->GetStaticField(0x3D768);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGuessConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGuessConfigRow*>**)UnitySDK::FromName("", "PAGLKKPEOGG")->GetStaticField(0x3D770);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PAGLKKPEOGG")->GetStaticField(0xD2E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PAGLKKPEOGG")->GetStaticField(0xD2E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAGLKKPEOGG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGuessConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGuessConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PAGLKKPEOGG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PAGLKKPEOGG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGuessConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGuessConfigRow*>(*)())((::PBYTE)hIl2Cpp + PAGLKKPEOGG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyGuessConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonopolyGuessConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PAGLKKPEOGG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PAGLKKPEOGG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAGLKKPEOGG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAGLKKPEOGG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PAGLKKPEOGG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PAGLKKPEOGG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PAGLKKPEOGG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonopolyGuessConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyGuessConfigRow*))((::PBYTE)hIl2Cpp + PAGLKKPEOGG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
