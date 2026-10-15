#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHBPBPEINCA;
namespace System { class String; }

#define LIPEFHDJOMK___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB6DC1D0)
#define LIPEFHDJOMK___C__DISPLAYCLASS0_0__FINDBYNAME_B__0_OFFSET UNITYSDK_OFFSET(0xB6DC1E0)

inline static constexpr unsigned int LIPEFHDJOMK___c__DisplayClass0_0_TypeDefinitionIndex = 49695;

	class LIPEFHDJOMK___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPEFHDJOMK___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _FindByName_b__0(::NHBPBPEINCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHBPBPEINCA*))((::PBYTE)hIl2Cpp + LIPEFHDJOMK___C__DISPLAYCLASS0_0__FINDBYNAME_B__0_OFFSET))(this, a1);
		}

	};
