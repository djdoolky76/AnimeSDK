#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECIAICDLAHO;
class KNGDGMPKJIF;
class LBJLBMOOJGM;
namespace System { class Object; }

#define NGJBFLIFANP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC7C460)
#define NGJBFLIFANP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC88240)
#define NGJBFLIFANP_KEBEIGGJIPA_OFFSET UNITYSDK_OFFSET(0x1EC88390)

inline static constexpr unsigned int NGJBFLIFANP_TypeDefinitionIndex = 44311;

	class NGJBFLIFANP : public ::System::Object
	{
	public:
		::KNGDGMPKJIF* CCLOECKDIKH; // 0x10
		::System::Void _ctor(::KNGDGMPKJIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNGDGMPKJIF*))((::PBYTE)hIl2Cpp + NGJBFLIFANP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJBFLIFANP_DISPOSE_OFFSET))(this);
		}

		::System::Object* KEBEIGGJIPA(::ECIAICDLAHO* a1, ::LBJLBMOOJGM* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::ECIAICDLAHO*, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + NGJBFLIFANP_KEBEIGGJIPA_OFFSET))(this, a1, a2);
		}

	};
