#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BD3A9F619D176EFE.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;
namespace System { class Object; }
namespace System { class String; }

#define EC135A9AB6F7FF7F_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x1844670)
#define EC135A9AB6F7FF7F_BE45898387226EEC_OFFSET UNITYSDK_OFFSET(0x1678550)
#define EC135A9AB6F7FF7F_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x18445A0)
#define EC135A9AB6F7FF7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1678540)

inline static constexpr unsigned int EC135A9AB6F7FF7F_TypeDefinitionIndex = 1184;

class EC135A9AB6F7FF7F : public ::BD3A9F619D176EFE
{
public:
	::AB642D1382756991* E63E0F25F251B753; // 0x18
	::System::String* AEDF565CE654EE81; // 0x20
	::UnityEngine::Vector3 A8FA03AB120F3647; // 0x28

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EC135A9AB6F7FF7F_B996A70283B60FAC_OFFSET))(this);
	}

	::System::Boolean BE45898387226EEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EC135A9AB6F7FF7F_BE45898387226EEC_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EC135A9AB6F7FF7F_FC3208D7B8C7EE04_OFFSET))(this, A86A90C31A146E9C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC135A9AB6F7FF7F__CTOR_OFFSET))(this);
	}
};
