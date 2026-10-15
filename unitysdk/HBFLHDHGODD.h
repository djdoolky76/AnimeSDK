#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class WaitPlanetFesGetUseItemFirstTime; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define HBFLHDHGODD_CJMIOAILBEB_OFFSET UNITYSDK_OFFSET(0x15BF60C0)
#define HBFLHDHGODD_CTOR_OFFSET UNITYSDK_OFFSET(0x15BF5E90)
#define HBFLHDHGODD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BF5F20)
#define HBFLHDHGODD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15BF5FB0)
#define HBFLHDHGODD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15BF6010)
#define HBFLHDHGODD_TICK_OFFSET UNITYSDK_OFFSET(0x15BF6060)

inline static constexpr unsigned int HBFLHDHGODD_TypeDefinitionIndex = 58910;

	class HBFLHDHGODD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::WaitPlanetFesGetUseItemFirstTime* OFKGLJOAMLD; // 0x20
		::System::Boolean MFGHMLJJNIG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::WaitPlanetFesGetUseItemFirstTime* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::WaitPlanetFesGetUseItemFirstTime*))((::PBYTE)hIl2Cpp + HBFLHDHGODD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFLHDHGODD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFLHDHGODD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFLHDHGODD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFLHDHGODD_TICK_OFFSET))(this, a1);
		}

		::System::Void CJMIOAILBEB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBFLHDHGODD_CJMIOAILBEB_OFFSET))(this, a1);
		}

	};
