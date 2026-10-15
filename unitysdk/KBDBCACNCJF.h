#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBDBCACNCJF_WaitState.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PhotoGraphWaitIdentifyFinish; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KBDBCACNCJF_CTOR_OFFSET UNITYSDK_OFFSET(0xB2E93B0)
#define KBDBCACNCJF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2E95D0)
#define KBDBCACNCJF_HBIDKMJBOCN_OFFSET UNITYSDK_OFFSET(0xB2E9C90)
#define KBDBCACNCJF_IKFMHCMKFHJ_OFFSET UNITYSDK_OFFSET(0xB2EA080)
#define KBDBCACNCJF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2E9920)

inline static constexpr unsigned int KBDBCACNCJF_TypeDefinitionIndex = 53094;

	class KBDBCACNCJF
	{
	public:
		::KFELGAIGHAP* LPEMKIEPOLK; // 0x28
		::KFELGAIGHAP* PFNGAOGCGHH; // 0x30
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* HOBJAEBEIBK; // 0x38
		::KFELGAIGHAP* KHCFHOHBBIA; // 0x40
		::System::UInt32 CAJHBEBFDKD; // 0x48
		::System::Boolean HDLKFIMOEGJ; // 0x4C
		::System::Byte _padding0[0x3];
		::KBDBCACNCJF_WaitState FFHNGPLFNHI; // 0x50
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphWaitIdentifyFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphWaitIdentifyFinish*))((::PBYTE)hIl2Cpp + KBDBCACNCJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDBCACNCJF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDBCACNCJF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void HBIDKMJBOCN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBDBCACNCJF_HBIDKMJBOCN_OFFSET))(this, a1);
		}

		::System::Void IKFMHCMKFHJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBDBCACNCJF_IKFMHCMKFHJ_OFFSET))(this, a1);
		}

	};
