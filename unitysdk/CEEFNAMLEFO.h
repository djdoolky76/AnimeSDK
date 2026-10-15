#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/MJKLAEILHPK.h"
class CEEFNAMLEFO_BDPLDNEANOF;
class KFELGAIGHAP;
namespace RPG::GameCore { class CaseContainerBase; }
namespace RPG::GameCore { class GenericSwitchCase; }
namespace RPG::GameCore { class SwitchRefBase; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CEEFNAMLEFO_CTOR_OFFSET UNITYSDK_OFFSET(0xC77F780)
#define CEEFNAMLEFO_DAFEDCJFJIJ_OFFSET UNITYSDK_OFFSET(0xC780ED0)
#define CEEFNAMLEFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC77F9B0)
#define CEEFNAMLEFO_ICINBCIPBOK_OFFSET UNITYSDK_OFFSET(0xC7800F0)
#define CEEFNAMLEFO_INJAFKILCKC_OFFSET UNITYSDK_OFFSET(0xC781100)
#define CEEFNAMLEFO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC77FF20)
#define CEEFNAMLEFO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC77FC90)
#define CEEFNAMLEFO_TICK_OFFSET UNITYSDK_OFFSET(0xC77FD20)

inline static constexpr unsigned int CEEFNAMLEFO_TypeDefinitionIndex = 52902;

	class CEEFNAMLEFO : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* APMBCDPOPAJ; // 0x18
		::RPG::GameCore::GenericSwitchCase* IGHAHBNLIJA; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* ANCNIBMHPLD; // 0x30
		::MJKLAEILHPK OLMFJLICIIA; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GenericSwitchCase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GenericSwitchCase*))((::PBYTE)hIl2Cpp + CEEFNAMLEFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEFNAMLEFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CEEFNAMLEFO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEFNAMLEFO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEFNAMLEFO_ONTASKRESET_OFFSET))(this);
		}

		::CEEFNAMLEFO_BDPLDNEANOF* ICINBCIPBOK(::RPG::GameCore::SwitchRefBase* a1)
		{
			return ((::CEEFNAMLEFO_BDPLDNEANOF*(*)(::PVOID, ::RPG::GameCore::SwitchRefBase*))((::PBYTE)hIl2Cpp + CEEFNAMLEFO_ICINBCIPBOK_OFFSET))(this, a1);
		}

		::CEEFNAMLEFO_BDPLDNEANOF* DAFEDCJFJIJ(::RPG::GameCore::CaseContainerBase* a1)
		{
			return ((::CEEFNAMLEFO_BDPLDNEANOF*(*)(::PVOID, ::RPG::GameCore::CaseContainerBase*))((::PBYTE)hIl2Cpp + CEEFNAMLEFO_DAFEDCJFJIJ_OFFSET))(this, a1);
		}

		::System::Void INJAFKILCKC(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + CEEFNAMLEFO_INJAFKILCKC_OFFSET))(this, a1);
		}

	};
