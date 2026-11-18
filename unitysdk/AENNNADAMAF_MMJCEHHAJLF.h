#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DHGMDONDOHI;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collider; }

#define AENNNADAMAF_MMJCEHHAJLF_ACPGIIDLIOE_OFFSET UNITYSDK_OFFSET(0x16FE2140)
#define AENNNADAMAF_MMJCEHHAJLF_CKPPKGOGPHC_OFFSET UNITYSDK_OFFSET(0x16FE1F60)
#define AENNNADAMAF_MMJCEHHAJLF_JMNMCPAAKEE_OFFSET UNITYSDK_OFFSET(0x16FE20A0)
#define AENNNADAMAF_MMJCEHHAJLF_OODLJDACOPD_OFFSET UNITYSDK_OFFSET(0x16FE21D0)
#define AENNNADAMAF_MMJCEHHAJLF__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE1F50)

inline static constexpr unsigned int AENNNADAMAF_MMJCEHHAJLF_TypeDefinitionIndex = 81992;

class AENNNADAMAF_MMJCEHHAJLF : public ::System::Object
{
public:
	::DHGMDONDOHI* GBELIHABEDH; // 0x10
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENNNADAMAF_MMJCEHHAJLF__CTOR_OFFSET))(this);
	}

	::System::Void CKPPKGOGPHC(::UnityEngine::Collider* PIIPCLCCOIG, ::System::Object* MINPNEAOEMM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + AENNNADAMAF_MMJCEHHAJLF_CKPPKGOGPHC_OFFSET))(this, PIIPCLCCOIG, MINPNEAOEMM);
	}

	::System::Void JMNMCPAAKEE(::UnityEngine::Collider* PIIPCLCCOIG, ::System::Object* MINPNEAOEMM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + AENNNADAMAF_MMJCEHHAJLF_JMNMCPAAKEE_OFFSET))(this, PIIPCLCCOIG, MINPNEAOEMM);
	}

	::System::Void ACPGIIDLIOE(::UnityEngine::Collider* PIIPCLCCOIG, ::System::Object* MINPNEAOEMM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + AENNNADAMAF_MMJCEHHAJLF_ACPGIIDLIOE_OFFSET))(this, PIIPCLCCOIG, MINPNEAOEMM);
	}

	::System::Void OODLJDACOPD(::UnityEngine::Collider* PIIPCLCCOIG, ::System::Object* MINPNEAOEMM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + AENNNADAMAF_MMJCEHHAJLF_OODLJDACOPD_OFFSET))(this, PIIPCLCCOIG, MINPNEAOEMM);
	}
};
