#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMonopolyResume; }
namespace System { class Object; }

#define NJPLMEKJLDN_CTOR_OFFSET UNITYSDK_OFFSET(0xBC254B0)
#define NJPLMEKJLDN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC256A0)
#define NJPLMEKJLDN_FJAACDOELNC_OFFSET UNITYSDK_OFFSET(0xBC25780)
#define NJPLMEKJLDN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC254C0)
#define NJPLMEKJLDN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC25620)
#define NJPLMEKJLDN_TICK_OFFSET UNITYSDK_OFFSET(0xBC25720)

inline static constexpr unsigned int NJPLMEKJLDN_TypeDefinitionIndex = 58904;

	class NJPLMEKJLDN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitMonopolyResume* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMonopolyResume* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMonopolyResume*))((::PBYTE)hIl2Cpp + NJPLMEKJLDN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPLMEKJLDN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPLMEKJLDN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPLMEKJLDN_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJPLMEKJLDN_TICK_OFFSET))(this, a1);
		}

		::System::Void FJAACDOELNC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJPLMEKJLDN_FJAACDOELNC_OFFSET))(this, a1);
		}

	};
