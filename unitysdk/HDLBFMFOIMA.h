#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define HDLBFMFOIMA_CTOR_OFFSET UNITYSDK_OFFSET(0x15C3C410)
#define HDLBFMFOIMA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15C3C400)

inline static constexpr unsigned int HDLBFMFOIMA_TypeDefinitionIndex = 49657;

	class HDLBFMFOIMA : public ::System::Attribute
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + HDLBFMFOIMA_CTOR_OFFSET))(this, a1);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLBFMFOIMA_GET_TYPE_OFFSET))(this);
		}

	};
