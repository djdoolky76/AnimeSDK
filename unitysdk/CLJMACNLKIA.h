#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitEquipTemplateConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLJMACNLKIA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EEC9DA0)
#define CLJMACNLKIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EECA3A0)
#define CLJMACNLKIA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EEC9F10)
#define CLJMACNLKIA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EEC97D0)
#define CLJMACNLKIA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EEC9A60)
#define CLJMACNLKIA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EEC9FB0)
#define CLJMACNLKIA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EECA000)
#define CLJMACNLKIA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EEC9DE0)
#define CLJMACNLKIA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EEC9A00)
#define CLJMACNLKIA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EEC9BD0)
#define CLJMACNLKIA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EEC9E70)
#define CLJMACNLKIA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EEC9750)

inline static constexpr unsigned int CLJMACNLKIA_TypeDefinitionIndex = 13841;

	class CLJMACNLKIA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CLJMACNLKIA")->GetStaticField(0x357A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CLJMACNLKIA")->GetStaticField(0x357A8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEquipTemplateConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEquipTemplateConfigRow*>**)UnitySDK::FromName("", "CLJMACNLKIA")->GetStaticField(0x357B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CLJMACNLKIA")->GetStaticField(0xB620);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CLJMACNLKIA")->GetStaticField(0xB621);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLJMACNLKIA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEquipTemplateConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEquipTemplateConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLJMACNLKIA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLJMACNLKIA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEquipTemplateConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEquipTemplateConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLJMACNLKIA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitEquipTemplateConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightTraitEquipTemplateConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLJMACNLKIA_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLJMACNLKIA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLJMACNLKIA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLJMACNLKIA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLJMACNLKIA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLJMACNLKIA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CLJMACNLKIA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitEquipTemplateConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitEquipTemplateConfigRow*))((::PBYTE)hIl2Cpp + CLJMACNLKIA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
