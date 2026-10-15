#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONBINEIJCEG;

#define IBFOLDJOINN_CTOR_OFFSET UNITYSDK_OFFSET(0x15E31810)

inline static constexpr unsigned int IBFOLDJOINN_TypeDefinitionIndex = 54322;

	class IBFOLDJOINN : public ::System::Object
	{
	public:
		::ONBINEIJCEG* FJCAKOIDONG; // 0x10
		::System::Int32 GMDBHJKEAEI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFOLDJOINN_CTOR_OFFSET))(this);
		}

	};
