#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtom; }
namespace CriWare { class CriAtomCueSheet; }
namespace System { template <typename T> class E891BA3236FD13E7; }

#define CRIWARE_CRIATOM_E4C0EB09B66014E2_B7D2616106501F07_OFFSET UNITYSDK_OFFSET(0x2AB5040)
#define CRIWARE_CRIATOM_E4C0EB09B66014E2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtom_E4C0EB09B66014E2_TypeDefinitionIndex = 19091;

	class CriAtom_E4C0EB09B66014E2 : public ::System::Object
	{
	public:
		::CriWare::CriAtom* A544919C800E2923; // 0x10
		::System::Int32 FC300ADBDFF24726; // 0x18
		::System::Byte _padding0[0x4];
		::System::E891BA3236FD13E7<::CriWare::CriAtomCueSheet*>* F422651CC4956382; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_E4C0EB09B66014E2__CTOR_OFFSET))(this);
		}

		::System::Boolean B7D2616106501F07(::CriWare::CriAtomCueSheet* A3240E0B408E3C48)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomCueSheet*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_E4C0EB09B66014E2_B7D2616106501F07_OFFSET))(this, A3240E0B408E3C48);
		}
	};
}
