#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HJAFDDGGKOE;
class JKBJBCIMDDO;
class KLJDOJPBEJC;
namespace RPG::GameCore { class DynamicFloat; }

#define KLJDOJPBEJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A78C0)
#define KLJDOJPBEJC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0A78D0)
#define KLJDOJPBEJC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0A7880)

inline static constexpr unsigned int KLJDOJPBEJC_TypeDefinitionIndex = 22869;

	class KLJDOJPBEJC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::JKBJBCIMDDO* LJOMJKINJPG; // 0x18
		::RPG::GameCore::DynamicFloat* GJFJDHNLFFP; // 0x20
		::HJAFDDGGKOE* GCFLIIPMBJK; // 0x28
		::System::Single CIBJGHGKPMI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJDOJPBEJC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KLJDOJPBEJC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KLJDOJPBEJC*))((::PBYTE)hIl2Cpp + KLJDOJPBEJC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KLJDOJPBEJC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KLJDOJPBEJC*))((::PBYTE)hIl2Cpp + KLJDOJPBEJC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
