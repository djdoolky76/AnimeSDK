#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CollectDataConditions; }
namespace RPG::GameCore { class TaskContext; }

#define MMEFIEOOHLI_CLEBACLCDIK_OFFSET UNITYSDK_OFFSET(0xB9BB8A0)
#define MMEFIEOOHLI_CTOR_OFFSET UNITYSDK_OFFSET(0xB9BB4F0)
#define MMEFIEOOHLI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9BB500)
#define MMEFIEOOHLI_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0xB9BC400)
#define MMEFIEOOHLI_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB9BC5C0)
#define MMEFIEOOHLI_LHJPKFDLIIN_OFFSET UNITYSDK_OFFSET(0xB9BB860)
#define MMEFIEOOHLI_MDBANKKKFIH_OFFSET UNITYSDK_OFFSET(0xB9BC540)
#define MMEFIEOOHLI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9BB550)
#define MMEFIEOOHLI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9BC460)
#define MMEFIEOOHLI_PALDAONIFPJ_OFFSET UNITYSDK_OFFSET(0xB9BBFB0)
#define MMEFIEOOHLI_TICK_OFFSET UNITYSDK_OFFSET(0xB9BC4E0)

inline static constexpr unsigned int MMEFIEOOHLI_TypeDefinitionIndex = 58030;

	class MMEFIEOOHLI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CollectDataConditions* OFKGLJOAMLD; // 0x20
		::System::Int32 JMBKEMHBFLE; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CollectDataConditions* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CollectDataConditions*))((::PBYTE)hIl2Cpp + MMEFIEOOHLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEFIEOOHLI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEFIEOOHLI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEFIEOOHLI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MMEFIEOOHLI_TICK_OFFSET))(this, a1);
		}

		::System::Void CLEBACLCDIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEFIEOOHLI_CLEBACLCDIK_OFFSET))(this);
		}

		::System::Void PALDAONIFPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEFIEOOHLI_PALDAONIFPJ_OFFSET))(this);
		}

		::System::Void MDBANKKKFIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEFIEOOHLI_MDBANKKKFIH_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEFIEOOHLI_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void LHJPKFDLIIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEFIEOOHLI_LHJPKFDLIIN_OFFSET))(this);
		}

		::System::Void GPLLONMEDAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEFIEOOHLI_GPLLONMEDAC_OFFSET))(this);
		}

	};
