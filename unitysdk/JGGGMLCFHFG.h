#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JGGGMLCFHFG_CTOR_OFFSET UNITYSDK_OFFSET(0xB199950)
#define JGGGMLCFHFG_GET_EVALUATIONID_OFFSET UNITYSDK_OFFSET(0xB199960)
#define JGGGMLCFHFG_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xB199980)
#define JGGGMLCFHFG_SET_EVALUATIONID_OFFSET UNITYSDK_OFFSET(0xB199970)
#define JGGGMLCFHFG_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xB199990)

inline static constexpr unsigned int JGGGMLCFHFG_TypeDefinitionIndex = 63493;

	class JGGGMLCFHFG : public ::System::Object
	{
	public:
		::System::UInt32 _EvaluationID_k__BackingField; // 0x10
		::System::UInt32 _Progress_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JGGGMLCFHFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_EvaluationID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGGMLCFHFG_GET_EVALUATIONID_OFFSET))(this);
		}

		::System::Void set_EvaluationID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGGGMLCFHFG_SET_EVALUATIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGGMLCFHFG_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGGGMLCFHFG_SET_PROGRESS_OFFSET))(this, a1);
		}

	};
