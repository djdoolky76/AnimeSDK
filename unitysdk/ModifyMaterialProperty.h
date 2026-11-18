#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MODIFYMATERIALPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A1F60)

inline static constexpr unsigned int ModifyMaterialProperty_TypeDefinitionIndex = 44853;

class ModifyMaterialProperty : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* hdrColorPropertyValues; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* colorPropertyValues; // 0x18
	::System::Collections::Generic::List_1<::System::Object*>* floatPropertyValues; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* vector3PropertyValues; // 0x28
	::System::Collections::Generic::List_1<::System::Object*>* vector2PropertyValues; // 0x30
	::System::Collections::Generic::List_1<::System::Object*>* vector4PropertyValues; // 0x38
	::System::Collections::Generic::List_1<::System::Object*>* boolPropertyValues; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFYMATERIALPROPERTY__CTOR_OFFSET))(this);
	}
};
