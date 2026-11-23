#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BD3A9F619D176EFE.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;
namespace System { class Object; }
namespace System { class String; }

#define EE9DE34933D9FA4E_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x1873520)
#define EE9DE34933D9FA4E_BE45898387226EEC_OFFSET UNITYSDK_OFFSET(0x1678550)
#define EE9DE34933D9FA4E_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x1873450)
#define EE9DE34933D9FA4E__CTOR_OFFSET UNITYSDK_OFFSET(0x1678540)

inline static constexpr unsigned int EE9DE34933D9FA4E_TypeDefinitionIndex = 1258;

class EE9DE34933D9FA4E : public ::BD3A9F619D176EFE
{
public:
	::AB642D1382756991* E63E0F25F251B753; // 0x18
	::System::String* AEDF565CE654EE81; // 0x20
	::UnityEngine::Vector3 BDAF1413008EAB2F; // 0x28
	::System::Single E929B837ED256C6E; // 0x34
	::System::Single F5E027381E3F8454; // 0x38
	::System::Single BBEA724F73BD21CE; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE9DE34933D9FA4E__CTOR_OFFSET))(this);
	}

	::System::Boolean BE45898387226EEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EE9DE34933D9FA4E_BE45898387226EEC_OFFSET))(this);
	}

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EE9DE34933D9FA4E_B996A70283B60FAC_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EE9DE34933D9FA4E_FC3208D7B8C7EE04_OFFSET))(this, A86A90C31A146E9C);
	}
};
