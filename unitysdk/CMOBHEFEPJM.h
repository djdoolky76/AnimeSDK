#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNBOAMEBAOE.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DEEJKBIMHAA;
class GELIALJDFBL;
namespace RPG::GameCore { class RandomConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMOBHEFEPJM_CIADCOCBJDB_OFFSET UNITYSDK_OFFSET(0xDA40000)
#define CMOBHEFEPJM_CTOR_OFFSET UNITYSDK_OFFSET(0xDA3E3B0)
#define CMOBHEFEPJM_DHEKKIOOGCA_OFFSET UNITYSDK_OFFSET(0xDA3F330)
#define CMOBHEFEPJM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA3E4B0)
#define CMOBHEFEPJM_MABOIANGJIJ_OFFSET UNITYSDK_OFFSET(0xDA3FF00)
#define CMOBHEFEPJM_MDCCLFPMOHN_OFFSET UNITYSDK_OFFSET(0xDA40040)
#define CMOBHEFEPJM_OKLLDILBGOP_OFFSET UNITYSDK_OFFSET(0xDA3E690)
#define CMOBHEFEPJM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA3E630)
#define CMOBHEFEPJM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDA3FB30)
#define CMOBHEFEPJM_TICK_OFFSET UNITYSDK_OFFSET(0xDA3FE70)

	class CMOBHEFEPJM : public ::BNBOAMEBAOE
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::DEEJKBIMHAA* AIJGGLCAEON; // 0x20
		::System::Collections::Generic::List_1<::GELIALJDFBL*>* DLHGAHBOIDN; // 0x28
		::RPG::GameCore::RandomConfig* OFKGLJOAMLD; // 0x30
		::RPG::GameCore::StringHash JEMNICCLDAJ; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomConfig*))((::PBYTE)hIl2Cpp + CMOBHEFEPJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOBHEFEPJM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOBHEFEPJM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOBHEFEPJM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMOBHEFEPJM_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskContext* CIADCOCBJDB()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOBHEFEPJM_CIADCOCBJDB_OFFSET))(this);
		}

		::System::Void DHEKKIOOGCA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMOBHEFEPJM_DHEKKIOOGCA_OFFSET))(this, a1);
		}

		::System::Boolean MABOIANGJIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOBHEFEPJM_MABOIANGJIJ_OFFSET))(this);
		}

		::System::Void OKLLDILBGOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOBHEFEPJM_OKLLDILBGOP_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* MDCCLFPMOHN(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CMOBHEFEPJM_MDCCLFPMOHN_OFFSET))(this, a1, a2, a3);
		}

	};
