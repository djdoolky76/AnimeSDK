#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RequestChangeMatchThreeBirdLocation; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define MOCBHBDGKLM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA1F5B0)
#define MOCBHBDGKLM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA1F5C0)
#define MOCBHBDGKLM_KCOJAGFHDNM_OFFSET UNITYSDK_OFFSET(0xBA1F8F0)
#define MOCBHBDGKLM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA1F720)
#define MOCBHBDGKLM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA1F610)
#define MOCBHBDGKLM_TICK_OFFSET UNITYSDK_OFFSET(0xBA1F6C0)

inline static constexpr unsigned int MOCBHBDGKLM_TypeDefinitionIndex = 53012;

	class MOCBHBDGKLM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::RequestChangeMatchThreeBirdLocation* OFKGLJOAMLD; // 0x20
		::System::UInt32 NFPAFAKKALP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RequestChangeMatchThreeBirdLocation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RequestChangeMatchThreeBirdLocation*))((::PBYTE)hIl2Cpp + MOCBHBDGKLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCBHBDGKLM_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOCBHBDGKLM_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCBHBDGKLM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCBHBDGKLM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void KCOJAGFHDNM(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + MOCBHBDGKLM_KCOJAGFHDNM_OFFSET))(this, a1, a2);
		}

	};
