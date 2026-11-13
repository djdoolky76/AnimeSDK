#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EquipmentAtlasRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKJBODDIKDD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E82EE40)
#define HKJBODDIKDD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E82F3C0)
#define HKJBODDIKDD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E82EFB0)
#define HKJBODDIKDD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E82E8F0)
#define HKJBODDIKDD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E82EB80)
#define HKJBODDIKDD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E82F050)
#define HKJBODDIKDD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E82F0A0)
#define HKJBODDIKDD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E82EE80)
#define HKJBODDIKDD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E82EB20)
#define HKJBODDIKDD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E82ECB0)
#define HKJBODDIKDD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E82EF10)
#define HKJBODDIKDD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E82E870)

inline static constexpr unsigned int HKJBODDIKDD_TypeDefinitionIndex = 13321;

	class HKJBODDIKDD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HKJBODDIKDD")->GetStaticField(0x18540);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentAtlasRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentAtlasRow*>**)UnitySDK::FromName("", "HKJBODDIKDD")->GetStaticField(0x18548);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HKJBODDIKDD")->GetStaticField(0x18550);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HKJBODDIKDD")->GetStaticField(0x5770);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HKJBODDIKDD")->GetStaticField(0x5771);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKJBODDIKDD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentAtlasRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentAtlasRow*>*(*)())((::PBYTE)hIl2Cpp + HKJBODDIKDD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HKJBODDIKDD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentAtlasRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentAtlasRow*>(*)())((::PBYTE)hIl2Cpp + HKJBODDIKDD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::EquipmentAtlasRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::EquipmentAtlasRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HKJBODDIKDD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HKJBODDIKDD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKJBODDIKDD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKJBODDIKDD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HKJBODDIKDD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HKJBODDIKDD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HKJBODDIKDD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::EquipmentAtlasRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EquipmentAtlasRow*))((::PBYTE)hIl2Cpp + HKJBODDIKDD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
