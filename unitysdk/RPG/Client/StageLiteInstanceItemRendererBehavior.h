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

#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE118380)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE118650)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_DNCDOAJMPNN_OFFSET UNITYSDK_OFFSET(0xE1176A0)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE1185D0)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xE1183E0)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE118010)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xE1184A0)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE118320)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE118570)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xE118440)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE1182C0)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_PONAOABPGLL_OFFSET UNITYSDK_OFFSET(0xE1174F0)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xE118530)

namespace RPG::Client
{
	inline static constexpr unsigned int StageLiteInstanceItemRendererBehavior_TypeDefinitionIndex = 71018;

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
