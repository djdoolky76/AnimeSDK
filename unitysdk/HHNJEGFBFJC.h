#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class IIAJFCNCMEB;

#define HHNJEGFBFJC_CTOR_OFFSET UNITYSDK_OFFSET(0x15CC8250)
#define HHNJEGFBFJC_MHJJGFCNJNI_OFFSET UNITYSDK_OFFSET(0x15CC7D60)
#define HHNJEGFBFJC_OIIFDHJOJJC_OFFSET UNITYSDK_OFFSET(0x15CC81E0)

inline static constexpr unsigned int HHNJEGFBFJC_TypeDefinitionIndex = 81015;

	class HHNJEGFBFJC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNJEGFBFJC_CTOR_OFFSET))(this);
		}

		::System::Void MHJJGFCNJNI(::IIAJFCNCMEB* a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::IIAJFCNCMEB*, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + HHNJEGFBFJC_MHJJGFCNJNI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OIIFDHJOJJC(::IIAJFCNCMEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIAJFCNCMEB*))((::PBYTE)hIl2Cpp + HHNJEGFBFJC_OIIFDHJOJJC_OFFSET))(this, a1);
		}

	};
