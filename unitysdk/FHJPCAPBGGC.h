#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class NotifyShowFuncBtnParam; }
namespace RPG::GameCore { class ShowFuncBtn; }
namespace RPG::GameCore { class TaskContext; }

#define FHJPCAPBGGC_ABMGFACNKON_OFFSET UNITYSDK_OFFSET(0x18AAADB0)
#define FHJPCAPBGGC_CTOR_OFFSET UNITYSDK_OFFSET(0x18AAA5B0)
#define FHJPCAPBGGC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18AAA5C0)
#define FHJPCAPBGGC_FKKJFPHCJBD_OFFSET UNITYSDK_OFFSET(0x18AAA670)
#define FHJPCAPBGGC_HJGNKBECCBF_OFFSET UNITYSDK_OFFSET(0x18AAA890)
#define FHJPCAPBGGC_HNDFBOPMHCK_OFFSET UNITYSDK_OFFSET(0x18AAA610)
#define FHJPCAPBGGC_KLGDGEBEKLA_OFFSET UNITYSDK_OFFSET(0x18AAAC30)
#define FHJPCAPBGGC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18AAA700)
#define FHJPCAPBGGC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18AAACE0)
#define FHJPCAPBGGC_TICK_OFFSET UNITYSDK_OFFSET(0x18AAAD30)

inline static constexpr unsigned int FHJPCAPBGGC_TypeDefinitionIndex = 54432;

	class FHJPCAPBGGC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowFuncBtn* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::NotifyShowFuncBtnParam* MELBABBNCIL; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Boolean DOCIDMKAAGA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFuncBtn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFuncBtn*))((::PBYTE)hIl2Cpp + FHJPCAPBGGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJPCAPBGGC_DISPOSE_OFFSET))(this);
		}

		::System::Void HNDFBOPMHCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJPCAPBGGC_HNDFBOPMHCK_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJPCAPBGGC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJPCAPBGGC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHJPCAPBGGC_TICK_OFFSET))(this, a1);
		}

		::System::Void ABMGFACNKON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJPCAPBGGC_ABMGFACNKON_OFFSET))(this);
		}

		::System::Void KLGDGEBEKLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJPCAPBGGC_KLGDGEBEKLA_OFFSET))(this);
		}

		::System::Void FKKJFPHCJBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJPCAPBGGC_FKKJFPHCJBD_OFFSET))(this);
		}

		::RPG::GameCore::NotifyShowFuncBtnParam* HJGNKBECCBF()
		{
			return ((::RPG::GameCore::NotifyShowFuncBtnParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJPCAPBGGC_HJGNKBECCBF_OFFSET))(this);
		}

	};
