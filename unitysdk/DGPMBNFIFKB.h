#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class RequestSetServerGroupProperty; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define DGPMBNFIFKB_CTOR_OFFSET UNITYSDK_OFFSET(0xE851330)
#define DGPMBNFIFKB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE8518B0)
#define DGPMBNFIFKB_OBBAMDNOEHC_OFFSET UNITYSDK_OFFSET(0xE851A10)
#define DGPMBNFIFKB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE851480)
#define DGPMBNFIFKB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE851420)
#define DGPMBNFIFKB_TICK_OFFSET UNITYSDK_OFFSET(0xE851850)

inline static constexpr unsigned int DGPMBNFIFKB_TypeDefinitionIndex = 53203;

	class DGPMBNFIFKB : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* BCEOFGNHABE; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* MACKGFGJMLE; // 0x28
		::RPG::GameCore::RequestSetServerGroupProperty* OFKGLJOAMLD; // 0x30
		::System::UInt32 DLHOKIMOHFG; // 0x38
		::System::UInt32 PEEFHNHDBMF; // 0x3C
		::System::UInt32 GILPDKAEMGP; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RequestSetServerGroupProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RequestSetServerGroupProperty*))((::PBYTE)hIl2Cpp + DGPMBNFIFKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPMBNFIFKB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPMBNFIFKB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGPMBNFIFKB_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPMBNFIFKB_DISPOSE_OFFSET))(this);
		}

		::System::Void OBBAMDNOEHC(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DGPMBNFIFKB_OBBAMDNOEHC_OFFSET))(this, a1, a2);
		}

	};
