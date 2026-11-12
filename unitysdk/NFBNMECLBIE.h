#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowMuseumPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define NFBNMECLBIE_AIEGALJHOFE_OFFSET UNITYSDK_OFFSET(0xC4530C0)
#define NFBNMECLBIE_CTOR_OFFSET UNITYSDK_OFFSET(0xC452F30)
#define NFBNMECLBIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC452F40)
#define NFBNMECLBIE_JADODLADFJM_OFFSET UNITYSDK_OFFSET(0xC4534C0)
#define NFBNMECLBIE_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0xC453460)
#define NFBNMECLBIE_KHABMEMDHEP_OFFSET UNITYSDK_OFFSET(0xC453340)
#define NFBNMECLBIE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC453000)
#define NFBNMECLBIE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC453290)
#define NFBNMECLBIE_TICK_OFFSET UNITYSDK_OFFSET(0xC4532E0)

inline static constexpr unsigned int NFBNMECLBIE_TypeDefinitionIndex = 59942;

	class NFBNMECLBIE : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::ShowMuseumPage* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMuseumPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMuseumPage*))((::PBYTE)hIl2Cpp + NFBNMECLBIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBNMECLBIE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBNMECLBIE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBNMECLBIE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFBNMECLBIE_TICK_OFFSET))(this, a1);
		}

		::System::Void AIEGALJHOFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBNMECLBIE_AIEGALJHOFE_OFFSET))(this);
		}

		::System::Void KHABMEMDHEP(::RPG::Client::LuaUIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + NFBNMECLBIE_KHABMEMDHEP_OFFSET))(this, a1);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBNMECLBIE_JNIKOAEAEHB_OFFSET))(this);
		}

		::System::Void JADODLADFJM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFBNMECLBIE_JADODLADFJM_OFFSET))(this, a1);
		}

	};
