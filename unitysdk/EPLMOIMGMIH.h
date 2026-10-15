#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KDJNAAOFMMJ;
namespace RPG::Client { class ConfirmDialogContext; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define EPLMOIMGMIH_BBIKDGNCJKH_OFFSET UNITYSDK_OFFSET(0x155D8520)
#define EPLMOIMGMIH_BFDNHPDIJLH_OFFSET UNITYSDK_OFFSET(0x155D86C0)
#define EPLMOIMGMIH_CTOR_OFFSET UNITYSDK_OFFSET(0x155D8400)
#define EPLMOIMGMIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155D8410)
#define EPLMOIMGMIH_DOKOMMCBAIH_OFFSET UNITYSDK_OFFSET(0x155D89D0)
#define EPLMOIMGMIH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155D84A0)
#define EPLMOIMGMIH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155D8920)
#define EPLMOIMGMIH_TICK_OFFSET UNITYSDK_OFFSET(0x155D8970)

	class EPLMOIMGMIH : public ::GELIALJDFBL
	{
	public:
		::Il2CppArray<::System::Int32>* CFKLLAOPMOG; // 0x18
		::RPG::Client::ConfirmDialogContext* OGOFNHAGOPO; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KDJNAAOFMMJ* PJHNKKIDLBE; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TaskConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + EPLMOIMGMIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLMOIMGMIH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLMOIMGMIH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void BBIKDGNCJKH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPLMOIMGMIH_BBIKDGNCJKH_OFFSET))(this, a1);
		}

		::System::Void BFDNHPDIJLH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPLMOIMGMIH_BFDNHPDIJLH_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLMOIMGMIH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPLMOIMGMIH_TICK_OFFSET))(this, a1);
		}

		::System::Void DOKOMMCBAIH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPLMOIMGMIH_DOKOMMCBAIH_OFFSET))(this, a1);
		}

	};
