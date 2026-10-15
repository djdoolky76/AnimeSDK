#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOKKFAJCOLI;
class COOONBGCCCM;
class DEGELHCLDJB;
class EBMNAMMEFKB;
class FAODCLALLME;
class FNMDEKMKEKH;
class KOIACJAJFEC;
class OBJANKHLNGO;
namespace RPG::Client::FateRin::Card { class IFateRinBattleCardViewModel; }

#define DGGGMPHKPCJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE83C060)
#define DGGGMPHKPCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE83C040)
#define DGGGMPHKPCJ_GNHIEEEJHDP_OFFSET UNITYSDK_OFFSET(0xE83C380)
#define DGGGMPHKPCJ_JFPEFKKCBOH_OFFSET UNITYSDK_OFFSET(0xE83C1C0)
#define DGGGMPHKPCJ_KHOMEIPEKEJ_OFFSET UNITYSDK_OFFSET(0xE83C280)
#define DGGGMPHKPCJ_MBCNOAEIDME_OFFSET UNITYSDK_OFFSET(0xE83C220)
#define DGGGMPHKPCJ_OBOJEIPJBBJ_OFFSET UNITYSDK_OFFSET(0xE83C0C0)

inline static constexpr unsigned int DGGGMPHKPCJ_TypeDefinitionIndex = 81127;

	class DGGGMPHKPCJ : public ::System::Object
	{
	public:
		::FAODCLALLME* ILMLNDPKFNO; // 0x10
		::BOKKFAJCOLI* BNIJMCMIILO; // 0x18
		::DEGELHCLDJB* JNBGEJAAMEG; // 0x20
		::EBMNAMMEFKB* KMPBGOHKMAO; // 0x28
		::OBJANKHLNGO* GJALMBBNNOF; // 0x30
		::FNMDEKMKEKH* EIKEHJPPKFK; // 0x38
		// static const ::System::Object OMAKMGCLGNI; // 0x0
		::System::Void _ctor(::DEGELHCLDJB* a1, ::FAODCLALLME* a2, ::EBMNAMMEFKB* a3, ::BOKKFAJCOLI* a4, ::OBJANKHLNGO* a5, ::FNMDEKMKEKH* a6)
		{
			return ((::System::Void(*)(::PVOID, ::DEGELHCLDJB*, ::FAODCLALLME*, ::EBMNAMMEFKB*, ::BOKKFAJCOLI*, ::OBJANKHLNGO*, ::FNMDEKMKEKH*))((::PBYTE)hIl2Cpp + DGGGMPHKPCJ_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel* BPLPBPMEODA(::COOONBGCCCM* a1)
		{
			return ((::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*(*)(::PVOID, ::COOONBGCCCM*))((::PBYTE)hIl2Cpp + DGGGMPHKPCJ_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel* JFPEFKKCBOH(::COOONBGCCCM* a1)
		{
			return ((::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*(*)(::PVOID, ::COOONBGCCCM*))((::PBYTE)hIl2Cpp + DGGGMPHKPCJ_JFPEFKKCBOH_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel* MBCNOAEIDME(::COOONBGCCCM* a1)
		{
			return ((::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*(*)(::PVOID, ::COOONBGCCCM*))((::PBYTE)hIl2Cpp + DGGGMPHKPCJ_MBCNOAEIDME_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel* KHOMEIPEKEJ(::KOIACJAJFEC* a1)
		{
			return ((::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*(*)(::PVOID, ::KOIACJAJFEC*))((::PBYTE)hIl2Cpp + DGGGMPHKPCJ_KHOMEIPEKEJ_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel* OBOJEIPJBBJ(::COOONBGCCCM* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*(*)(::PVOID, ::COOONBGCCCM*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DGGGMPHKPCJ_OBOJEIPJBBJ_OFFSET))(this, a1, a2, a3);
		}

		::COOONBGCCCM* GNHIEEEJHDP(::KOIACJAJFEC* a1)
		{
			return ((::COOONBGCCCM*(*)(::PVOID, ::KOIACJAJFEC*))((::PBYTE)hIl2Cpp + DGGGMPHKPCJ_GNHIEEEJHDP_OFFSET))(this, a1);
		}

	};
