#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define BBKMLDGICCH_NIDOJAABCJL_CTOR_OFFSET UNITYSDK_OFFSET(0x10480)
#define BBKMLDGICCH_NIDOJAABCJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2E7FED0)
#define BBKMLDGICCH_NIDOJAABCJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x2E7FE50)
#define BBKMLDGICCH_NIDOJAABCJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E7FEE0)
#define BBKMLDGICCH_NIDOJAABCJL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D40)
#define BBKMLDGICCH_NIDOJAABCJL_GET_VIEWMODELTYPE_OFFSET UNITYSDK_OFFSET(0x1D30)

	struct alignas(8) BBKMLDGICCH_NIDOJAABCJL
	{
		::System::Type* _ViewModelType_k__BackingField; // 0x10
		::System::String* _Id_k__BackingField; // 0x18
		::System::Void _ctor(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + BBKMLDGICCH_NIDOJAABCJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Type* get_ViewModelType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKMLDGICCH_NIDOJAABCJL_GET_VIEWMODELTYPE_OFFSET))(this);
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKMLDGICCH_NIDOJAABCJL_GET_ID_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::BBKMLDGICCH_NIDOJAABCJL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BBKMLDGICCH_NIDOJAABCJL))((::PBYTE)hIl2Cpp + BBKMLDGICCH_NIDOJAABCJL_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBKMLDGICCH_NIDOJAABCJL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKMLDGICCH_NIDOJAABCJL_GETHASHCODE_OFFSET))(this);
		}

	};
