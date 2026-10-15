#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define NDGJHPOFLFB_CTOR_OFFSET UNITYSDK_OFFSET(0xBB28170)
#define NDGJHPOFLFB_GET_SCRIPTABLEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0xBB28160)

inline static constexpr unsigned int NDGJHPOFLFB_TypeDefinitionIndex = 49324;

	class NDGJHPOFLFB : public ::System::Attribute
	{
	public:
		::System::Type* _ScriptableObjectType_k__BackingField; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NDGJHPOFLFB_CTOR_OFFSET))(this, a1);
		}

		::System::Type* get_ScriptableObjectType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDGJHPOFLFB_GET_SCRIPTABLEOBJECTTYPE_OFFSET))(this);
		}

	};
