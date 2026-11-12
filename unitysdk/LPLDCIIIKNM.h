#pragma once
#include "unitysdk/unitysdk.h"
class FHDGGEBJGCO;
class PEEDLCHFAFL;
namespace RPG::Client { class BubbleTalkConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define LPLDCIIIKNM_AEPKEDIGHFL_OFFSET UNITYSDK_OFFSET(0xC084ED0)
#define LPLDCIIIKNM_CTOR_OFFSET UNITYSDK_OFFSET(0xC0845D0)
#define LPLDCIIIKNM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC084600)
#define LPLDCIIIKNM_LLDKMAMCNIA_OFFSET UNITYSDK_OFFSET(0xC085330)
#define LPLDCIIIKNM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC0846C0)
#define LPLDCIIIKNM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC085210)
#define LPLDCIIIKNM_PFEODCIJKPH_OFFSET UNITYSDK_OFFSET(0xC085260)

inline static constexpr unsigned int LPLDCIIIKNM_TypeDefinitionIndex = 54011;

	class LPLDCIIIKNM
	{
	public:
		::RPG::Client::BubbleTalkConfig* GJMEBCMNPMK; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FHDGGEBJGCO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FHDGGEBJGCO*))((::PBYTE)hIl2Cpp + LPLDCIIIKNM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLDCIIIKNM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLDCIIIKNM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void AEPKEDIGHFL(::PEEDLCHFAFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + LPLDCIIIKNM_AEPKEDIGHFL_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLDCIIIKNM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void PFEODCIJKPH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPLDCIIIKNM_PFEODCIJKPH_OFFSET))(this, a1);
		}

		::System::Void LLDKMAMCNIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLDCIIIKNM_LLDKMAMCNIA_OFFSET))(this);
		}

	};
