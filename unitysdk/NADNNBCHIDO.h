#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class CEIJCJHPKII;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define NADNNBCHIDO_CTOR_OFFSET UNITYSDK_OFFSET(0xBA56AA0)
#define NADNNBCHIDO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA56F90)
#define NADNNBCHIDO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA56B10)
#define NADNNBCHIDO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA56EA0)
#define NADNNBCHIDO_TICK_OFFSET UNITYSDK_OFFSET(0xBA953C0)
#define NADNNBCHIDO__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xBA95420)

	class NADNNBCHIDO : public ::GELIALJDFBL
	{
	public:
		::System::String* FKFFINDOLOJ; // 0x18
		::CEIJCJHPKII* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::Client::Stage* PKLNPNKEJOO; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CEIJCJHPKII* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CEIJCJHPKII*))((::PBYTE)hIl2Cpp + NADNNBCHIDO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADNNBCHIDO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADNNBCHIDO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADNNBCHIDO_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NADNNBCHIDO_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADNNBCHIDO__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

	};
