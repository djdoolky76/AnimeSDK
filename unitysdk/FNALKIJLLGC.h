#pragma once
#include "unitysdk/unitysdk.h"
class BFEMKKAPDMN;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define FNALKIJLLGC_AHHFFNBEHME_OFFSET UNITYSDK_OFFSET(0x1585DAD0)
#define FNALKIJLLGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1585D240)
#define FNALKIJLLGC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1585D270)

inline static constexpr unsigned int FNALKIJLLGC_TypeDefinitionIndex = 53348;

	class FNALKIJLLGC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BFEMKKAPDMN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BFEMKKAPDMN*))((::PBYTE)hIl2Cpp + FNALKIJLLGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNALKIJLLGC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::UInt32 AHHFFNBEHME(::System::String* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FNALKIJLLGC_AHHFFNBEHME_OFFSET))(this, a1);
		}

	};
