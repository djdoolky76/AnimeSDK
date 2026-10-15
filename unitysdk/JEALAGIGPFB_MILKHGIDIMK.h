#pragma once
#include "unitysdk/unitysdk.h"
class JEALAGIGPFB_MILKHGIDIMK_OJNJEJMLKIG;
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator; }

#define JEALAGIGPFB_MILKHGIDIMK_CTOR_OFFSET UNITYSDK_OFFSET(0x16616120)
#define JEALAGIGPFB_MILKHGIDIMK_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x16616270)
#define JEALAGIGPFB_MILKHGIDIMK_LKIFDCACLOK_OFFSET UNITYSDK_OFFSET(0x16616170)

inline static constexpr unsigned int JEALAGIGPFB_MILKHGIDIMK_TypeDefinitionIndex = 57425;

	class JEALAGIGPFB_MILKHGIDIMK
	{
	public:
		::System::Single JDMDDIHADLJ; // 0x38
		::System::Single HBDJCFFDGDD; // 0x3C
		::System::Single DNPHGOELBMH; // 0x40
		::System::Single AIKAPJELHNK; // 0x44
		::System::Single NPINECOCALC; // 0x48
		::System::Void _ctor(::JEALAGIGPFB_MILKHGIDIMK_OJNJEJMLKIG* a1, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JEALAGIGPFB_MILKHGIDIMK_OJNJEJMLKIG*, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator*))((::PBYTE)hIl2Cpp + JEALAGIGPFB_MILKHGIDIMK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LKIFDCACLOK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JEALAGIGPFB_MILKHGIDIMK_LKIFDCACLOK_OFFSET))(this, a1);
		}

		::System::Single get_CurrentValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_MILKHGIDIMK_GET_CURRENTVALUE_OFFSET))(this);
		}

	};
