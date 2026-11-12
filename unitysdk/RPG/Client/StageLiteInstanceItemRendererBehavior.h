#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
class ABGNMNDCEND;
class IDGOINOHFEE;
namespace RPG::Client { class StageLiteInstanceItemRendererMonoPlugin; }
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xEBCF440)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xEBCF710)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_DNCDOAJMPNN_OFFSET UNITYSDK_OFFSET(0xEBCE760)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xEBCF690)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xEBCF4A0)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xEBCF0D0)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xEBCF560)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xEBCF3E0)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xEBCF630)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xEBCF500)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xEBCF380)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_PONAOABPGLL_OFFSET UNITYSDK_OFFSET(0xEBCE5B0)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xEBCF5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageLiteInstanceItemRendererBehavior_TypeDefinitionIndex = 72997;

	class StageLiteInstanceItemRendererBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LiteInstancedItem::ItemPrototype*, ::System::Collections::Generic::List_1<::IDGOINOHFEE*>*>* _TSCItemPrototypeItemMaps; // 0x38
		::ABGNMNDCEND* _ItemRenderer; // 0x40
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>* _InstancedMaterialPair; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void PONAOABPGLL(::IDGOINOHFEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDGOINOHFEE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_PONAOABPGLL_OFFSET))(this, a1);
		}

		::IDGOINOHFEE* DNCDOAJMPNN(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3)
		{
			return ((::IDGOINOHFEE*(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_DNCDOAJMPNN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::RPG::Client::StageLiteInstanceItemRendererMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::StageLiteInstanceItemRendererMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
