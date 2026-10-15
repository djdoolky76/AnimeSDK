#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBackendRoleEquipmentConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIAHKGDGNAG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0F5440)
#define LIAHKGDGNAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0F5A70)
#define LIAHKGDGNAG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0F55B0)
#define LIAHKGDGNAG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0F4E30)
#define LIAHKGDGNAG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0F50C0)
#define LIAHKGDGNAG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0F5650)
#define LIAHKGDGNAG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0F56A0)
#define LIAHKGDGNAG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0F5480)
#define LIAHKGDGNAG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0F5060)
#define LIAHKGDGNAG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0F5230)
#define LIAHKGDGNAG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0F5510)
#define LIAHKGDGNAG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0F4DB0)

inline static constexpr unsigned int LIAHKGDGNAG_TypeDefinitionIndex = 13528;

	class LIAHKGDGNAG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LIAHKGDGNAG")->GetStaticField(0x3D980);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*>**)UnitySDK::FromName("", "LIAHKGDGNAG")->GetStaticField(0x3D988);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LIAHKGDGNAG")->GetStaticField(0x3D990);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LIAHKGDGNAG")->GetStaticField(0xD330);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LIAHKGDGNAG")->GetStaticField(0xD331);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIAHKGDGNAG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LIAHKGDGNAG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIAHKGDGNAG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*>(*)())((::PBYTE)hIl2Cpp + LIAHKGDGNAG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LIAHKGDGNAG_LMBKNCAIDLC_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIAHKGDGNAG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIAHKGDGNAG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIAHKGDGNAG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LIAHKGDGNAG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LIAHKGDGNAG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LIAHKGDGNAG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightBackendRoleEquipmentConfigRow*))((::PBYTE)hIl2Cpp + LIAHKGDGNAG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
