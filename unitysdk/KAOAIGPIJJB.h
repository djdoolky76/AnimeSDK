#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define KAOAIGPIJJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC7AEA0)
#define KAOAIGPIJJB_KHJNHDOJDDP_1_OFFSET UNITYSDK_OFFSET(0x1EC7AFB0)

inline static constexpr unsigned int KAOAIGPIJJB_TypeDefinitionIndex = 44298;

	class KAOAIGPIJJB : public ::System::Object
	{
	public:
		::LBJLBMOOJGM* MHFHMGGMICB; // 0x10
		::System::Void _ctor(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + KAOAIGPIJJB_CTOR_OFFSET))(this, a1);
		}

		::System::Object* KHJNHDOJDDP_1(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + KAOAIGPIJJB_KHJNHDOJDDP_1_OFFSET))(this, a1, a2);
		}

	};
