#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class Map; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class CreateNPC; }
namespace RPG::GameCore { class NpcEntityInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CGAGOFECAHD_ALDFCFBCONJ_OFFSET UNITYSDK_OFFSET(0xCC5DA00)
#define CGAGOFECAHD_BEDILGMLOLM_OFFSET UNITYSDK_OFFSET(0xCC5DB50)
#define CGAGOFECAHD_CTOR_OFFSET UNITYSDK_OFFSET(0xCC5D7B0)
#define CGAGOFECAHD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC5D7E0)
#define CGAGOFECAHD_KOCLGAFFGOP_OFFSET UNITYSDK_OFFSET(0xCC5DE70)
#define CGAGOFECAHD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC5D830)

inline static constexpr unsigned int CGAGOFECAHD_TypeDefinitionIndex = 58050;

	class CGAGOFECAHD
	{
	public:
		::RPG::Client::Map* NIEEEFLKLGA; // 0x28
		::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateNPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateNPC*))((::PBYTE)hIl2Cpp + CGAGOFECAHD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAGOFECAHD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAGOFECAHD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void ALDFCFBCONJ(::RPG::GameCore::NpcEntityInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NpcEntityInfo*))((::PBYTE)hIl2Cpp + CGAGOFECAHD_ALDFCFBCONJ_OFFSET))(this, a1);
		}

		::System::Void BEDILGMLOLM(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CGAGOFECAHD_BEDILGMLOLM_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Map* KOCLGAFFGOP()
		{
			return ((::RPG::Client::Map*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAGOFECAHD_KOCLGAFFGOP_OFFSET))(this);
		}

	};
