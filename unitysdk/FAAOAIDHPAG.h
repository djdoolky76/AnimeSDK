#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FinishActionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FinishActionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FAAOAIDHPAG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDC23D0)
#define FAAOAIDHPAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDC29A0)
#define FAAOAIDHPAG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDC2540)
#define FAAOAIDHPAG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDC1E40)
#define FAAOAIDHPAG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDC20D0)
#define FAAOAIDHPAG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDC25E0)
#define FAAOAIDHPAG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDC2630)
#define FAAOAIDHPAG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDC2410)
#define FAAOAIDHPAG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDC2070)
#define FAAOAIDHPAG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDC2240)
#define FAAOAIDHPAG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDC24A0)
#define FAAOAIDHPAG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDC1DC0)

inline static constexpr unsigned int FAAOAIDHPAG_TypeDefinitionIndex = 14169;

	class FAAOAIDHPAG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishActionConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishActionConfigRow*>**)UnitySDK::FromName("", "FAAOAIDHPAG")->GetStaticField(0xEB90);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FAAOAIDHPAG")->GetStaticField(0xEB98);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FAAOAIDHPAG")->GetStaticField(0xEBA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FAAOAIDHPAG")->GetStaticField(0x3180);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FAAOAIDHPAG")->GetStaticField(0x3181);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAAOAIDHPAG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishActionConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishActionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FAAOAIDHPAG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FAAOAIDHPAG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishActionConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishActionConfigRow*>(*)())((::PBYTE)hIl2Cpp + FAAOAIDHPAG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FinishActionConfigRow* LMBKNCAIDLC(::RPG::GameCore::FinishActionType a1)
		{
			return ((::RPG::GameCore::FinishActionConfigRow*(*)(::RPG::GameCore::FinishActionType))((::PBYTE)hIl2Cpp + FAAOAIDHPAG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FAAOAIDHPAG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAAOAIDHPAG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAAOAIDHPAG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FAAOAIDHPAG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FAAOAIDHPAG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FAAOAIDHPAG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FinishActionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FinishActionConfigRow*))((::PBYTE)hIl2Cpp + FAAOAIDHPAG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
