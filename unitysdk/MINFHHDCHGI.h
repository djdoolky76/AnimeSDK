#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropRewardPreview; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define MINFHHDCHGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1A39AAB0)
#define MINFHHDCHGI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A39AAC0)
#define MINFHHDCHGI_KJJCHOJONHG_OFFSET UNITYSDK_OFFSET(0x1A39B1C0)
#define MINFHHDCHGI_MMALJBMABED_OFFSET UNITYSDK_OFFSET(0x1A39AE30)
#define MINFHHDCHGI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A39AB80)
#define MINFHHDCHGI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A39B110)
#define MINFHHDCHGI_TICK_OFFSET UNITYSDK_OFFSET(0x1A39B160)

inline static constexpr unsigned int MINFHHDCHGI_TypeDefinitionIndex = 54343;

	class MINFHHDCHGI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropRewardPreview* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		// static const ::System::String* BIJFBJEJAEN; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropRewardPreview* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropRewardPreview*))((::PBYTE)hIl2Cpp + MINFHHDCHGI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINFHHDCHGI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINFHHDCHGI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINFHHDCHGI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MINFHHDCHGI_TICK_OFFSET))(this, a1);
		}

		::System::Void MMALJBMABED(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + MINFHHDCHGI_MMALJBMABED_OFFSET))(this, a1);
		}

		::System::Void KJJCHOJONHG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MINFHHDCHGI_KJJCHOJONHG_OFFSET))(this, a1);
		}

	};
