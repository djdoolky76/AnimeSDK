#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NONJMIHBLMK_CTOR_OFFSET UNITYSDK_OFFSET(0x19CF1860)
#define NONJMIHBLMK_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x19CF1990)
#define NONJMIHBLMK_GET_NUM_OFFSET UNITYSDK_OFFSET(0x19CF1980)
#define NONJMIHBLMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19CF1870)
#define NONJMIHBLMK_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x19CF1920)

inline static constexpr unsigned int NONJMIHBLMK_TypeDefinitionIndex = 69007;

	class NONJMIHBLMK : public ::System::Object
	{
	public:
		::System::UInt32 _Num_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NONJMIHBLMK_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NONJMIHBLMK_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONJMIHBLMK_TRIGGERACTION_OFFSET))(this);
		}

		::System::UInt32 get_Num()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NONJMIHBLMK_GET_NUM_OFFSET))(this);
		}

		::System::Int32 get_Delta()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NONJMIHBLMK_GET_DELTA_OFFSET))(this);
		}

	};
