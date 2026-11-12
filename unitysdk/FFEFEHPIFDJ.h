#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"

#define FFEFEHPIFDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1664F1F0)
#define FFEFEHPIFDJ_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1664F200)

inline static constexpr unsigned int FFEFEHPIFDJ_TypeDefinitionIndex = 77687;

	class FFEFEHPIFDJ : public ::MLKDDLHNNHH
	{
	public:
		::System::UInt32 DNAPDJADAJN; // 0x20
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FFEFEHPIFDJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEFEHPIFDJ_ONEXECUTE_OFFSET))(this);
		}

	};
