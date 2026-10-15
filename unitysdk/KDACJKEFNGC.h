#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"
namespace Sirenix::OdinInspector { class PropertyGroupAttribute; }
namespace System { class String; }

#define KDACJKEFNGC_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0xB346AE0)
#define KDACJKEFNGC_CTOR_OFFSET UNITYSDK_OFFSET(0xB346A70)
#define KDACJKEFNGC_GET_EXPANDED_OFFSET UNITYSDK_OFFSET(0xB346A50)
#define KDACJKEFNGC_SET_EXPANDED_OFFSET UNITYSDK_OFFSET(0xB346A60)

inline static constexpr unsigned int KDACJKEFNGC_TypeDefinitionIndex = 73663;

	class KDACJKEFNGC : public ::Sirenix::OdinInspector::PropertyGroupAttribute
	{
	public:
		::System::Boolean _Expanded_k__BackingField; // 0x28
		::System::Void _ctor(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + KDACJKEFNGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_Expanded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDACJKEFNGC_GET_EXPANDED_OFFSET))(this);
		}

		::System::Void set_Expanded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KDACJKEFNGC_SET_EXPANDED_OFFSET))(this, a1);
		}

		::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + KDACJKEFNGC_COMBINEVALUESWITH_OFFSET))(this, a1);
		}

	};
