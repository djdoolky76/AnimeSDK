#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JODABDCOPOP.h"
class GELIALJDFBL;
class GLOABNLLLEL;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJJDEPBAGJA_BJLGPNDPHIA_OFFSET UNITYSDK_OFFSET(0x18217270)
#define HJJDEPBAGJA_CTOR_OFFSET UNITYSDK_OFFSET(0x18215E90)
#define HJJDEPBAGJA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18215FE0)
#define HJJDEPBAGJA_DJNHKJDACJC_OFFSET UNITYSDK_OFFSET(0x18216450)
#define HJJDEPBAGJA_INFHHPFKMMG_OFFSET UNITYSDK_OFFSET(0x18216980)
#define HJJDEPBAGJA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18216150)
#define HJJDEPBAGJA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18216900)

inline static constexpr unsigned int HJJDEPBAGJA_TypeDefinitionIndex = 56506;

	class HJJDEPBAGJA : public ::JODABDCOPOP
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BLOMOEJJCIK; // 0x38
		::KFELGAIGHAP* FNLJDEPHGFK; // 0x40
		::GLOABNLLLEL* OFKGLJOAMLD; // 0x48
		::System::Boolean MDPNKLKHFDA; // 0x50
		::System::Byte _padding0[0x3];
		::System::Int32 BNLFPGEBGFK; // 0x54
		::System::Single AHJEHPDBMCA; // 0x58
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GLOABNLLLEL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GLOABNLLLEL*))((::PBYTE)hIl2Cpp + HJJDEPBAGJA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJDEPBAGJA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJDEPBAGJA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJDEPBAGJA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void INFHHPFKMMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJDEPBAGJA_INFHHPFKMMG_OFFSET))(this);
		}

		::System::Void DJNHKJDACJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJDEPBAGJA_DJNHKJDACJC_OFFSET))(this);
		}

		::System::Boolean BJLGPNDPHIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJDEPBAGJA_BJLGPNDPHIA_OFFSET))(this);
		}

	};
