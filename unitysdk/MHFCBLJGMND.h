#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveImgDanmuRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MHFCBLJGMND_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D17D220)
#define MHFCBLJGMND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D17D7F0)
#define MHFCBLJGMND_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D17D390)
#define MHFCBLJGMND_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D17CC90)
#define MHFCBLJGMND_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D17CF20)
#define MHFCBLJGMND_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D17D430)
#define MHFCBLJGMND_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D17D480)
#define MHFCBLJGMND_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D17D260)
#define MHFCBLJGMND_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D17CEC0)
#define MHFCBLJGMND_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D17D090)
#define MHFCBLJGMND_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D17D2F0)
#define MHFCBLJGMND_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D17CC10)

inline static constexpr unsigned int MHFCBLJGMND_TypeDefinitionIndex = 11787;

	class MHFCBLJGMND : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MHFCBLJGMND")->GetStaticField(0x46580);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MHFCBLJGMND")->GetStaticField(0x46588);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveImgDanmuRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveImgDanmuRow*>**)UnitySDK::FromName("", "MHFCBLJGMND")->GetStaticField(0x46590);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MHFCBLJGMND")->GetStaticField(0x10860);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MHFCBLJGMND")->GetStaticField(0x10861);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHFCBLJGMND_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveImgDanmuRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveImgDanmuRow*>*(*)())((::PBYTE)hIl2Cpp + MHFCBLJGMND_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MHFCBLJGMND_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveImgDanmuRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveImgDanmuRow*>(*)())((::PBYTE)hIl2Cpp + MHFCBLJGMND_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveImgDanmuRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveImgDanmuRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MHFCBLJGMND_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MHFCBLJGMND_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHFCBLJGMND_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHFCBLJGMND_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MHFCBLJGMND_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MHFCBLJGMND_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MHFCBLJGMND_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveImgDanmuRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveImgDanmuRow*))((::PBYTE)hIl2Cpp + MHFCBLJGMND_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
