#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineDataExtraTargetEnumMap; }
namespace System { class Action; }

#define BDDGKPLECMH_JKFLKLEHLBA_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0xF791E40)
#define BDDGKPLECMH_JKFLKLEHLBA__CTOR_OFFSET UNITYSDK_OFFSET(0xF791E30)

inline static constexpr unsigned int BDDGKPLECMH_JKFLKLEHLBA_TypeDefinitionIndex = 63288;

class BDDGKPLECMH_JKFLKLEHLBA : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDGKPLECMH_JKFLKLEHLBA__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigTimelineDataExtraTargetEnumMap* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTimelineDataExtraTargetEnumMap*))((::PBYTE)hIl2Cpp + BDDGKPLECMH_JKFLKLEHLBA_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
