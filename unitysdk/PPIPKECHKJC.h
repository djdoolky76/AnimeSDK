#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DMPMGGKKIBH_CDDBOGAOEHP.h"
class CFALFIPEHJH;
class DMPMGGKKIBH;
namespace RPG::Client::ParkourGame { class MonoParkourRoad_RoadTrigger; }

#define PPIPKECHKJC_BGOCAHEDJBJ_OFFSET UNITYSDK_OFFSET(0xC38A8F0)
#define PPIPKECHKJC_BHEPDKPEPNO_1_OFFSET UNITYSDK_OFFSET(0xC38A610)
#define PPIPKECHKJC_BHEPDKPEPNO_OFFSET UNITYSDK_OFFSET(0xC38AD70)
#define PPIPKECHKJC_CTOR_OFFSET UNITYSDK_OFFSET(0xC38A000)
#define PPIPKECHKJC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC38A190)
#define PPIPKECHKJC_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC38AF20)
#define PPIPKECHKJC_GET_ENDDISTANCE_OFFSET UNITYSDK_OFFSET(0xC38AF40)
#define PPIPKECHKJC_GET_ROADSECTION_OFFSET UNITYSDK_OFFSET(0xC38AF10)
#define PPIPKECHKJC_GET_STARTDISTANCE_OFFSET UNITYSDK_OFFSET(0xC38AF30)
#define PPIPKECHKJC_GFGJJOODPAE_OFFSET UNITYSDK_OFFSET(0xC38AE90)
#define PPIPKECHKJC_GGPHIEAHMNB_OFFSET UNITYSDK_OFFSET(0xC38AD00)
#define PPIPKECHKJC_MPLPCDODCKA_OFFSET UNITYSDK_OFFSET(0xC38AB90)
#define PPIPKECHKJC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC38A1E0)

inline static constexpr unsigned int PPIPKECHKJC_TypeDefinitionIndex = 74225;

	class PPIPKECHKJC : public ::System::Object
	{
	public:
		::RPG::Client::ParkourGame::MonoParkourRoad_RoadTrigger* _Config_k__BackingField; // 0x10
		::Il2CppArray<::System::Boolean>* OIFGDMNDGDI; // 0x18
		::DMPMGGKKIBH* LGEGKIKIPOB; // 0x20
		::System::Single _EndDistance_k__BackingField; // 0x28
		::System::Boolean CCMMAOKLGCA; // 0x2C
		::System::Boolean MKCKAAKKMKH; // 0x2D
		::System::Byte _padding0[0x2];
		::System::Int32 _RoadSection_k__BackingField; // 0x30
		::System::Single _StartDistance_k__BackingField; // 0x34
		::System::Void _ctor(::System::Int32 a1, ::RPG::Client::ParkourGame::MonoParkourRoad_RoadTrigger* a2, ::DMPMGGKKIBH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ParkourGame::MonoParkourRoad_RoadTrigger*, ::DMPMGGKKIBH*))((::PBYTE)hIl2Cpp + PPIPKECHKJC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIPKECHKJC_DISPOSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::CFALFIPEHJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFALFIPEHJH*))((::PBYTE)hIl2Cpp + PPIPKECHKJC_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Boolean MPLPCDODCKA(::DMPMGGKKIBH_CDDBOGAOEHP a1, ::DMPMGGKKIBH_CDDBOGAOEHP a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMPMGGKKIBH_CDDBOGAOEHP, ::DMPMGGKKIBH_CDDBOGAOEHP))((::PBYTE)hIl2Cpp + PPIPKECHKJC_MPLPCDODCKA_OFFSET))(this, a1, a2);
		}

		::System::Boolean BHEPDKPEPNO(::DMPMGGKKIBH_CDDBOGAOEHP a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMPMGGKKIBH_CDDBOGAOEHP))((::PBYTE)hIl2Cpp + PPIPKECHKJC_BHEPDKPEPNO_OFFSET))(this, a1);
		}

		::System::Boolean BHEPDKPEPNO_1(::CFALFIPEHJH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFALFIPEHJH*))((::PBYTE)hIl2Cpp + PPIPKECHKJC_BHEPDKPEPNO_1_OFFSET))(this, a1);
		}

		::System::Boolean BGOCAHEDJBJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIPKECHKJC_BGOCAHEDJBJ_OFFSET))(this);
		}

		::System::Boolean GGPHIEAHMNB(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PPIPKECHKJC_GGPHIEAHMNB_OFFSET))(this, a1);
		}

		::System::Boolean GFGJJOODPAE(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPIPKECHKJC_GFGJJOODPAE_OFFSET))(this, a1);
		}

		::System::Int32 get_RoadSection()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIPKECHKJC_GET_ROADSECTION_OFFSET))(this);
		}

		::RPG::Client::ParkourGame::MonoParkourRoad_RoadTrigger* get_Config()
		{
			return ((::RPG::Client::ParkourGame::MonoParkourRoad_RoadTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIPKECHKJC_GET_CONFIG_OFFSET))(this);
		}

		::System::Single get_StartDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIPKECHKJC_GET_STARTDISTANCE_OFFSET))(this);
		}

		::System::Single get_EndDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIPKECHKJC_GET_ENDDISTANCE_OFFSET))(this);
		}

	};
