#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class AdvCreateEntityAsync; }
namespace RPG::GameCore { class GroupEntityCreateConfig; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace RPG::GameCore { class TaskContext; }

#define BELPLOHGILD_CALCFPLIKDM_OFFSET UNITYSDK_OFFSET(0xB157770)
#define BELPLOHGILD_CTOR_OFFSET UNITYSDK_OFFSET(0xB1569D0)
#define BELPLOHGILD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1569E0)
#define BELPLOHGILD_FGOEBAIECBN_OFFSET UNITYSDK_OFFSET(0xB157090)
#define BELPLOHGILD_JMJGKCNGOEE_OFFSET UNITYSDK_OFFSET(0xB157570)
#define BELPLOHGILD_OBFAHCBHFLP_OFFSET UNITYSDK_OFFSET(0xB157010)
#define BELPLOHGILD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB156B00)
#define BELPLOHGILD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB156A50)
#define BELPLOHGILD_TICK_OFFSET UNITYSDK_OFFSET(0xB156AA0)

	class BELPLOHGILD : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x18
		::RPG::GameCore::AdvCreateEntityAsync* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::UInt32 PEEFHNHDBMF; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvCreateEntityAsync* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvCreateEntityAsync*))((::PBYTE)hIl2Cpp + BELPLOHGILD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BELPLOHGILD_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BELPLOHGILD_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BELPLOHGILD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BELPLOHGILD_ONTASKRESET_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* FGOEBAIECBN(::RPG::GameCore::RuntimeGroupInfo* a1, ::RPG::GameCore::GroupEntityCreateConfig* a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::GroupEntityCreateConfig*))((::PBYTE)hIl2Cpp + BELPLOHGILD_FGOEBAIECBN_OFFSET))(this, a1, a2);
		}

		::System::Boolean OBFAHCBHFLP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BELPLOHGILD_OBFAHCBHFLP_OFFSET))(this, a1, a2);
		}

		::System::Int32 JMJGKCNGOEE(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::RPG::GameCore::GroupEntityCreateConfig* a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::RPG::GameCore::GroupEntityCreateConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + BELPLOHGILD_JMJGKCNGOEE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CALCFPLIKDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BELPLOHGILD_CALCFPLIKDM_OFFSET))(this);
		}

	};
