#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
class ABGNMNDCEND;
class IDGOINOHFEE;
namespace RPG::Client { class LinearModuleRendererMonoPlugin; }
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xD3F0F70)
#define RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xD3F0D30)
#define RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD3F0F60)
#define RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_DBECNBFPPIP_OFFSET UNITYSDK_OFFSET(0xD3F09D0)
#define RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_DEJAKIPKGKJ_OFFSET UNITYSDK_OFFSET(0xD3EFEF0)
#define RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_GET_ISINIT_OFFSET UNITYSDK_OFFSET(0xD3EFEE0)
#define RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xD3F0960)
#define RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xD3F0D90)
#define RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD3F0BC0)
#define RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xD3F0CC0)
#define RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xD3F0F00)
#define RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xD3F0DF0)
#define RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xD3F0C50)
#define RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xD3F0EC0)
#define RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xD3F0E50)

namespace RPG::Client
{
	inline static constexpr unsigned int LinearModuleRendererBehavior_TypeDefinitionIndex = 70900;

	class LinearModuleRendererBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::IDGOINOHFEE*>* _ItemInstances; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::LiteInstancedItem::ItemPrototype*>* _ItemPrototypes; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _InstMats; // 0x48
		::ABGNMNDCEND* _ItemRenderer; // 0x50
		::System::Boolean _IsInit; // 0x58
		static ::System::Int32* StaticGet__UseInstanceItemID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LinearModuleRendererBehavior")->GetStaticField(0x7550);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Boolean get_IsInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_GET_ISINIT_OFFSET))(this);
		}

		::System::Void DEJAKIPKGKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_DEJAKIPKGKJ_OFFSET))(this);
		}

		::System::Void DBECNBFPPIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_DBECNBFPPIP_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::RPG::Client::LinearModuleRendererMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::LinearModuleRendererMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINEARMODULERENDERERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
