#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class MaterialSwitchMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_MATERIALSWITCHBEHAVIOR_BBMNPLINHPB_OFFSET UNITYSDK_OFFSET(0xD5DFBE0)
#define RPG_CLIENT_MATERIALSWITCHBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xD5DF7E0)
#define RPG_CLIENT_MATERIALSWITCHBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD5E0450)
#define RPG_CLIENT_MATERIALSWITCHBEHAVIOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD5DFB40)
#define RPG_CLIENT_MATERIALSWITCHBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xD5DF740)
#define RPG_CLIENT_MATERIALSWITCHBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xD5DF9E0)
#define RPG_CLIENT_MATERIALSWITCHBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD5DF610)
#define RPG_CLIENT_MATERIALSWITCHBEHAVIOR_LFJHDLLFIMP_OFFSET UNITYSDK_OFFSET(0xD5DFB90)
#define RPG_CLIENT_MATERIALSWITCHBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xD5DF780)
#define RPG_CLIENT_MATERIALSWITCHBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xD5DFAE0)
#define RPG_CLIENT_MATERIALSWITCHBEHAVIOR_NIELMNJDONP_OFFSET UNITYSDK_OFFSET(0xD5DF950)
#define RPG_CLIENT_MATERIALSWITCHBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xD5DFA40)
#define RPG_CLIENT_MATERIALSWITCHBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xD5DF670)
#define RPG_CLIENT_MATERIALSWITCHBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xD5DFAA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialSwitchBehavior_TypeDefinitionIndex = 70723;

	class MaterialSwitchBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* _LastMaterialAssets; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _CachedMatInstances; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHBEHAVIOR_DISPOSE_OFFSET))(this);
		}

		::System::Void LFJHDLLFIMP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHBEHAVIOR_LFJHDLLFIMP_OFFSET))(this, a1);
		}

		::System::Void BBMNPLINHPB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHBEHAVIOR_BBMNPLINHPB_OFFSET))(this, a1);
		}

		::System::Void NIELMNJDONP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHBEHAVIOR_NIELMNJDONP_OFFSET))(this);
		}

		::RPG::Client::MaterialSwitchMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::MaterialSwitchMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSWITCHBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
