#pragma once
#include "unitysdk/unitysdk.h"
class KJNHIELIFEK;
namespace RPG::GameCore { class TaskContext; }

#define BHLGPEGNDCH_CTOR_OFFSET UNITYSDK_OFFSET(0xB48E020)
#define BHLGPEGNDCH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB48E050)

inline static constexpr unsigned int BHLGPEGNDCH_TypeDefinitionIndex = 56419;

	class BHLGPEGNDCH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KJNHIELIFEK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KJNHIELIFEK*))((::PBYTE)hIl2Cpp + BHLGPEGNDCH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLGPEGNDCH_ONTASKBEGIN_OFFSET))(this);
		}

	};
