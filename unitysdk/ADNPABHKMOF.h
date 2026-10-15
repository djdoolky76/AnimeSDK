#pragma once
#include "unitysdk/unitysdk.h"
class EKOAACGLNAI;
class LFKFJKMGOGH;
namespace RPG::GameCore { class TaskContext; }

#define ADNPABHKMOF_CTOR_OFFSET UNITYSDK_OFFSET(0xB147470)
#define ADNPABHKMOF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1474A0)
#define ADNPABHKMOF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB147540)

inline static constexpr unsigned int ADNPABHKMOF_TypeDefinitionIndex = 53904;

	class ADNPABHKMOF
	{
	public:
		::Il2CppArray<::LFKFJKMGOGH*>* LOOCAOKEODD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EKOAACGLNAI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EKOAACGLNAI*))((::PBYTE)hIl2Cpp + ADNPABHKMOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNPABHKMOF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNPABHKMOF_ONTASKBEGIN_OFFSET))(this);
		}

	};
