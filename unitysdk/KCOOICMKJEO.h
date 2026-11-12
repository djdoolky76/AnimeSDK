#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDBHHBCMEFL.h"
class DJBDPNHFCMC;
class KDJNAAOFMMJ;
namespace RPG::GameCore { class TaskContext; }

#define KCOOICMKJEO_CTOR_OFFSET UNITYSDK_OFFSET(0xBBCF550)
#define KCOOICMKJEO_GBAJHPHDFCC_OFFSET UNITYSDK_OFFSET(0xBBCF990)
#define KCOOICMKJEO_LNMOCNDILJN_OFFSET UNITYSDK_OFFSET(0xBBCF9F0)
#define KCOOICMKJEO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBCF890)
#define KCOOICMKJEO_TICK_OFFSET UNITYSDK_OFFSET(0xBBCF600)

inline static constexpr unsigned int KCOOICMKJEO_TypeDefinitionIndex = 54507;

	class KCOOICMKJEO : public ::GDBHHBCMEFL
	{
	public:
		::DJBDPNHFCMC* IGHAHBNLIJA; // 0x28
		::KDJNAAOFMMJ* MGLGONPDIFK; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DJBDPNHFCMC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DJBDPNHFCMC*))((::PBYTE)hIl2Cpp + KCOOICMKJEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KCOOICMKJEO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOOICMKJEO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void GBAJHPHDFCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOOICMKJEO_GBAJHPHDFCC_OFFSET))(this);
		}

		::System::Void LNMOCNDILJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOOICMKJEO_LNMOCNDILJN_OFFSET))(this);
		}

	};
