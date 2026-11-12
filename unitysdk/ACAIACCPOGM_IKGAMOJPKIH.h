#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAGPPDDBBIM;
class HLJNBBHKKMI;

#define ACAIACCPOGM_IKGAMOJPKIH_CTOR_OFFSET UNITYSDK_OFFSET(0xB776C80)
#define ACAIACCPOGM_IKGAMOJPKIH_ELCIEFMELFL_OFFSET UNITYSDK_OFFSET(0xB776F80)

inline static constexpr unsigned int ACAIACCPOGM_IKGAMOJPKIH_TypeDefinitionIndex = 79934;

	class ACAIACCPOGM_IKGAMOJPKIH : public ::System::Object
	{
	public:
		::EAGPPDDBBIM* EFCOEOGMHPO; // 0x10
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::HLJNBBHKKMI* a1, ::EAGPPDDBBIM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*, ::EAGPPDDBBIM*))((::PBYTE)hIl2Cpp + ACAIACCPOGM_IKGAMOJPKIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ELCIEFMELFL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACAIACCPOGM_IKGAMOJPKIH_ELCIEFMELFL_OFFSET))(this, a1);
		}

	};
