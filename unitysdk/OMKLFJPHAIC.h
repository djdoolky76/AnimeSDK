#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define OMKLFJPHAIC_CTOR_OFFSET UNITYSDK_OFFSET(0x17D583A0)
#define OMKLFJPHAIC_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x17D584E0)
#define OMKLFJPHAIC_GET_NUM_OFFSET UNITYSDK_OFFSET(0x17D584D0)
#define OMKLFJPHAIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D583B0)
#define OMKLFJPHAIC_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x17D58460)

inline static constexpr unsigned int OMKLFJPHAIC_TypeDefinitionIndex = 68981;

	class OMKLFJPHAIC : public ::System::Object
	{
	public:
		::System::UInt32 _Num_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMKLFJPHAIC_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKLFJPHAIC_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKLFJPHAIC_TRIGGERACTION_OFFSET))(this);
		}

		::System::UInt32 get_Num()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKLFJPHAIC_GET_NUM_OFFSET))(this);
		}

		::System::Int32 get_Delta()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKLFJPHAIC_GET_DELTA_OFFSET))(this);
		}

	};
