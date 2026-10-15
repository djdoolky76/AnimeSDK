#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JODABDCOPOP.h"
class GELIALJDFBL;
class GLOABNLLLEL;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJJDEPBAGJA_CTOR_OFFSET UNITYSDK_OFFSET(0x15D18310)
#define HJJDEPBAGJA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D18460)
#define HJJDEPBAGJA_DJNHKJDACJC_OFFSET UNITYSDK_OFFSET(0x15D18910)
#define HJJDEPBAGJA_INFHHPFKMMG_OFFSET UNITYSDK_OFFSET(0x15D18E90)
#define HJJDEPBAGJA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D185D0)
#define HJJDEPBAGJA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D18E10)

inline static constexpr unsigned int HJJDEPBAGJA_TypeDefinitionIndex = 55324;

	class HJJDEPBAGJA : public ::JODABDCOPOP
	{
	public:
		::GLOABNLLLEL* OFKGLJOAMLD; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BLOMOEJJCIK; // 0x38
		::KFELGAIGHAP* FNLJDEPHGFK; // 0x40
		::GELIALJDFBL* LLHKOFLJFCH; // 0x48
		::System::Int32 BNLFPGEBGFK; // 0x50
		::System::Single AHJEHPDBMCA; // 0x54
		::System::Boolean MDPNKLKHFDA; // 0x58
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

	};
