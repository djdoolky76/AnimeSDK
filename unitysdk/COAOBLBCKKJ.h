#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EAEOPOJCHOA;
namespace MoleMole::Vehicle { class VehicleCollider; }
namespace MoleMole::Vehicle { class VehicleConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define COAOBLBCKKJ_DMHGHNCBMBK_OFFSET UNITYSDK_OFFSET(0x14979D80)
#define COAOBLBCKKJ_EFLOBCOCDLD_OFFSET UNITYSDK_OFFSET(0x14979000)
#define COAOBLBCKKJ_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x14979090)
#define COAOBLBCKKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14978F30)

inline static constexpr unsigned int COAOBLBCKKJ_TypeDefinitionIndex = 54116;

class COAOBLBCKKJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Vehicle::VehicleCollider*>* GPBNKNIJCNK; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Vehicle::VehicleCollider*>* AGNGHMEOONH; // 0x18
	::MoleMole::Vehicle::VehicleConfig* CEJENBBHBBG; // 0x20

	::System::Void _ctor(::COAOBLBCKKJ* OJBPBPBFOGL, ::MoleMole::Vehicle::VehicleConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::COAOBLBCKKJ*, ::MoleMole::Vehicle::VehicleConfig*))((::PBYTE)hIl2Cpp + COAOBLBCKKJ__CTOR_OFFSET))(this, OJBPBPBFOGL, DFMKILICPFB);
	}

	::System::Void EFLOBCOCDLD(::MoleMole::Vehicle::VehicleCollider* EHHHMFKHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleCollider*))((::PBYTE)hIl2Cpp + COAOBLBCKKJ_EFLOBCOCDLD_OFFSET))(this, EHHHMFKHNAI);
	}

	::System::Void OKJCHFGIKBH(::UnityEngine::Transform* GKBJOPJKCLB, ::EAEOPOJCHOA* NDMNMLLEJCE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::EAEOPOJCHOA*))((::PBYTE)hIl2Cpp + COAOBLBCKKJ_OKJCHFGIKBH_OFFSET))(this, GKBJOPJKCLB, NDMNMLLEJCE);
	}

	::System::Void DMHGHNCBMBK(::Il2CppArray<::MoleMole::Vehicle::VehicleCollider*>* HBGGCCKJJDA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::Vehicle::VehicleCollider*>*))((::PBYTE)hIl2Cpp + COAOBLBCKKJ_DMHGHNCBMBK_OFFSET))(this, HBGGCCKJJDA);
	}
};
