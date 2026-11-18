#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCBBMOHJDOJ.h"
#include "unitysdk/System/Object.h"

class GEIHCPAOKKK;
namespace MoleMole::Battle { class Entity; }

#define GBPMHJDCGKB_AJBIKNKIDCP_OFFSET UNITYSDK_OFFSET(0x15CD18C0)
#define GBPMHJDCGKB_GBDNLMFAOLB_OFFSET UNITYSDK_OFFSET(0x15CD1510)
#define GBPMHJDCGKB_MDLEBAPAGED_OFFSET UNITYSDK_OFFSET(0x15CD1610)
#define GBPMHJDCGKB__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CD1500)

inline static constexpr unsigned int GBPMHJDCGKB_TypeDefinitionIndex = 57313;

class GBPMHJDCGKB : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_DIGGEMGIEPL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GBPMHJDCGKB_TypeDefinitionIndex)->GetStaticField(0x12CC0);
	}
	static ::DCBBMOHJDOJ* StaticGet_BBMJBKICJAI()
	{
		return (::DCBBMOHJDOJ*)Il2CppClass::FromTypeDefinitionIndex(GBPMHJDCGKB_TypeDefinitionIndex)->GetStaticField(0x12CC4);
	}
	static ::System::Boolean* StaticGet_LGOMFJLOHAL()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GBPMHJDCGKB_TypeDefinitionIndex)->GetStaticField(0x12CD4);
	}
	// static const ::System::Single JCDMHGBBPOA; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBPMHJDCGKB__CCTOR_OFFSET))();
	}

	static ::System::Boolean GBDNLMFAOLB(::DCBBMOHJDOJ& LIAANNIHHMK)
	{
		return ((::System::Boolean(*)(::DCBBMOHJDOJ&))((::PBYTE)hIl2Cpp + GBPMHJDCGKB_GBDNLMFAOLB_OFFSET))(LIAANNIHHMK);
	}

	static ::System::Boolean MDLEBAPAGED(::DCBBMOHJDOJ& LIAANNIHHMK)
	{
		return ((::System::Boolean(*)(::DCBBMOHJDOJ&))((::PBYTE)hIl2Cpp + GBPMHJDCGKB_MDLEBAPAGED_OFFSET))(LIAANNIHHMK);
	}

	static ::System::Single AJBIKNKIDCP(::MoleMole::Battle::Entity* FFHNMDNPGMC, ::GEIHCPAOKKK* LHPFMGBDFPN)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + GBPMHJDCGKB_AJBIKNKIDCP_OFFSET))(FFHNMDNPGMC, LHPFMGBDFPN);
	}
};
