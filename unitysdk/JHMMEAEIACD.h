#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class SwitchHandCatchStateListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define JHMMEAEIACD_CTOR_OFFSET UNITYSDK_OFFSET(0xB9E0C20)
#define JHMMEAEIACD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9E0D00)
#define JHMMEAEIACD_KNAADBJDGDN_OFFSET UNITYSDK_OFFSET(0xB9E1240)
#define JHMMEAEIACD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9E1000)
#define JHMMEAEIACD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9E1400)
#define JHMMEAEIACD_TICK_OFFSET UNITYSDK_OFFSET(0xB9E0F10)

inline static constexpr unsigned int JHMMEAEIACD_TypeDefinitionIndex = 54470;

	class JHMMEAEIACD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::KFELGAIGHAP* OHMNAFJEMJL; // 0x20
		::RPG::GameCore::SwitchHandCatchStateListener* IGHAHBNLIJA; // 0x28
		::KFELGAIGHAP* OFEFKGDFIEN; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandCatchStateListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandCatchStateListener*))((::PBYTE)hIl2Cpp + JHMMEAEIACD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMMEAEIACD_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHMMEAEIACD_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMMEAEIACD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMMEAEIACD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void KNAADBJDGDN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHMMEAEIACD_KNAADBJDGDN_OFFSET))(this, a1);
		}

	};
