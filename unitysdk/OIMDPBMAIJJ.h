#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"
class BNGHOKMIDGD;
class GKEDJANMOBM;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TimeRewindAudioConfig; }

#define OIMDPBMAIJJ_AJKLODBHJNC_OFFSET UNITYSDK_OFFSET(0xBEA0B10)
#define OIMDPBMAIJJ_CLEAR_OFFSET UNITYSDK_OFFSET(0xBEA0920)
#define OIMDPBMAIJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA0DD0)
#define OIMDPBMAIJJ_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0xBEA0D40)
#define OIMDPBMAIJJ_IHKPOLCCPPL_OFFSET UNITYSDK_OFFSET(0xBEA09C0)
#define OIMDPBMAIJJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBEA0D90)
#define OIMDPBMAIJJ_MNKMIOIJPCH_OFFSET UNITYSDK_OFFSET(0xBEA0C10)
#define OIMDPBMAIJJ_MONODNDCLJI_OFFSET UNITYSDK_OFFSET(0xBEA0CA0)
#define OIMDPBMAIJJ_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xBEA0B80)
#define OIMDPBMAIJJ_PGDJOIFCKLB_OFFSET UNITYSDK_OFFSET(0xBEA07C0)

inline static constexpr unsigned int OIMDPBMAIJJ_TypeDefinitionIndex = 60796;

	class OIMDPBMAIJJ : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
		::GKEDJANMOBM* BHNDHEGIJOO; // 0x18
		::BNGHOKMIDGD* EPMPEFJBAPM; // 0x20
		::System::Single CNDJDPHMHNK; // 0x28
		::RPG::GameCore::TimeRewindState PPNPFHEGGCI; // 0x2C
		::System::Boolean MCAPIAKDMAA; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single HBDJCFFDGDD; // 0x34
		::System::Single KBDPMBDJIOF; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMDPBMAIJJ_CTOR_OFFSET))(this);
		}

		::System::Void PGDJOIFCKLB(::RPG::GameCore::GameEntity* a1, ::BNGHOKMIDGD* a2, ::RPG::GameCore::TimeRewindAudioConfig* a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::BNGHOKMIDGD*, ::RPG::GameCore::TimeRewindAudioConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OIMDPBMAIJJ_PGDJOIFCKLB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMDPBMAIJJ_CLEAR_OFFSET))(this);
		}

		::System::Void IHKPOLCCPPL(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + OIMDPBMAIJJ_IHKPOLCCPPL_OFFSET))(this, a1, a2);
		}

		::System::Void AJKLODBHJNC(::RPG::GameCore::TimeRewindState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + OIMDPBMAIJJ_AJKLODBHJNC_OFFSET))(this, a1);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMDPBMAIJJ_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void MONODNDCLJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMDPBMAIJJ_MONODNDCLJI_OFFSET))(this);
		}

		::System::Single HDOFEPFEOEB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMDPBMAIJJ_HDOFEPFEOEB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMDPBMAIJJ_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void MNKMIOIJPCH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIMDPBMAIJJ_MNKMIOIJPCH_OFFSET))(this, a1);
		}

	};
