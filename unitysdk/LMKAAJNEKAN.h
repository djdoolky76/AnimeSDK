#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define LMKAAJNEKAN_CTOR_OFFSET UNITYSDK_OFFSET(0xB7C66E0)
#define LMKAAJNEKAN_GET_DELTA_OFFSET UNITYSDK_OFFSET(0xB7C6810)
#define LMKAAJNEKAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB7C66F0)
#define LMKAAJNEKAN_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xB7C67A0)

inline static constexpr unsigned int LMKAAJNEKAN_TypeDefinitionIndex = 67067;

	class LMKAAJNEKAN : public ::System::Object
	{
	public:
		::System::Int32 _Delta_k__BackingField; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMKAAJNEKAN_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKAAJNEKAN_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKAAJNEKAN_TRIGGERACTION_OFFSET))(this);
		}

		::System::Int32 get_Delta()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKAAJNEKAN_GET_DELTA_OFFSET))(this);
		}

	};
