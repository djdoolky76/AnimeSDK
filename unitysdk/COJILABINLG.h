#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CutsceneActorRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define COJILABINLG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCB9840)
#define COJILABINLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCB9E10)
#define COJILABINLG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCB99B0)
#define COJILABINLG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCB9290)
#define COJILABINLG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCB9520)
#define COJILABINLG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCB9A50)
#define COJILABINLG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCB9AA0)
#define COJILABINLG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCB9880)
#define COJILABINLG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCB94C0)
#define COJILABINLG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCB9690)
#define COJILABINLG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCB9910)
#define COJILABINLG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCB9210)

inline static constexpr unsigned int COJILABINLG_TypeDefinitionIndex = 13104;

	class COJILABINLG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutsceneActorRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutsceneActorRow*>**)UnitySDK::FromName("", "COJILABINLG")->GetStaticField(0x45460);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "COJILABINLG")->GetStaticField(0x45468);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "COJILABINLG")->GetStaticField(0x45470);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "COJILABINLG")->GetStaticField(0x10750);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "COJILABINLG")->GetStaticField(0x10751);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COJILABINLG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutsceneActorRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutsceneActorRow*>*(*)())((::PBYTE)hIl2Cpp + COJILABINLG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + COJILABINLG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutsceneActorRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutsceneActorRow*>(*)())((::PBYTE)hIl2Cpp + COJILABINLG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CutsceneActorRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::CutsceneActorRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + COJILABINLG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + COJILABINLG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COJILABINLG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COJILABINLG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + COJILABINLG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + COJILABINLG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + COJILABINLG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CutsceneActorRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CutsceneActorRow*))((::PBYTE)hIl2Cpp + COJILABINLG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
