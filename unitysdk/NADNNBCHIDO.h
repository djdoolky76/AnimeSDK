#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class CEIJCJHPKII;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define NADNNBCHIDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE8090)
#define NADNNBCHIDO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BAE8580)
#define NADNNBCHIDO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BAE8100)
#define NADNNBCHIDO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1BAE8490)
#define NADNNBCHIDO_TICK_OFFSET UNITYSDK_OFFSET(0x1BAE85D0)
#define NADNNBCHIDO__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x1BAE8630)

inline static constexpr unsigned int NADNNBCHIDO_TypeDefinitionIndex = 59811;

	class NADNNBCHIDO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::Stage* PKLNPNKEJOO; // 0x20
		::System::String* FKFFINDOLOJ; // 0x28
		::CEIJCJHPKII* OFKGLJOAMLD; // 0x30
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
