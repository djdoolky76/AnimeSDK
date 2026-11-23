#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class E623C1DDEB492C13;
namespace System { class Object; }

#define A418C49FA6A8C1F7_AB246E6E67A3F279_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define A418C49FA6A8C1F7_AB246E6E67A3F279__CTOR_OFFSET UNITYSDK_OFFSET(0x3744CE0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int AB246E6E67A3F279_TypeDefinitionIndex = 14126;

	class AB246E6E67A3F279 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_AB246E6E67A3F279__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::E623C1DDEB492C13* Invoke()
		{
			return ((::E623C1DDEB492C13*(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_AB246E6E67A3F279_INVOKE_OFFSET))(this);
		}
	};
}
