#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBMCGPOLJHO.h"

#define BJFENMHNNEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C545B10)
#define BJFENMHNNEP_GET_EXAMID_OFFSET UNITYSDK_OFFSET(0x1C545AF0)
#define BJFENMHNNEP_SET_EXAMID_OFFSET UNITYSDK_OFFSET(0x1C545B00)

inline static constexpr unsigned int BJFENMHNNEP_TypeDefinitionIndex = 41736;

	class BJFENMHNNEP : public ::LBMCGPOLJHO
	{
	public:
		::System::UInt32 _ExamID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFENMHNNEP_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ExamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFENMHNNEP_GET_EXAMID_OFFSET))(this);
		}

		::System::Void set_ExamID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJFENMHNNEP_SET_EXAMID_OFFSET))(this, a1);
		}

	};
