#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/UnitStatus.h"
namespace System { class Action; }

#define LMIHOJAOELB_AMAHNKJPOBM_OFFSET UNITYSDK_OFFSET(0xB7C92C0)
#define LMIHOJAOELB_CTOR_OFFSET UNITYSDK_OFFSET(0xB7C95D0)
#define LMIHOJAOELB_DHJBFGBPDLA_OFFSET UNITYSDK_OFFSET(0xB7C93D0)
#define LMIHOJAOELB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7C9230)
#define LMIHOJAOELB_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0xB7C94F0)
#define LMIHOJAOELB_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0xB7C94E0)
#define LMIHOJAOELB_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xB7C9280)

inline static constexpr unsigned int LMIHOJAOELB_TypeDefinitionIndex = 57556;

	class LMIHOJAOELB : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Action* HDMPDMAPKJP; // 0x18
		::System::Action* JIJMALNHDOG; // 0x20
		::System::Boolean COFDOHGGLCG; // 0x28
		::System::Boolean KIBOPOOCEPL; // 0x29
		::System::Byte _padding0[0x2];
		::RPG::GameCore::UnitStatus CPPNFCBEJLK; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIHOJAOELB_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIHOJAOELB_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIHOJAOELB_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void AMAHNKJPOBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIHOJAOELB_AMAHNKJPOBM_OFFSET))(this);
		}

		::System::Void DHJBFGBPDLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIHOJAOELB_DHJBFGBPDLA_OFFSET))(this);
		}

		::RPG::GameCore::UnitStatus JBENBABCOGB()
		{
			return ((::RPG::GameCore::UnitStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIHOJAOELB_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::RPG::GameCore::UnitStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UnitStatus))((::PBYTE)hIl2Cpp + LMIHOJAOELB_GAIKIHDIOBM_OFFSET))(this, a1);
		}

	};
