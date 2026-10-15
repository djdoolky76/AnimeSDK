#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class HIJHELGLLBL;
namespace RPG::GameCore { class TaskContext; }

#define EMACANJKPBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1551E2D0)
#define EMACANJKPBP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1551E300)
#define EMACANJKPBP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1551E340)
#define EMACANJKPBP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1551E3D0)
#define EMACANJKPBP_TICK_OFFSET UNITYSDK_OFFSET(0x1551E420)

inline static constexpr unsigned int EMACANJKPBP_TypeDefinitionIndex = 58174;

	class EMACANJKPBP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::UInt32 IEBLEONGNCH; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HIJHELGLLBL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HIJHELGLLBL*))((::PBYTE)hIl2Cpp + EMACANJKPBP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACANJKPBP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACANJKPBP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMACANJKPBP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EMACANJKPBP_TICK_OFFSET))(this, a1);
		}

	};
