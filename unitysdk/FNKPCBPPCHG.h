#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class HIJGDJLAOKI;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class InfinitePerWaveData; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaveMonster; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNKPCBPPCHG_AKKJONIMHML_OFFSET UNITYSDK_OFFSET(0x167EC050)
#define FNKPCBPPCHG_BJMJCFLMNKE_OFFSET UNITYSDK_OFFSET(0x167EBE50)
#define FNKPCBPPCHG_CTOR_OFFSET UNITYSDK_OFFSET(0x167EAD00)
#define FNKPCBPPCHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167EAD50)
#define FNKPCBPPCHG_ENIIMABNHPM_OFFSET UNITYSDK_OFFSET(0x167EAEF0)
#define FNKPCBPPCHG_HIGMOENOBMB_OFFSET UNITYSDK_OFFSET(0x167EBD10)
#define FNKPCBPPCHG_IHEICCAEDKO_OFFSET UNITYSDK_OFFSET(0x167EC3F0)
#define FNKPCBPPCHG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x167EADA0)
#define FNKPCBPPCHG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x167EB9A0)
#define FNKPCBPPCHG_PFJFCFPEGBO_OFFSET UNITYSDK_OFFSET(0x167EB750)
#define FNKPCBPPCHG_PKLAPDACOGH_OFFSET UNITYSDK_OFFSET(0x167EBC30)
#define FNKPCBPPCHG_TICK_OFFSET UNITYSDK_OFFSET(0x167EBA10)

inline static constexpr unsigned int FNKPCBPPCHG_TypeDefinitionIndex = 60223;

	class FNKPCBPPCHG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaveMonster* OFKGLJOAMLD; // 0x20
		::HIJGDJLAOKI* HFIKCHEJHGH; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* MOPPDINKKPL; // 0x30
		::System::Boolean IFANCAMEFHK; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaveMonster* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaveMonster*))((::PBYTE)hIl2Cpp + FNKPCBPPCHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKPCBPPCHG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKPCBPPCHG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKPCBPPCHG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FNKPCBPPCHG_TICK_OFFSET))(this, a1);
		}

		::System::Boolean HIGMOENOBMB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNKPCBPPCHG_HIGMOENOBMB_OFFSET))(this, a1);
		}

		::System::Void ENIIMABNHPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKPCBPPCHG_ENIIMABNHPM_OFFSET))(this);
		}

		::System::Void PFJFCFPEGBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKPCBPPCHG_PFJFCFPEGBO_OFFSET))(this);
		}

		::System::Void IHEICCAEDKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKPCBPPCHG_IHEICCAEDKO_OFFSET))(this);
		}

		::System::Boolean PKLAPDACOGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKPCBPPCHG_PKLAPDACOGH_OFFSET))(this);
		}

		::System::Void AKKJONIMHML(::System::Int32 a1, ::RPG::GameCore::InfinitePerWaveData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::InfinitePerWaveData*))((::PBYTE)hIl2Cpp + FNKPCBPPCHG_AKKJONIMHML_OFFSET))(this, a1, a2);
		}

		::System::Void BJMJCFLMNKE(::System::Int32 a1, ::RPG::GameCore::InfinitePerWaveData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::InfinitePerWaveData*))((::PBYTE)hIl2Cpp + FNKPCBPPCHG_BJMJCFLMNKE_OFFSET))(this, a1, a2);
		}

	};
