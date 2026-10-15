#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRankSkillModifyConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FFFAMEGNLEK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDB8020)
#define FFFAMEGNLEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDB8620)
#define FFFAMEGNLEK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDB8190)
#define FFFAMEGNLEK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDB7A50)
#define FFFAMEGNLEK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDB7CE0)
#define FFFAMEGNLEK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDB8230)
#define FFFAMEGNLEK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDB8280)
#define FFFAMEGNLEK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDB8060)
#define FFFAMEGNLEK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDB7C80)
#define FFFAMEGNLEK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDB7E50)
#define FFFAMEGNLEK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDB80F0)
#define FFFAMEGNLEK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDB79D0)

inline static constexpr unsigned int FFFAMEGNLEK_TypeDefinitionIndex = 13517;

	class FFFAMEGNLEK : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FFFAMEGNLEK")->GetStaticField(0x10940);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FFFAMEGNLEK")->GetStaticField(0x10948);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRankSkillModifyConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRankSkillModifyConfigRow*>**)UnitySDK::FromName("", "FFFAMEGNLEK")->GetStaticField(0x10950);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FFFAMEGNLEK")->GetStaticField(0x36B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FFFAMEGNLEK")->GetStaticField(0x36B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFFAMEGNLEK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRankSkillModifyConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRankSkillModifyConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FFFAMEGNLEK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FFFAMEGNLEK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRankSkillModifyConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRankSkillModifyConfigRow*>(*)())((::PBYTE)hIl2Cpp + FFFAMEGNLEK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRankSkillModifyConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightRankSkillModifyConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FFFAMEGNLEK_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FFFAMEGNLEK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFFAMEGNLEK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFFAMEGNLEK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FFFAMEGNLEK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FFFAMEGNLEK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FFFAMEGNLEK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRankSkillModifyConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRankSkillModifyConfigRow*))((::PBYTE)hIl2Cpp + FFFAMEGNLEK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
