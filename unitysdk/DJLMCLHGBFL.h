#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPNCAGDDHPO.h"
class GHHJNCOAIJF;
namespace System { class String; }

#define DJLMCLHGBFL_CTOR_OFFSET UNITYSDK_OFFSET(0x18BF0E10)
#define DJLMCLHGBFL_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x18BF0F50)

inline static constexpr unsigned int DJLMCLHGBFL_TypeDefinitionIndex = 71302;

	class DJLMCLHGBFL : public ::FPNCAGDDHPO
	{
	public:
		::System::Int64 _StatusCode_k__BackingField; // 0x90
		::System::Void _ctor(::GHHJNCOAIJF* a1, ::System::Int64 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHHJNCOAIJF*, ::System::Int64, ::System::String*))((::PBYTE)hIl2Cpp + DJLMCLHGBFL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int64 get_StatusCode()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLMCLHGBFL_GET_STATUSCODE_OFFSET))(this);
		}

	};
