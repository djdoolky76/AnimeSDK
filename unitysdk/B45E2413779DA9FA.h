#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define B45E2413779DA9FA_A83BD201FCBCE144_OFFSET UNITYSDK_OFFSET(0x3899DA0)
#define B45E2413779DA9FA_B27B497866DBE384_OFFSET UNITYSDK_OFFSET(0x389A170)
#define B45E2413779DA9FA_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x3899BE0)
#define B45E2413779DA9FA_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x389A060)
#define B45E2413779DA9FA_F8DDFEE7F8C52482_OFFSET UNITYSDK_OFFSET(0x23D9F80)
#define B45E2413779DA9FA_FC3208D7B8C7EE04_1_OFFSET UNITYSDK_OFFSET(0x3899A10)
#define B45E2413779DA9FA_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x3899B50)
#define B45E2413779DA9FA__CTOR_OFFSET UNITYSDK_OFFSET(0x389A150)

inline static constexpr unsigned int B45E2413779DA9FA_TypeDefinitionIndex = 18140;

class B45E2413779DA9FA : public ::System::Object
{
public:
	::UnityEngine::Vector3 EB9C53744D09DA61; // 0x10

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + B45E2413779DA9FA_EA28CF291EBB2931_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + B45E2413779DA9FA_FC3208D7B8C7EE04_OFFSET))(this, A86A90C31A146E9C);
	}

	::System::Void _ctor(::UnityEngine::Vector3 EB211B01816ACA79)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + B45E2413779DA9FA__CTOR_OFFSET))(this, EB211B01816ACA79);
	}

	::System::Type* B27B497866DBE384()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + B45E2413779DA9FA_B27B497866DBE384_OFFSET))(this);
	}

	::System::Boolean A83BD201FCBCE144(::System::Text::StringBuilder* B076D6911116907A)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + B45E2413779DA9FA_A83BD201FCBCE144_OFFSET))(this, B076D6911116907A);
	}

	::UnityEngine::Vector3 F8DDFEE7F8C52482()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + B45E2413779DA9FA_F8DDFEE7F8C52482_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04_1(::B45E2413779DA9FA* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::B45E2413779DA9FA*))((::PBYTE)hIl2Cpp + B45E2413779DA9FA_FC3208D7B8C7EE04_1_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + B45E2413779DA9FA_B996A70283B60FAC_OFFSET))(this);
	}
};
