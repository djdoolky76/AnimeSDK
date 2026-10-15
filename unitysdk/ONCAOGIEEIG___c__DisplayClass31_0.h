#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODGPPIHLOFF;
namespace System { class Action; }

#define ONCAOGIEEIG___C__DISPLAYCLASS31_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBF45650)
#define ONCAOGIEEIG___C__DISPLAYCLASS31_0__APPLYLAYER_B__0_OFFSET UNITYSDK_OFFSET(0xBF47C10)

inline static constexpr unsigned int ONCAOGIEEIG___c__DisplayClass31_0_TypeDefinitionIndex = 49443;

	class ONCAOGIEEIG___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::Action* finishCallback; // 0x10
		::ODGPPIHLOFF* handle; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCAOGIEEIG___C__DISPLAYCLASS31_0_CTOR_OFFSET))(this);
		}

		::System::Void _ApplyLayer_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ONCAOGIEEIG___C__DISPLAYCLASS31_0__APPLYLAYER_B__0_OFFSET))(this, a1);
		}

	};
