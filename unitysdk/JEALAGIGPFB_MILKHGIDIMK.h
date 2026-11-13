#pragma once
#include "unitysdk/unitysdk.h"
class JEALAGIGPFB_MILKHGIDIMK_OJNJEJMLKIG;
namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator; }

#define JEALAGIGPFB_MILKHGIDIMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1305EDA0)
#define JEALAGIGPFB_MILKHGIDIMK_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x1305EF30)
#define JEALAGIGPFB_MILKHGIDIMK_LKIFDCACLOK_OFFSET UNITYSDK_OFFSET(0x1305EE00)

inline static constexpr unsigned int JEALAGIGPFB_MILKHGIDIMK_TypeDefinitionIndex = 58653;

	class JEALAGIGPFB_MILKHGIDIMK
	{
	public:
		::System::Single NPINECOCALC; // 0x38
		::System::Single AIKAPJELHNK; // 0x3C
		::System::Single DNPHGOELBMH; // 0x40
		::System::Single HBDJCFFDGDD; // 0x44
		::System::Single JDMDDIHADLJ; // 0x48
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
