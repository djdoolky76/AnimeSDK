#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PreAvatarLevelingTemplateDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFBACDGNPIN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1D2BB0)
#define NFBACDGNPIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1D31B0)
#define NFBACDGNPIN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1D2D20)
#define NFBACDGNPIN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1D25E0)
#define NFBACDGNPIN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1D2870)
#define NFBACDGNPIN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1D2DC0)
#define NFBACDGNPIN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1D2E10)
#define NFBACDGNPIN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1D2BF0)
#define NFBACDGNPIN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1D2810)
#define NFBACDGNPIN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1D29E0)
#define NFBACDGNPIN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1D2C80)
#define NFBACDGNPIN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1D2560)

inline static constexpr unsigned int NFBACDGNPIN_TypeDefinitionIndex = 14558;

	class NFBACDGNPIN : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NFBACDGNPIN")->GetStaticField(0x3F700);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarLevelingTemplateDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarLevelingTemplateDataRow*>**)UnitySDK::FromName("", "NFBACDGNPIN")->GetStaticField(0x3F708);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NFBACDGNPIN")->GetStaticField(0x3F710);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NFBACDGNPIN")->GetStaticField(0xEFF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NFBACDGNPIN")->GetStaticField(0xEFF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFBACDGNPIN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarLevelingTemplateDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarLevelingTemplateDataRow*>*(*)())((::PBYTE)hIl2Cpp + NFBACDGNPIN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NFBACDGNPIN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarLevelingTemplateDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PreAvatarLevelingTemplateDataRow*>(*)())((::PBYTE)hIl2Cpp + NFBACDGNPIN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PreAvatarLevelingTemplateDataRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::PreAvatarLevelingTemplateDataRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NFBACDGNPIN_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NFBACDGNPIN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFBACDGNPIN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFBACDGNPIN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NFBACDGNPIN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NFBACDGNPIN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NFBACDGNPIN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PreAvatarLevelingTemplateDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PreAvatarLevelingTemplateDataRow*))((::PBYTE)hIl2Cpp + NFBACDGNPIN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
