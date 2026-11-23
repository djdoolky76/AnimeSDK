#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BD3A9F619D176EFE.h"

class E9311ED9FFB8F044;
namespace System { class Object; }
namespace UnityEngine { class FAED0374422E783A; }

#define EC76D0D1EBA88BA7_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x16784F0)
#define EC76D0D1EBA88BA7_BE45898387226EEC_OFFSET UNITYSDK_OFFSET(0x1678550)
#define EC76D0D1EBA88BA7_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x1678420)
#define EC76D0D1EBA88BA7__CTOR_OFFSET UNITYSDK_OFFSET(0x1678540)

inline static constexpr unsigned int EC76D0D1EBA88BA7_TypeDefinitionIndex = 41;

class EC76D0D1EBA88BA7 : public ::BD3A9F619D176EFE
{
public:
	::E9311ED9FFB8F044* ED5CE2E00999B89B; // 0x18
	::UnityEngine::FAED0374422E783A* B305282FBBA723F6; // 0x20
	::System::Single B17B9B9C54637FC1; // 0x28

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EC76D0D1EBA88BA7_B996A70283B60FAC_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC76D0D1EBA88BA7__CTOR_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EC76D0D1EBA88BA7_FC3208D7B8C7EE04_OFFSET))(this, A86A90C31A146E9C);
	}

	::System::Boolean BE45898387226EEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EC76D0D1EBA88BA7_BE45898387226EEC_OFFSET))(this);
	}
};
