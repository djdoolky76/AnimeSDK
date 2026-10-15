#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class WaitPlanetFesLargeBonus; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define FKDCNNCPAKH_CTOR_OFFSET UNITYSDK_OFFSET(0x157E7200)
#define FKDCNNCPAKH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157E7290)
#define FKDCNNCPAKH_NLCMDCLMAFH_OFFSET UNITYSDK_OFFSET(0x157E7520)
#define FKDCNNCPAKH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157E7320)
#define FKDCNNCPAKH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157E7470)
#define FKDCNNCPAKH_TICK_OFFSET UNITYSDK_OFFSET(0x157E74C0)

inline static constexpr unsigned int FKDCNNCPAKH_TypeDefinitionIndex = 58911;

	class FKDCNNCPAKH : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::WaitPlanetFesLargeBonus* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Boolean MFGHMLJJNIG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::WaitPlanetFesLargeBonus* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::WaitPlanetFesLargeBonus*))((::PBYTE)hIl2Cpp + FKDCNNCPAKH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDCNNCPAKH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDCNNCPAKH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDCNNCPAKH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKDCNNCPAKH_TICK_OFFSET))(this, a1);
		}

		::System::Void NLCMDCLMAFH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKDCNNCPAKH_NLCMDCLMAFH_OFFSET))(this, a1);
		}

	};
