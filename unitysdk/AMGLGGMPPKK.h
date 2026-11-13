#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMMNJAMJJCN.h"
class DGEOFODDOGA;
namespace RPG::GameCore { class TaskContext; }

#define AMGLGGMPPKK_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0x197D93E0)
#define AMGLGGMPPKK_CTOR_OFFSET UNITYSDK_OFFSET(0x197D9180)
#define AMGLGGMPPKK_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0x197D94C0)
#define AMGLGGMPPKK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x197D9190)
#define AMGLGGMPPKK_PEPCLIHNBNO_OFFSET UNITYSDK_OFFSET(0x197D9330)

inline static constexpr unsigned int AMGLGGMPPKK_TypeDefinitionIndex = 54516;

	class AMGLGGMPPKK : public ::CMMNJAMJJCN
	{
	public:
		::DGEOFODDOGA* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DGEOFODDOGA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DGEOFODDOGA*))((::PBYTE)hIl2Cpp + AMGLGGMPPKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGLGGMPPKK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void PEPCLIHNBNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGLGGMPPKK_PEPCLIHNBNO_OFFSET))(this);
		}

		::System::Void BNNKNIJBGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGLGGMPPKK_BNNKNIJBGPA_OFFSET))(this);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGLGGMPPKK_KOHOGMCJHBH_OFFSET))(this);
		}

	};
