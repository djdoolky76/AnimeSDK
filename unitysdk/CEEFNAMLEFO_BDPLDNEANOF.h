#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define CEEFNAMLEFO_BDPLDNEANOF_CTOR_OFFSET UNITYSDK_OFFSET(0x173CA190)
#define CEEFNAMLEFO_BDPLDNEANOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x173CA050)
#define CEEFNAMLEFO_BDPLDNEANOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x173CA110)

inline static constexpr unsigned int CEEFNAMLEFO_BDPLDNEANOF_TypeDefinitionIndex = 54059;

	class CEEFNAMLEFO_BDPLDNEANOF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEFNAMLEFO_BDPLDNEANOF_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEEFNAMLEFO_BDPLDNEANOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEFNAMLEFO_BDPLDNEANOF_GETHASHCODE_OFFSET))(this);
		}

	};
