#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightEquipCategoryInfoRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MDJGPHKFLMI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D149EE0)
#define MDJGPHKFLMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D14A4B0)
#define MDJGPHKFLMI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D14A050)
#define MDJGPHKFLMI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D149950)
#define MDJGPHKFLMI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D149BE0)
#define MDJGPHKFLMI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D14A0F0)
#define MDJGPHKFLMI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D14A140)
#define MDJGPHKFLMI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D149F20)
#define MDJGPHKFLMI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D149B80)
#define MDJGPHKFLMI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D149D50)
#define MDJGPHKFLMI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D149FB0)
#define MDJGPHKFLMI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1498D0)

	class MDJGPHKFLMI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipCategoryInfoRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipCategoryInfoRow*>**)UnitySDK::FromName("", "MDJGPHKFLMI")->GetStaticField(0x493B0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MDJGPHKFLMI")->GetStaticField(0x493B8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MDJGPHKFLMI")->GetStaticField(0x493C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MDJGPHKFLMI")->GetStaticField(0x11330);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MDJGPHKFLMI")->GetStaticField(0x11331);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDJGPHKFLMI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipCategoryInfoRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipCategoryInfoRow*>*(*)())((::PBYTE)hIl2Cpp + MDJGPHKFLMI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MDJGPHKFLMI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipCategoryInfoRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipCategoryInfoRow*>(*)())((::PBYTE)hIl2Cpp + MDJGPHKFLMI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightEquipCategoryInfoRow* LMBKNCAIDLC(::RPG::GameCore::GridFightEquipCategory a1)
		{
			return ((::RPG::GameCore::GridFightEquipCategoryInfoRow*(*)(::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + MDJGPHKFLMI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MDJGPHKFLMI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDJGPHKFLMI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDJGPHKFLMI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MDJGPHKFLMI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MDJGPHKFLMI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MDJGPHKFLMI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightEquipCategoryInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightEquipCategoryInfoRow*))((::PBYTE)hIl2Cpp + MDJGPHKFLMI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
