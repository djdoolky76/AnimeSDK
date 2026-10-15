#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PSObjectMissionMapRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JDNEBEJGCMK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D019370)
#define JDNEBEJGCMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0198B0)
#define JDNEBEJGCMK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D019450)
#define JDNEBEJGCMK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF4FBA0)
#define JDNEBEJGCMK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D019070)
#define JDNEBEJGCMK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0194F0)
#define JDNEBEJGCMK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D019540)
#define JDNEBEJGCMK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CFD6760)
#define JDNEBEJGCMK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D019010)
#define JDNEBEJGCMK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0191E0)
#define JDNEBEJGCMK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0193B0)
#define JDNEBEJGCMK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D018F90)

	class JDNEBEJGCMK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSObjectMissionMapRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSObjectMissionMapRow*>**)UnitySDK::FromName("", "JDNEBEJGCMK")->GetStaticField(0x2AC60);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JDNEBEJGCMK")->GetStaticField(0x2AC68);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JDNEBEJGCMK")->GetStaticField(0x2AC70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JDNEBEJGCMK")->GetStaticField(0x86E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JDNEBEJGCMK")->GetStaticField(0x86E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDNEBEJGCMK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSObjectMissionMapRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSObjectMissionMapRow*>*(*)())((::PBYTE)hIl2Cpp + JDNEBEJGCMK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JDNEBEJGCMK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSObjectMissionMapRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSObjectMissionMapRow*>(*)())((::PBYTE)hIl2Cpp + JDNEBEJGCMK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PSObjectMissionMapRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PSObjectMissionMapRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JDNEBEJGCMK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JDNEBEJGCMK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDNEBEJGCMK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDNEBEJGCMK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JDNEBEJGCMK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JDNEBEJGCMK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JDNEBEJGCMK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PSObjectMissionMapRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PSObjectMissionMapRow*))((::PBYTE)hIl2Cpp + JDNEBEJGCMK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
