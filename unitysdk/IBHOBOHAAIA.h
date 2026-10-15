#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CJAMHAJOJEA;
class FJADHEOOMFH;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class LevelSmartObjectInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBHOBOHAAIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E2B5E0)
#define IBHOBOHAAIA_CTOR_OFFSET UNITYSDK_OFFSET(0x15E2A470)
#define IBHOBOHAAIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E2AE20)
#define IBHOBOHAAIA_GFAEBKOJJAK_OFFSET UNITYSDK_OFFSET(0x15E2B410)
#define IBHOBOHAAIA_GGFKPMBDOAH_OFFSET UNITYSDK_OFFSET(0x15E2B040)
#define IBHOBOHAAIA_GJIIODKMJPK_OFFSET UNITYSDK_OFFSET(0x15E2B090)
#define IBHOBOHAAIA_JGONLMIIBDD_OFFSET UNITYSDK_OFFSET(0x15E2B4C0)
#define IBHOBOHAAIA_JKFLDFPIJON_OFFSET UNITYSDK_OFFSET(0x15E2AC70)
#define IBHOBOHAAIA_JMNJBFJDJML_OFFSET UNITYSDK_OFFSET(0x15E2B1E0)
#define IBHOBOHAAIA_KAHKIAALIJK_OFFSET UNITYSDK_OFFSET(0x15E2B520)

inline static constexpr unsigned int IBHOBOHAAIA_TypeDefinitionIndex = 52117;

	class IBHOBOHAAIA : public ::System::Object
	{
	public:
		::RPG::Client::AdventurePhase* BLAFNEBDBCH; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::CJAMHAJOJEA*>* LKNHKKKELKJ; // 0x18
		::FJADHEOOMFH* EFDAADELOHM; // 0x20
		static ::System::Single* StaticGet_HAKJOFIFDFG()
		{
			return (::System::Single*)UnitySDK::FromName("", "IBHOBOHAAIA")->GetStaticField(0xC010);
		}

		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + IBHOBOHAAIA_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBHOBOHAAIA_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHOBOHAAIA_DISPOSE_OFFSET))(this);
		}

		::System::Void JKFLDFPIJON(::RPG::GameCore::LevelSmartObjectInfo* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSmartObjectInfo*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IBHOBOHAAIA_JKFLDFPIJON_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GJIIODKMJPK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IBHOBOHAAIA_GJIIODKMJPK_OFFSET))(this, a1, a2);
		}

		::System::Boolean JMNJBFJDJML(::UnityEngine::Vector3 a1, ::System::UInt64 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + IBHOBOHAAIA_JMNJBFJDJML_OFFSET))(this, a1, a2, a3);
		}

		::CJAMHAJOJEA* GFAEBKOJJAK(::System::UInt64 a1)
		{
			return ((::CJAMHAJOJEA*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + IBHOBOHAAIA_GFAEBKOJJAK_OFFSET))(this, a1);
		}

		static ::System::UInt64 GGFKPMBDOAH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt64(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IBHOBOHAAIA_GGFKPMBDOAH_OFFSET))(a1, a2);
		}

		static ::System::Void JGONLMIIBDD(::System::UInt64 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::UInt64, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IBHOBOHAAIA_JGONLMIIBDD_OFFSET))(a1, a2, a3);
		}

		::System::Void KAHKIAALIJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHOBOHAAIA_KAHKIAALIJK_OFFSET))(this);
		}

	};
