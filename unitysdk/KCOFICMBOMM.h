#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class EntityInEraFlipperSpotAreaListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define KCOFICMBOMM_CTOR_OFFSET UNITYSDK_OFFSET(0xB3441B0)
#define KCOFICMBOMM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB344590)
#define KCOFICMBOMM_DLDEDBLJNAK_OFFSET UNITYSDK_OFFSET(0xB3446C0)
#define KCOFICMBOMM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB344240)
#define KCOFICMBOMM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB3443F0)
#define KCOFICMBOMM_TICK_OFFSET UNITYSDK_OFFSET(0xB344930)

	class KCOFICMBOMM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::EntityInEraFlipperSpotAreaListener* IGHAHBNLIJA; // 0x20
		::KFELGAIGHAP* OFGBCFDDPBE; // 0x28
		::System::Boolean HPPIMDBIDKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EntityInEraFlipperSpotAreaListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EntityInEraFlipperSpotAreaListener*))((::PBYTE)hIl2Cpp + KCOFICMBOMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOFICMBOMM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOFICMBOMM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOFICMBOMM_DISPOSE_OFFSET))(this);
		}

		::System::Void DLDEDBLJNAK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCOFICMBOMM_DLDEDBLJNAK_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KCOFICMBOMM_TICK_OFFSET))(this, a1);
		}

	};
