#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class MCFJIFLMBCE;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define DBPALFMFDCM_CTOR_OFFSET UNITYSDK_OFFSET(0xE234D60)
#define DBPALFMFDCM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE234D70)
#define DBPALFMFDCM_HKGKEECNPPI_OFFSET UNITYSDK_OFFSET(0xE2350B0)
#define DBPALFMFDCM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE234DF0)
#define DBPALFMFDCM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE234FA0)
#define DBPALFMFDCM_TICK_OFFSET UNITYSDK_OFFSET(0xE235050)

	class DBPALFMFDCM : public ::GELIALJDFBL
	{
	public:
		::MCFJIFLMBCE* OFKGLJOAMLD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MCFJIFLMBCE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MCFJIFLMBCE*))((::PBYTE)hIl2Cpp + DBPALFMFDCM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPALFMFDCM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPALFMFDCM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPALFMFDCM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DBPALFMFDCM_TICK_OFFSET))(this, a1);
		}

		::System::Void HKGKEECNPPI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBPALFMFDCM_HKGKEECNPPI_OFFSET))(this, a1);
		}

	};
