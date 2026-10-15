#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJNIEDDIKOI;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define PAIKIFFPMNH___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC39B0)
#define PAIKIFFPMNH___C__DISPLAYCLASS8_0__UNREGISTEREVENTS_B__0_OFFSET UNITYSDK_OFFSET(0xBFC3ED0)

inline static constexpr unsigned int PAIKIFFPMNH___c__DisplayClass8_0_TypeDefinitionIndex = 78039;

	class PAIKIFFPMNH___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Object* owner; // 0x10
		::System::Predicate_1<::AJNIEDDIKOI*>* __9__0; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIKIFFPMNH___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _UnregisterEvents_b__0(::AJNIEDDIKOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJNIEDDIKOI*))((::PBYTE)hIl2Cpp + PAIKIFFPMNH___C__DISPLAYCLASS8_0__UNREGISTEREVENTS_B__0_OFFSET))(this, a1);
		}

	};
