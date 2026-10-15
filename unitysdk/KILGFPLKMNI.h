#pragma once
#include "unitysdk/unitysdk.h"
class OFDEKOCILAF;
namespace RPG::GameCore { class TaskContext; }

#define KILGFPLKMNI_CTOR_OFFSET UNITYSDK_OFFSET(0xB42D1C0)
#define KILGFPLKMNI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB42D1F0)
#define KILGFPLKMNI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB42D230)

inline static constexpr unsigned int KILGFPLKMNI_TypeDefinitionIndex = 53942;

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
