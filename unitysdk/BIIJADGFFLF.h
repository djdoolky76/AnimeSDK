#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABDOMMLHNBC.h"
#include "unitysdk/DMPMGGKKIBH_CDDBOGAOEHP.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DMPMGGKKIBH;
namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }
namespace RPG::Client::ParkourGame { class MonoParkourItem; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define BIIJADGFFLF_BLPLAFPIJPC_OFFSET UNITYSDK_OFFSET(0xB4A9AF0)
#define BIIJADGFFLF_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A8EA0)
#define BIIJADGFFLF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4A8F50)
#define BIIJADGFFLF_FBICIDBOIFE_OFFSET UNITYSDK_OFFSET(0xB4A97F0)
#define BIIJADGFFLF_FOKPGFJKKAJ_OFFSET UNITYSDK_OFFSET(0xB4A9460)
#define BIIJADGFFLF_GET_LASTVIEWLAPCOUNT_OFFSET UNITYSDK_OFFSET(0xB4A9C10)
#define BIIJADGFFLF_GFKPOPKANGJ_OFFSET UNITYSDK_OFFSET(0xB4A9A20)
#define BIIJADGFFLF_GHBKJPPIKBH_OFFSET UNITYSDK_OFFSET(0xB4A9A00)
#define BIIJADGFFLF_HAOBJNHJFGM_OFFSET UNITYSDK_OFFSET(0xB4A9000)
#define BIIJADGFFLF_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xB4A9A50)
#define BIIJADGFFLF_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0xB4A99F0)
#define BIIJADGFFLF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB4A9300)
#define BIIJADGFFLF_KFJGIKDLMBN_OFFSET UNITYSDK_OFFSET(0xB4A9B20)
#define BIIJADGFFLF_KMPFFIKGOEK_OFFSET UNITYSDK_OFFSET(0xB4A9B00)
#define BIIJADGFFLF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB4A8FA0)
#define BIIJADGFFLF_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB4A9990)
#define BIIJADGFFLF_MELMFLDFNJD_OFFSET UNITYSDK_OFFSET(0xB4A9A40)
#define BIIJADGFFLF_ONLIAPJJNJM_OFFSET UNITYSDK_OFFSET(0xB4A9B10)
#define BIIJADGFFLF_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0xB4A9A10)
#define BIIJADGFFLF_SET_LASTVIEWLAPCOUNT_OFFSET UNITYSDK_OFFSET(0xB4A9C20)

inline static constexpr unsigned int BIIJADGFFLF_TypeDefinitionIndex = 74211;

	class BIIJADGFFLF : public ::ABDOMMLHNBC
	{
	public:
		::UnityEngine::Renderer* JAMDAALMOAL; // 0x10
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x18
		::DMPMGGKKIBH* LGEGKIKIPOB; // 0x20
		::UnityEngine::Collider* GBDKBLPAHEL; // 0x28
		::RPG::Client::ParkourGame::MonoParkourItem* HBKCICMELMM; // 0x30
		::System::Single IIHJLIDLALB; // 0x38
		::DMPMGGKKIBH_CDDBOGAOEHP BPOHMGMAGHM; // 0x3C
		::System::Single NLIFGOAGCCG; // 0x48
		::System::Single ANMLBOLKEBM; // 0x4C
		::System::Boolean CINKAGKPOEK; // 0x50
		::System::Boolean HNALEMBOBFE; // 0x51
		::System::Byte _padding0[0x2];
		::System::Int32 _LastViewLapCount_k__BackingField; // 0x54
		::System::Void _ctor(::DMPMGGKKIBH* a1, ::RPG::Client::ParkourGame::MonoParkourItem* a2, ::DMPMGGKKIBH_CDDBOGAOEHP a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::DMPMGGKKIBH*, ::RPG::Client::ParkourGame::MonoParkourItem*, ::DMPMGGKKIBH_CDDBOGAOEHP, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BIIJADGFFLF_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIJADGFFLF_DISPOSE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BIIJADGFFLF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BIIJADGFFLF_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void FOKPGFJKKAJ(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + BIIJADGFFLF_FOKPGFJKKAJ_OFFSET))(this, a1);
		}

		::System::Void FBICIDBOIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIJADGFFLF_FBICIDBOIFE_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BIIJADGFFLF_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void HAOBJNHJFGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIJADGFFLF_HAOBJNHJFGM_OFFSET))(this);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIJADGFFLF_JKEONEEPIHH_OFFSET))(this);
		}

		::System::Boolean GHBKJPPIKBH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIJADGFFLF_GHBKJPPIKBH_OFFSET))(this);
		}

		::RPG::Client::ParkourGame::MonoParkourItem* PEFLJDOKOIL()
		{
			return ((::RPG::Client::ParkourGame::MonoParkourItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIJADGFFLF_PEFLJDOKOIL_OFFSET))(this);
		}

		::DMPMGGKKIBH_CDDBOGAOEHP GFKPOPKANGJ()
		{
			return ((::DMPMGGKKIBH_CDDBOGAOEHP(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIJADGFFLF_GFKPOPKANGJ_OFFSET))(this);
		}

		::System::Single MELMFLDFNJD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIJADGFFLF_MELMFLDFNJD_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIJADGFFLF_HHMFILFAMNA_OFFSET))(this);
		}

		::UnityEngine::Transform* BLPLAFPIJPC()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIJADGFFLF_BLPLAFPIJPC_OFFSET))(this);
		}

		::UnityEngine::Renderer* KMPFFIKGOEK()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIJADGFFLF_KMPFFIKGOEK_OFFSET))(this);
		}

		::UnityEngine::Collider* ONLIAPJJNJM()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIJADGFFLF_ONLIAPJJNJM_OFFSET))(this);
		}

		::System::Boolean KFJGIKDLMBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIJADGFFLF_KFJGIKDLMBN_OFFSET))(this);
		}

		::System::Int32 get_LastViewLapCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIJADGFFLF_GET_LASTVIEWLAPCOUNT_OFFSET))(this);
		}

		::System::Void set_LastViewLapCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BIIJADGFFLF_SET_LASTVIEWLAPCOUNT_OFFSET))(this, a1);
		}

	};
