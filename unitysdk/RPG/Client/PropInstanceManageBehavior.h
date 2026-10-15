#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"
class ABGNMNDCEND;
class IDGOINOHFEE;
namespace RPG::Client { class PropInstanceManageMonoPlugin; }
namespace RPG::Client { class PropInstanceTransform; }
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_ALOFNJGJGBE_OFFSET UNITYSDK_OFFSET(0xDDF6A40)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xDDF5780)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xDDF73A0)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_EIDHIFDEICG_OFFSET UNITYSDK_OFFSET(0xDDF57F0)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_FPBOCLPABIN_OFFSET UNITYSDK_OFFSET(0xDDF6660)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_GET_TRANSFORMVARIENTS_OFFSET UNITYSDK_OFFSET(0xDDF5CB0)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xDDF5290)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_IKBMOFDJMIF_OFFSET UNITYSDK_OFFSET(0xDDF5EA0)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xDDF5910)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_KDBHKHCEBKB_OFFSET UNITYSDK_OFFSET(0xDDF52D0)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDDF4960)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xDDF59F0)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_MDAELOGMBOM_OFFSET UNITYSDK_OFFSET(0xDDF61B0)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xDDF5720)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xDDF5DF0)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xDDF5980)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_OMLBBKOLODP_OFFSET UNITYSDK_OFFSET(0xDDF4A10)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xDDF51C0)
#define RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xDDF5DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PropInstanceManageBehavior_TypeDefinitionIndex = 70748;

	class PropInstanceManageBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Boolean _IsVisiable; // 0x38
		::System::Byte _padding0[0x7];
		::UnityEngine::MaterialPropertyBlock* _MaterialPropertyBlock; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _InstanceMatrices; // 0x48
		::ABGNMNDCEND* _ItemRenderer; // 0x50
		::RPG::Client::LiteInstancedItem::ItemPrototype* _ItemPrototype; // 0x58
		::System::Collections::Generic::List_1<::IDGOINOHFEE*>* _ItemInstances; // 0x60
		::System::Boolean _IsInit; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PropInstanceTransform*>* get_TransformVarients()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PropInstanceTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_GET_TRANSFORMVARIENTS_OFFSET))(this);
		}

		::System::Void IKBMOFDJMIF(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_IKBMOFDJMIF_OFFSET))(this, a1);
		}

		::System::Void FPBOCLPABIN(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_FPBOCLPABIN_OFFSET))(this, a1);
		}

		::System::Void KDBHKHCEBKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_KDBHKHCEBKB_OFFSET))(this);
		}

		::System::Void MDAELOGMBOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_MDAELOGMBOM_OFFSET))(this);
		}

		::System::Void ALOFNJGJGBE(::System::Collections::Generic::List_1<::RPG::Client::PropInstanceTransform*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PropInstanceTransform*>*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_ALOFNJGJGBE_OFFSET))(this, a1, a2);
		}

		::System::Void OMLBBKOLODP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_OMLBBKOLODP_OFFSET))(this);
		}

		::System::Void EIDHIFDEICG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_EIDHIFDEICG_OFFSET))(this);
		}

		::RPG::Client::PropInstanceManageMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::PropInstanceManageMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
