#pragma once
#include "unitysdk/unitysdk.h"
class JEALAGIGPFB_FJFDLGMIPAO_CMEFMFOIHLJ;
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator; }

#define JEALAGIGPFB_FJFDLGMIPAO_CTOR_OFFSET UNITYSDK_OFFSET(0x16605E90)
#define JEALAGIGPFB_FJFDLGMIPAO_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x166067C0)
#define JEALAGIGPFB_FJFDLGMIPAO_LKIFDCACLOK_OFFSET UNITYSDK_OFFSET(0x166065C0)

inline static constexpr unsigned int JEALAGIGPFB_FJFDLGMIPAO_TypeDefinitionIndex = 57427;

	class JEALAGIGPFB_FJFDLGMIPAO
	{
	public:
		::System::Single HBDJCFFDGDD; // 0x38
		::System::Single KFGBCLJCCCI; // 0x3C
		::System::Single AIKAPJELHNK; // 0x40
		::System::Single MHJBLFKKCIC; // 0x44
		::System::Single NPINECOCALC; // 0x48
		::System::Void _ctor(::JEALAGIGPFB_FJFDLGMIPAO_CMEFMFOIHLJ* a1, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JEALAGIGPFB_FJFDLGMIPAO_CMEFMFOIHLJ*, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator*))((::PBYTE)hIl2Cpp + JEALAGIGPFB_FJFDLGMIPAO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LKIFDCACLOK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JEALAGIGPFB_FJFDLGMIPAO_LKIFDCACLOK_OFFSET))(this, a1);
		}

		::System::Single get_CurrentValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_FJFDLGMIPAO_GET_CURRENTVALUE_OFFSET))(this);
		}

	};
