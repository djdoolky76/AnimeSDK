#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class Map; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class CreateNPCV2; }
namespace RPG::GameCore { class NpcEntityInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define DHMOGKLDPGJ_ALDFCFBCONJ_OFFSET UNITYSDK_OFFSET(0xEBE40E0)
#define DHMOGKLDPGJ_BEDILGMLOLM_OFFSET UNITYSDK_OFFSET(0xEBE4230)
#define DHMOGKLDPGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xEBE3E90)
#define DHMOGKLDPGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBE3EC0)
#define DHMOGKLDPGJ_GIFJNFHAGLA_OFFSET UNITYSDK_OFFSET(0xEBE4400)
#define DHMOGKLDPGJ_KOCLGAFFGOP_OFFSET UNITYSDK_OFFSET(0xEBE4710)
#define DHMOGKLDPGJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEBE3F10)

inline static constexpr unsigned int DHMOGKLDPGJ_TypeDefinitionIndex = 58051;

	class DHMOGKLDPGJ
	{
	public:
		::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x28
		::RPG::Client::Map* NIEEEFLKLGA; // 0x30
		::System::Int32 AMIOMLJJDAG; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateNPCV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateNPCV2*))((::PBYTE)hIl2Cpp + DHMOGKLDPGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMOGKLDPGJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMOGKLDPGJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void ALDFCFBCONJ(::RPG::GameCore::NpcEntityInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NpcEntityInfo*))((::PBYTE)hIl2Cpp + DHMOGKLDPGJ_ALDFCFBCONJ_OFFSET))(this, a1);
		}

		::System::Void BEDILGMLOLM(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DHMOGKLDPGJ_BEDILGMLOLM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GIFJNFHAGLA(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + DHMOGKLDPGJ_GIFJNFHAGLA_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Map* KOCLGAFFGOP()
		{
			return ((::RPG::Client::Map*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMOGKLDPGJ_KOCLGAFFGOP_OFFSET))(this);
		}

	};
