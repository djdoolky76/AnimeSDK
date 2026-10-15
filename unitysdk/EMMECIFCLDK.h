#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENAAOFHBDIB.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/RPG/GameCore/RtMoveStopReason.h"
class IFMBINHDMOI;
class LNBLMLPMCIK;
class MACGJKCMFKP;

#define EMMECIFCLDK_AIFBNMPDJOO_OFFSET UNITYSDK_OFFSET(0x155530A0)
#define EMMECIFCLDK_CTOR_OFFSET UNITYSDK_OFFSET(0x155535B0)
#define EMMECIFCLDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15552EE0)
#define EMMECIFCLDK_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x15553120)
#define EMMECIFCLDK_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0x15552D00)
#define EMMECIFCLDK_HHGNECAGCCA_OFFSET UNITYSDK_OFFSET(0x155534A0)
#define EMMECIFCLDK_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0x15552D50)
#define EMMECIFCLDK_PKMMBEABKFM_OFFSET UNITYSDK_OFFSET(0x15553020)

inline static constexpr unsigned int EMMECIFCLDK_TypeDefinitionIndex = 53960;

	class EMMECIFCLDK : public ::ENAAOFHBDIB
	{
	public:
		::MACGJKCMFKP* IPEJMLAKNJH; // 0x38
		// static const ::System::Object GLINJNLBCMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMMECIFCLDK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RtCharacterState GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::RtCharacterState(*)(::PVOID))((::PBYTE)hIl2Cpp + EMMECIFCLDK_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMMECIFCLDK_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMMECIFCLDK_DISPOSE_OFFSET))(this);
		}

		::System::Void PKMMBEABKFM(::IFMBINHDMOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFMBINHDMOI*))((::PBYTE)hIl2Cpp + EMMECIFCLDK_PKMMBEABKFM_OFFSET))(this, a1);
		}

		::System::Void AIFBNMPDJOO(::IFMBINHDMOI* a1, ::RPG::GameCore::RtMoveStopReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFMBINHDMOI*, ::RPG::GameCore::RtMoveStopReason))((::PBYTE)hIl2Cpp + EMMECIFCLDK_AIFBNMPDJOO_OFFSET))(this, a1, a2);
		}

		::System::Void FFKBFPKEPEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMMECIFCLDK_FFKBFPKEPEN_OFFSET))(this);
		}

		::System::Void HHGNECAGCCA(::LNBLMLPMCIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNBLMLPMCIK*))((::PBYTE)hIl2Cpp + EMMECIFCLDK_HHGNECAGCCA_OFFSET))(this, a1);
		}

	};
