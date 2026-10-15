#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KDJNAAOFMMJ;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define KOOGIKKDHBC_CLHEGAABOMC_OFFSET UNITYSDK_OFFSET(0xB5A31C0)
#define KOOGIKKDHBC_CTOR_OFFSET UNITYSDK_OFFSET(0xB5A2E60)
#define KOOGIKKDHBC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5A2E70)
#define KOOGIKKDHBC_DOKOMMCBAIH_OFFSET UNITYSDK_OFFSET(0xB5A32F0)
#define KOOGIKKDHBC_KKDMDDGJNMC_OFFSET UNITYSDK_OFFSET(0xB5A3060)
#define KOOGIKKDHBC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5A2EB0)
#define KOOGIKKDHBC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5A3240)
#define KOOGIKKDHBC_PBGHPDBHEDK_OFFSET UNITYSDK_OFFSET(0xB5A3200)
#define KOOGIKKDHBC_TICK_OFFSET UNITYSDK_OFFSET(0xB5A3290)

inline static constexpr unsigned int KOOGIKKDHBC_TypeDefinitionIndex = 58694;

	class KOOGIKKDHBC : public ::GELIALJDFBL
	{
	public:
		::Il2CppArray<::System::Int32>* CFKLLAOPMOG; // 0x18
		::KDJNAAOFMMJ* PJHNKKIDLBE; // 0x20
		::RPG::Client::UIController* OGOFNHAGOPO; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TaskConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + KOOGIKKDHBC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOOGIKKDHBC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOOGIKKDHBC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean KKDMDDGJNMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOOGIKKDHBC_KKDMDDGJNMC_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOOGIKKDHBC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KOOGIKKDHBC_TICK_OFFSET))(this, a1);
		}

		::System::Void DOKOMMCBAIH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KOOGIKKDHBC_DOKOMMCBAIH_OFFSET))(this, a1);
		}

		::System::Boolean CLHEGAABOMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOOGIKKDHBC_CLHEGAABOMC_OFFSET))(this);
		}

		::System::Boolean PBGHPDBHEDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOOGIKKDHBC_PBGHPDBHEDK_OFFSET))(this);
		}

	};
