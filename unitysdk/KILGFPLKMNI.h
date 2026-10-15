#pragma once
#include "unitysdk/unitysdk.h"
class OFDEKOCILAF;
namespace RPG::GameCore { class TaskContext; }

#define KILGFPLKMNI_CTOR_OFFSET UNITYSDK_OFFSET(0xB433CB0)
#define KILGFPLKMNI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB433CE0)
#define KILGFPLKMNI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB433D20)

	class KILGFPLKMNI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OFDEKOCILAF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OFDEKOCILAF*))((::PBYTE)hIl2Cpp + KILGFPLKMNI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KILGFPLKMNI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KILGFPLKMNI_ONTASKBEGIN_OFFSET))(this);
		}

	};
