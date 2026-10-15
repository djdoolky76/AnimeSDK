#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
namespace RPG::GameCore { class ST_Main_Predicate_Behaviour; }
namespace RPG::GameCore { class TaskContext; }

#define DOIAIHDGAOA_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE44B0)
#define DOIAIHDGAOA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FE5020)
#define DOIAIHDGAOA_LICHGENMJJD_OFFSET UNITYSDK_OFFSET(0x11FE4840)
#define DOIAIHDGAOA_MNLDAIICBCH_OFFSET UNITYSDK_OFFSET(0x11FE4A60)
#define DOIAIHDGAOA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FE4580)
#define DOIAIHDGAOA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11FE4EF0)
#define DOIAIHDGAOA_TICK_OFFSET UNITYSDK_OFFSET(0x11FE4C80)

inline static constexpr unsigned int DOIAIHDGAOA_TypeDefinitionIndex = 52220;

	class DOIAIHDGAOA
	{
	public:
		::Il2CppArray<::GELIALJDFBL*>* GGGDECHCNMB; // 0x28
		::Il2CppArray<::GELIALJDFBL*>* ACNMOFNKENN; // 0x30
		::Il2CppArray<::GELIALJDFBL*>* HGADLLFKANC; // 0x38
		::GELIALJDFBL* LLHKOFLJFCH; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_Predicate_Behaviour* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_Predicate_Behaviour*))((::PBYTE)hIl2Cpp + DOIAIHDGAOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIAIHDGAOA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DOIAIHDGAOA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIAIHDGAOA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIAIHDGAOA_DISPOSE_OFFSET))(this);
		}

		::Il2CppArray<::GELIALJDFBL*>* MNLDAIICBCH()
		{
			return ((::Il2CppArray<::GELIALJDFBL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIAIHDGAOA_MNLDAIICBCH_OFFSET))(this);
		}

		::Il2CppArray<::GELIALJDFBL*>* LICHGENMJJD()
		{
			return ((::Il2CppArray<::GELIALJDFBL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIAIHDGAOA_LICHGENMJJD_OFFSET))(this);
		}

	};
