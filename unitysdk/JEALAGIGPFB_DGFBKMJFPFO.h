#pragma once
#include "unitysdk/unitysdk.h"
class JEALAGIGPFB_DGFBKMJFPFO_NPDFDJICEMH;
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator; }

#define JEALAGIGPFB_DGFBKMJFPFO_CTOR_OFFSET UNITYSDK_OFFSET(0x166058D0)
#define JEALAGIGPFB_DGFBKMJFPFO_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x16605DD0)
#define JEALAGIGPFB_DGFBKMJFPFO_LKIFDCACLOK_OFFSET UNITYSDK_OFFSET(0x16605C20)

inline static constexpr unsigned int JEALAGIGPFB_DGFBKMJFPFO_TypeDefinitionIndex = 57429;

	class JEALAGIGPFB_DGFBKMJFPFO
	{
	public:
		::System::Single KFGBCLJCCCI; // 0x38
		::System::Single NPINECOCALC; // 0x3C
		::System::Single HBDJCFFDGDD; // 0x40
		::System::Single AIKAPJELHNK; // 0x44
		::System::Single MHJBLFKKCIC; // 0x48
		::System::Void _ctor(::JEALAGIGPFB_DGFBKMJFPFO_NPDFDJICEMH* a1, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JEALAGIGPFB_DGFBKMJFPFO_NPDFDJICEMH*, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator*))((::PBYTE)hIl2Cpp + JEALAGIGPFB_DGFBKMJFPFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LKIFDCACLOK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JEALAGIGPFB_DGFBKMJFPFO_LKIFDCACLOK_OFFSET))(this, a1);
		}

		::System::Single get_CurrentValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_DGFBKMJFPFO_GET_CURRENTVALUE_OFFSET))(this);
		}

	};
