#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class DBLLLOBBDHN;
class KFELGAIGHAP;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define DOCJAFILEDP_CIMHOHFDCOF_OFFSET UNITYSDK_OFFSET(0x11FD9FE0)
#define DOCJAFILEDP_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD9E90)
#define DOCJAFILEDP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FD9F20)
#define DOCJAFILEDP_IDJAKCEFAGJ_OFFSET UNITYSDK_OFFSET(0x11FDA2F0)
#define DOCJAFILEDP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FDA080)
#define DOCJAFILEDP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11FDA1D0)
#define DOCJAFILEDP_TICK_OFFSET UNITYSDK_OFFSET(0x11FDA290)

inline static constexpr unsigned int DOCJAFILEDP_TypeDefinitionIndex = 52887;

	class DOCJAFILEDP : public ::GELIALJDFBL
	{
	public:
		::DBLLLOBBDHN* OFKGLJOAMLD; // 0x18
		::KFELGAIGHAP* GBMPLLCJDHL; // 0x20
		::RPG::Client::FiveDimGameInstance* HOADGOKCPDG; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DBLLLOBBDHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DBLLLOBBDHN*))((::PBYTE)hIl2Cpp + DOCJAFILEDP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCJAFILEDP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCJAFILEDP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCJAFILEDP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DOCJAFILEDP_TICK_OFFSET))(this, a1);
		}

		::System::Void CIMHOHFDCOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCJAFILEDP_CIMHOHFDCOF_OFFSET))(this);
		}

		::System::Void IDJAKCEFAGJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DOCJAFILEDP_IDJAKCEFAGJ_OFFSET))(this, a1);
		}

	};
