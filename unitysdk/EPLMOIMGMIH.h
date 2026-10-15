#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KDJNAAOFMMJ;
namespace RPG::Client { class ConfirmDialogContext; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define EPLMOIMGMIH_BBIKDGNCJKH_OFFSET UNITYSDK_OFFSET(0x155CCB10)
#define EPLMOIMGMIH_BFDNHPDIJLH_OFFSET UNITYSDK_OFFSET(0x155CCCB0)
#define EPLMOIMGMIH_CTOR_OFFSET UNITYSDK_OFFSET(0x155CC9F0)
#define EPLMOIMGMIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155CCA00)
#define EPLMOIMGMIH_DOKOMMCBAIH_OFFSET UNITYSDK_OFFSET(0x155CCFC0)
#define EPLMOIMGMIH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155CCA90)
#define EPLMOIMGMIH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155CCF10)
#define EPLMOIMGMIH_TICK_OFFSET UNITYSDK_OFFSET(0x155CCF60)

inline static constexpr unsigned int EPLMOIMGMIH_TypeDefinitionIndex = 58677;

	class EPLMOIMGMIH : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::ConfirmDialogContext* OGOFNHAGOPO; // 0x18
		::KDJNAAOFMMJ* PJHNKKIDLBE; // 0x20
		::Il2CppArray<::System::Int32>* CFKLLAOPMOG; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
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
