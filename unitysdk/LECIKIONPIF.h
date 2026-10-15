#pragma once
#include "unitysdk/unitysdk.h"
class HNLAMNAIFNF;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }

#define LECIKIONPIF_CTOR_OFFSET UNITYSDK_OFFSET(0xB64D810)
#define LECIKIONPIF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB64D8B0)
#define LECIKIONPIF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB64D980)

	class LECIKIONPIF
	{
	public:
		::KFELGAIGHAP* OODBJDPKKKF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HNLAMNAIFNF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HNLAMNAIFNF*))((::PBYTE)hIl2Cpp + LECIKIONPIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIKIONPIF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIKIONPIF_ONTASKBEGIN_OFFSET))(this);
		}

	};
