#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIIJADGFFLF.h"
#include "unitysdk/LKHBLFDGBHI_EMoveState.h"
#include "unitysdk/DMPMGGKKIBH_CDDBOGAOEHP.h"
class DMPMGGKKIBH;
namespace RPG::Client::ParkourGame { class MonoParkourItem; }
namespace RPG::Client::ParkourGame { class MonoParkourItemObstacleMovable; }

#define LKHBLFDGBHI_BKPNMOKJFBN_OFFSET UNITYSDK_OFFSET(0xB743FD0)
#define LKHBLFDGBHI_CTOR_OFFSET UNITYSDK_OFFSET(0xB743E70)
#define LKHBLFDGBHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB744080)
#define LKHBLFDGBHI_DOBGNDKIILB_OFFSET UNITYSDK_OFFSET(0xB7443D0)
#define LKHBLFDGBHI_EPALJGJKEEE_OFFSET UNITYSDK_OFFSET(0xB744450)
#define LKHBLFDGBHI_FBICIDBOIFE_OFFSET UNITYSDK_OFFSET(0xB7444C0)
#define LKHBLFDGBHI_GFKPOPKANGJ_OFFSET UNITYSDK_OFFSET(0xB744570)
#define LKHBLFDGBHI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB743F30)
#define LKHBLFDGBHI_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB7440F0)

inline static constexpr unsigned int LKHBLFDGBHI_TypeDefinitionIndex = 74212;

	class LKHBLFDGBHI : public ::BIIJADGFFLF
	{
	public:
		::System::Single MGMKFOEKAEF; // 0x58
		::System::Single NEHCJJMOPJF; // 0x5C
		::System::Single GCEKLOFGBFO; // 0x60
		::LKHBLFDGBHI_EMoveState CKMDHLPCLFH; // 0x64
		::System::Single HMMDNJIEDEK; // 0x68
		::System::Void _ctor(::DMPMGGKKIBH* a1, ::RPG::Client::ParkourGame::MonoParkourItem* a2, ::DMPMGGKKIBH_CDDBOGAOEHP a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::DMPMGGKKIBH*, ::RPG::Client::ParkourGame::MonoParkourItem*, ::DMPMGGKKIBH_CDDBOGAOEHP, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + LKHBLFDGBHI_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KPJGDHLENIP(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LKHBLFDGBHI_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHBLFDGBHI_DISPOSE_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LKHBLFDGBHI_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void FBICIDBOIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHBLFDGBHI_FBICIDBOIFE_OFFSET))(this);
		}

		::LKHBLFDGBHI_EMoveState EPALJGJKEEE()
		{
			return ((::LKHBLFDGBHI_EMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHBLFDGBHI_EPALJGJKEEE_OFFSET))(this);
		}

		::System::Void BKPNMOKJFBN(::LKHBLFDGBHI_EMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKHBLFDGBHI_EMoveState))((::PBYTE)hIl2Cpp + LKHBLFDGBHI_BKPNMOKJFBN_OFFSET))(this, a1);
		}

		::DMPMGGKKIBH_CDDBOGAOEHP GFKPOPKANGJ()
		{
			return ((::DMPMGGKKIBH_CDDBOGAOEHP(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHBLFDGBHI_GFKPOPKANGJ_OFFSET))(this);
		}

		::RPG::Client::ParkourGame::MonoParkourItemObstacleMovable* DOBGNDKIILB()
		{
			return ((::RPG::Client::ParkourGame::MonoParkourItemObstacleMovable*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHBLFDGBHI_DOBGNDKIILB_OFFSET))(this);
		}

	};
