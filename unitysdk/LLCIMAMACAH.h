#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEMKNPIFMBI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OONGDLIDJJJ;
namespace RPG::GameCore { class CheckTurnStateAxis; }

#define LLCIMAMACAH_CTOR_OFFSET UNITYSDK_OFFSET(0xB7629F0)
#define LLCIMAMACAH_MNAKIEOGPDK_OFFSET UNITYSDK_OFFSET(0xB762A00)

inline static constexpr unsigned int LLCIMAMACAH_TypeDefinitionIndex = 54376;

	class LLCIMAMACAH : public ::BEMKNPIFMBI
	{
	public:
		::RPG::GameCore::CheckTurnStateAxis* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::CheckTurnStateAxis* a1, ::OONGDLIDJJJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckTurnStateAxis*, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + LLCIMAMACAH_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MNAKIEOGPDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCIMAMACAH_MNAKIEOGPDK_OFFSET))(this);
		}

	};
