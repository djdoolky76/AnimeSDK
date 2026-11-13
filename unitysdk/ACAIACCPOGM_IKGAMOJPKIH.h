#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAGPPDDBBIM;
class HLJNBBHKKMI;

#define ACAIACCPOGM_IKGAMOJPKIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1827FD40)
#define ACAIACCPOGM_IKGAMOJPKIH_ELCIEFMELFL_OFFSET UNITYSDK_OFFSET(0x18280040)

inline static constexpr unsigned int ACAIACCPOGM_IKGAMOJPKIH_TypeDefinitionIndex = 79933;

	class ACAIACCPOGM_IKGAMOJPKIH : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::EAGPPDDBBIM* EFCOEOGMHPO; // 0x18
		::System::Void _ctor(::HLJNBBHKKMI* a1, ::EAGPPDDBBIM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*, ::EAGPPDDBBIM*))((::PBYTE)hIl2Cpp + ACAIACCPOGM_IKGAMOJPKIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ELCIEFMELFL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACAIACCPOGM_IKGAMOJPKIH_ELCIEFMELFL_OFFSET))(this, a1);
		}

	};
