#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"
namespace Sirenix::OdinInspector { class PropertyGroupAttribute; }
namespace System { class String; }

#define BBDIPDMEFDO_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1CCF2CC0)
#define BBDIPDMEFDO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CCF2C50)
#define BBDIPDMEFDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF2BE0)

inline static constexpr unsigned int BBDIPDMEFDO_TypeDefinitionIndex = 24998;

	class BBDIPDMEFDO : public ::Sirenix::OdinInspector::PropertyGroupAttribute
	{
	public:
		::System::String* KBOOIAJEMOI; // 0x28
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + BBDIPDMEFDO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BBDIPDMEFDO_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + BBDIPDMEFDO_COMBINEVALUESWITH_OFFSET))(this, a1);
		}

	};
