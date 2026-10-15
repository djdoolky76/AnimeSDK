#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class RegionEraStateChangeListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define FJHDHIKNJBM_CTOR_OFFSET UNITYSDK_OFFSET(0x157C4270)
#define FJHDHIKNJBM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157C4910)
#define FJHDHIKNJBM_LMIBNFNIKDC_OFFSET UNITYSDK_OFFSET(0x157C4600)
#define FJHDHIKNJBM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157C4360)
#define FJHDHIKNJBM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157C4850)
#define FJHDHIKNJBM_TICK_OFFSET UNITYSDK_OFFSET(0x157C4A80)

inline static constexpr unsigned int FJHDHIKNJBM_TypeDefinitionIndex = 52770;

	class FJHDHIKNJBM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::KFELGAIGHAP* CNDAFHGGFOE; // 0x20
		::RPG::GameCore::RegionEraStateChangeListener* IGHAHBNLIJA; // 0x28
		::KFELGAIGHAP* AGDJANGLELC; // 0x30
		::System::Boolean HPPIMDBIDKA; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RegionEraStateChangeListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RegionEraStateChangeListener*))((::PBYTE)hIl2Cpp + FJHDHIKNJBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHDHIKNJBM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHDHIKNJBM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHDHIKNJBM_DISPOSE_OFFSET))(this);
		}

		::System::Void LMIBNFNIKDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJHDHIKNJBM_LMIBNFNIKDC_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FJHDHIKNJBM_TICK_OFFSET))(this, a1);
		}

	};
