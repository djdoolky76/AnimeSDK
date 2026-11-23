#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class FieldInfo; }

#define F15ACB67F251ECB6__CTOR_OFFSET UNITYSDK_OFFSET(0x3C0AAB0)

inline static constexpr unsigned int F15ACB67F251ECB6_TypeDefinitionIndex = 11337;

class F15ACB67F251ECB6 : public ::System::Object
{
public:
	::System::Int64 F63BB90F38EBC05C; // 0x10
	::System::Reflection::FieldInfo* E31272AD13B9CBD6; // 0x18
	::Il2CppArray<::System::Int32>* EF4468D519B72CD6; // 0x20

	::System::Void _ctor(::System::Int64 BCCA9A68E6B57048, ::System::Reflection::FieldInfo* F7E0282B5F145F26, ::Il2CppArray<::System::Int32>* E3743D23062CDA62)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Reflection::FieldInfo*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + F15ACB67F251ECB6__CTOR_OFFSET))(this, BCCA9A68E6B57048, F7E0282B5F145F26, E3743D23062CDA62);
	}
};
