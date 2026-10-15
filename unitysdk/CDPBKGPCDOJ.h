#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PGOOHIHKHNJ.h"
class MEDEPLMJCIC;
class NCJILFFNINI;
namespace RPG::GameCore { class TaskContext; }

#define CDPBKGPCDOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC7735A0)
#define CDPBKGPCDOJ_ENNJBMNBLNA_OFFSET UNITYSDK_OFFSET(0xC7735B0)

inline static constexpr unsigned int CDPBKGPCDOJ_TypeDefinitionIndex = 55975;

	class CDPBKGPCDOJ : public ::PGOOHIHKHNJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MEDEPLMJCIC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MEDEPLMJCIC*))((::PBYTE)hIl2Cpp + CDPBKGPCDOJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ENNJBMNBLNA(::NCJILFFNINI* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::NCJILFFNINI*, ::System::Boolean))((::PBYTE)hIl2Cpp + CDPBKGPCDOJ_ENNJBMNBLNA_OFFSET))(this, a1, a2);
		}

	};
