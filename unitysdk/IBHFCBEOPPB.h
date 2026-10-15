#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIPFHKKIKLH.h"
class HMCDHNKOCGK;
class NCJILFFNINI;
namespace RPG::GameCore { class TaskContext; }

#define IBHFCBEOPPB_CTOR_OFFSET UNITYSDK_OFFSET(0x15E35440)
#define IBHFCBEOPPB_ENNJBMNBLNA_OFFSET UNITYSDK_OFFSET(0x15E35450)

	class IBHFCBEOPPB : public ::BIPFHKKIKLH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HMCDHNKOCGK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HMCDHNKOCGK*))((::PBYTE)hIl2Cpp + IBHFCBEOPPB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ENNJBMNBLNA(::NCJILFFNINI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCJILFFNINI*))((::PBYTE)hIl2Cpp + IBHFCBEOPPB_ENNJBMNBLNA_OFFSET))(this, a1);
		}

	};
