#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleRecommendEquipConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLLNBBCELHP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE073F0)
#define FLLNBBCELHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE079B0)
#define FLLNBBCELHP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE07560)
#define FLLNBBCELHP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE06E50)
#define FLLNBBCELHP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE070E0)
#define FLLNBBCELHP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE07600)
#define FLLNBBCELHP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE07650)
#define FLLNBBCELHP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE07430)
#define FLLNBBCELHP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE07080)
#define FLLNBBCELHP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE07210)
#define FLLNBBCELHP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE074C0)
#define FLLNBBCELHP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE06DD0)

inline static constexpr unsigned int FLLNBBCELHP_TypeDefinitionIndex = 13530;

	class FLLNBBCELHP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FLLNBBCELHP")->GetStaticField(0x14AE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FLLNBBCELHP")->GetStaticField(0x14AE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*>**)UnitySDK::FromName("", "FLLNBBCELHP")->GetStaticField(0x14AF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FLLNBBCELHP")->GetStaticField(0x4F30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FLLNBBCELHP")->GetStaticField(0x4F31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLLNBBCELHP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FLLNBBCELHP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLLNBBCELHP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*>(*)())((::PBYTE)hIl2Cpp + FLLNBBCELHP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::GridFightPreset a2)
		{
			return ((::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*(*)(::System::UInt32, ::RPG::GameCore::GridFightPreset))((::PBYTE)hIl2Cpp + FLLNBBCELHP_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLLNBBCELHP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLLNBBCELHP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLLNBBCELHP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FLLNBBCELHP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLLNBBCELHP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FLLNBBCELHP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + FLLNBBCELHP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
