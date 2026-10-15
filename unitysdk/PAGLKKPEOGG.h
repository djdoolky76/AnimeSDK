#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyGuessConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PAGLKKPEOGG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D291BE0)
#define PAGLKKPEOGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2921B0)
#define PAGLKKPEOGG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D291D50)
#define PAGLKKPEOGG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D291650)
#define PAGLKKPEOGG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2918E0)
#define PAGLKKPEOGG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D291DF0)
#define PAGLKKPEOGG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D291E40)
#define PAGLKKPEOGG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D291C20)
#define PAGLKKPEOGG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D291880)
#define PAGLKKPEOGG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D291A50)
#define PAGLKKPEOGG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D291CB0)
#define PAGLKKPEOGG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2915D0)

inline static constexpr unsigned int PAGLKKPEOGG_TypeDefinitionIndex = 12080;

	class PAGLKKPEOGG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PAGLKKPEOGG")->GetStaticField(0x4C8F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGuessConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGuessConfigRow*>**)UnitySDK::FromName("", "PAGLKKPEOGG")->GetStaticField(0x4C8F8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PAGLKKPEOGG")->GetStaticField(0x4C900);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PAGLKKPEOGG")->GetStaticField(0x11820);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PAGLKKPEOGG")->GetStaticField(0x11821);
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
