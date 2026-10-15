#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DEHHODAHDMH_CTOR_OFFSET UNITYSDK_OFFSET(0xE50B5A0)
#define DEHHODAHDMH_GET_DELTA_OFFSET UNITYSDK_OFFSET(0xE50B6D0)
#define DEHHODAHDMH_GET_NUM_OFFSET UNITYSDK_OFFSET(0xE50B6C0)
#define DEHHODAHDMH_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE50B5B0)
#define DEHHODAHDMH_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xE50B660)

inline static constexpr unsigned int DEHHODAHDMH_TypeDefinitionIndex = 67065;

	class DEHHODAHDMH : public ::System::Object
	{
	public:
		::System::UInt32 _Num_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEHHODAHDMH_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHHODAHDMH_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHHODAHDMH_TRIGGERACTION_OFFSET))(this);
		}

		::System::UInt32 get_Num()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHHODAHDMH_GET_NUM_OFFSET))(this);
		}

		::System::Int32 get_Delta()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHHODAHDMH_GET_DELTA_OFFSET))(this);
		}

	};
