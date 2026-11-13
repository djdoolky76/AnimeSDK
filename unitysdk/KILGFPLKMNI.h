#pragma once
#include "unitysdk/unitysdk.h"
class OFDEKOCILAF;
namespace RPG::GameCore { class TaskContext; }

#define KILGFPLKMNI_CTOR_OFFSET UNITYSDK_OFFSET(0x19EF3760)
#define KILGFPLKMNI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19EF3790)
#define KILGFPLKMNI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19EF37D0)

inline static constexpr unsigned int KILGFPLKMNI_TypeDefinitionIndex = 55106;

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
