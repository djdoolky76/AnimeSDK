#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSpecialModifyConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGCLOFKOGMA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E2E4C80)
#define LGCLOFKOGMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E5380)
#define LGCLOFKOGMA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E2E4E70)
#define LGCLOFKOGMA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E2E4500)
#define LGCLOFKOGMA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E2E4860)
#define LGCLOFKOGMA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E2E4F40)
#define LGCLOFKOGMA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E2E4FB0)
#define LGCLOFKOGMA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E2E4CE0)
#define LGCLOFKOGMA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E2E47E0)
#define LGCLOFKOGMA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E2E4A10)
#define LGCLOFKOGMA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E2E4DA0)
#define LGCLOFKOGMA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E2E43F0)

inline static constexpr unsigned int LGCLOFKOGMA_TypeDefinitionIndex = 13653;

	class LGCLOFKOGMA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LGCLOFKOGMA")->GetStaticField(0x326B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpecialModifyConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpecialModifyConfigRow*>**)UnitySDK::FromName("", "LGCLOFKOGMA")->GetStaticField(0x326B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LGCLOFKOGMA")->GetStaticField(0x326C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LGCLOFKOGMA")->GetStaticField(0xAAD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LGCLOFKOGMA")->GetStaticField(0xAAD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGCLOFKOGMA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpecialModifyConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpecialModifyConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LGCLOFKOGMA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LGCLOFKOGMA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpecialModifyConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpecialModifyConfigRow*>(*)())((::PBYTE)hIl2Cpp + LGCLOFKOGMA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSpecialModifyConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GridFightSkillType a3)
		{
			return ((::RPG::GameCore::GridFightSpecialModifyConfigRow*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::GridFightSkillType))((::PBYTE)hIl2Cpp + LGCLOFKOGMA_LMBKNCAIDLC_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LGCLOFKOGMA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGCLOFKOGMA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGCLOFKOGMA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LGCLOFKOGMA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LGCLOFKOGMA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LGCLOFKOGMA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSpecialModifyConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSpecialModifyConfigRow*))((::PBYTE)hIl2Cpp + LGCLOFKOGMA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
