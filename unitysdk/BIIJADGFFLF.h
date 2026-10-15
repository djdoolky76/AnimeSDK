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

#define BIIJADGFFLF_BLPLAFPIJPC_OFFSET UNITYSDK_OFFSET(0xB4ADBB0)
#define BIIJADGFFLF_CTOR_OFFSET UNITYSDK_OFFSET(0xB4ACF60)
#define BIIJADGFFLF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4AD010)
#define BIIJADGFFLF_FBICIDBOIFE_OFFSET UNITYSDK_OFFSET(0xB4AD8B0)
#define BIIJADGFFLF_FOKPGFJKKAJ_OFFSET UNITYSDK_OFFSET(0xB4AD520)
#define BIIJADGFFLF_GET_LASTVIEWLAPCOUNT_OFFSET UNITYSDK_OFFSET(0xB4ADCD0)
#define BIIJADGFFLF_GFKPOPKANGJ_OFFSET UNITYSDK_OFFSET(0xB4ADAE0)
#define BIIJADGFFLF_GHBKJPPIKBH_OFFSET UNITYSDK_OFFSET(0xB4ADAC0)
#define BIIJADGFFLF_HAOBJNHJFGM_OFFSET UNITYSDK_OFFSET(0xB4AD0C0)
#define BIIJADGFFLF_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xB4ADB10)
#define BIIJADGFFLF_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0xB4ADAB0)
#define BIIJADGFFLF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB4AD3C0)
#define BIIJADGFFLF_KFJGIKDLMBN_OFFSET UNITYSDK_OFFSET(0xB4ADBE0)
#define BIIJADGFFLF_KMPFFIKGOEK_OFFSET UNITYSDK_OFFSET(0xB4ADBC0)
#define BIIJADGFFLF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB4AD060)
#define BIIJADGFFLF_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB4ADA50)
#define BIIJADGFFLF_MELMFLDFNJD_OFFSET UNITYSDK_OFFSET(0xB4ADB00)
#define BIIJADGFFLF_ONLIAPJJNJM_OFFSET UNITYSDK_OFFSET(0xB4ADBD0)
#define BIIJADGFFLF_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0xB4ADAD0)
#define BIIJADGFFLF_SET_LASTVIEWLAPCOUNT_OFFSET UNITYSDK_OFFSET(0xB4ADCE0)

	class BIIJADGFFLF : public ::ABDOMMLHNBC
	{
	public:
		::UnityEngine::Renderer* JAMDAALMOAL; // 0x10
		::DMPMGGKKIBH* LGEGKIKIPOB; // 0x18
		::UnityEngine::Collider* GBDKBLPAHEL; // 0x20
		::RPG::Client::ParkourGame::MonoParkourItem* HBKCICMELMM; // 0x28
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x30
		::System::Boolean HNALEMBOBFE; // 0x38
		::System::Boolean CINKAGKPOEK; // 0x39
		::System::Byte _padding0[0x2];
		::System::Int32 _LastViewLapCount_k__BackingField; // 0x3C
		::System::Single ANMLBOLKEBM; // 0x40
		::DMPMGGKKIBH_CDDBOGAOEHP BPOHMGMAGHM; // 0x44
		::System::Single IIHJLIDLALB; // 0x50
		::System::Single NLIFGOAGCCG; // 0x54
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
