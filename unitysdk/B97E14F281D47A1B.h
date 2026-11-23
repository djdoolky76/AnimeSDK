#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E9F68A58DDE88B4D.h"

namespace System { class Object; }

#define B97E14F281D47A1B_B1EBEA102799E26F_OFFSET UNITYSDK_OFFSET(0x2182910)
#define B97E14F281D47A1B_E0AA501E7AB5CB06_OFFSET UNITYSDK_OFFSET(0x2182890)
#define B97E14F281D47A1B_FEBA495D7EBB1A54_OFFSET UNITYSDK_OFFSET(0x2182840)
#define B97E14F281D47A1B__CTOR_OFFSET UNITYSDK_OFFSET(0x2182970)

inline static constexpr unsigned int B97E14F281D47A1B_TypeDefinitionIndex = 8771;

class B97E14F281D47A1B : public ::E9F68A58DDE88B4D
{
public:
	::System::Boolean FEBA495D7EBB1A54()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B97E14F281D47A1B_FEBA495D7EBB1A54_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B97E14F281D47A1B__CTOR_OFFSET))(this);
	}

	::System::Void B1EBEA102799E26F(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + B97E14F281D47A1B_B1EBEA102799E26F_OFFSET))(this, A86A90C31A146E9C);
	}

	::System::Void E0AA501E7AB5CB06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B97E14F281D47A1B_E0AA501E7AB5CB06_OFFSET))(this);
	}
};
