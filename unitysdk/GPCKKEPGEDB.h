#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFJJFFMMEAF.h"
class AGPMEJILJBO;
class FGMHNMKDFMA;
class KFELGAIGHAP;
class OKOCPOFNODF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPCKKEPGEDB_CTOR_OFFSET UNITYSDK_OFFSET(0x15B3F460)
#define GPCKKEPGEDB_DINFDBMMMCD_OFFSET UNITYSDK_OFFSET(0x15B40D80)
#define GPCKKEPGEDB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B3F5B0)
#define GPCKKEPGEDB_JEGGLPJGNCF_OFFSET UNITYSDK_OFFSET(0x15B40FE0)
#define GPCKKEPGEDB_LOECAPMLACO_OFFSET UNITYSDK_OFFSET(0x15B40750)
#define GPCKKEPGEDB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B3F7B0)

inline static constexpr unsigned int GPCKKEPGEDB_TypeDefinitionIndex = 53883;

	class GPCKKEPGEDB
	{
	public:
		::KFELGAIGHAP* MACKGFGJMLE; // 0x28
		::KFELGAIGHAP* BCEOFGNHABE; // 0x30
		::KFELGAIGHAP* NIMNFGDDPFG; // 0x38
		::System::Collections::Generic::List_1<::CFJJFFMMEAF>* EEMDJJPDGKH; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AGPMEJILJBO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AGPMEJILJBO*))((::PBYTE)hIl2Cpp + GPCKKEPGEDB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCKKEPGEDB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCKKEPGEDB_ONTASKBEGIN_OFFSET))(this);
		}

		::FGMHNMKDFMA* DINFDBMMMCD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::FGMHNMKDFMA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GPCKKEPGEDB_DINFDBMMMCD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::CFJJFFMMEAF>* LOECAPMLACO(::OKOCPOFNODF* a1)
		{
			return ((::System::Collections::Generic::List_1<::CFJJFFMMEAF>*(*)(::PVOID, ::OKOCPOFNODF*))((::PBYTE)hIl2Cpp + GPCKKEPGEDB_LOECAPMLACO_OFFSET))(this, a1);
		}

		::System::Void JEGGLPJGNCF(::KFELGAIGHAP* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GPCKKEPGEDB_JEGGLPJGNCF_OFFSET))(this, a1, a2);
		}

	};
