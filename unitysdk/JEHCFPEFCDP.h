#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENAAOFHBDIB.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/RPG/GameCore/RtMoveStopReason.h"
class DKANDAHDICI;
class IFMBINHDMOI;
class LNBLMLPMCIK;
class MACGJKCMFKP;

#define JEHCFPEFCDP_AIFBNMPDJOO_OFFSET UNITYSDK_OFFSET(0xB968C50)
#define JEHCFPEFCDP_CTOR_OFFSET UNITYSDK_OFFSET(0xB969270)
#define JEHCFPEFCDP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB968A50)
#define JEHCFPEFCDP_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xB968CD0)
#define JEHCFPEFCDP_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xB968870)
#define JEHCFPEFCDP_HHGNECAGCCA_OFFSET UNITYSDK_OFFSET(0xB969100)
#define JEHCFPEFCDP_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0xB9688C0)
#define JEHCFPEFCDP_PKMMBEABKFM_OFFSET UNITYSDK_OFFSET(0xB968BD0)

inline static constexpr unsigned int JEHCFPEFCDP_TypeDefinitionIndex = 55347;

	class JEHCFPEFCDP : public ::ENAAOFHBDIB
	{
	public:
		::DKANDAHDICI* JFOFALIGPHJ; // 0x38
		::MACGJKCMFKP* IPEJMLAKNJH; // 0x40
		// static const ::System::Object GLINJNLBCMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHCFPEFCDP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RtCharacterState GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::RtCharacterState(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHCFPEFCDP_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHCFPEFCDP_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHCFPEFCDP_DISPOSE_OFFSET))(this);
		}

		::System::Void PKMMBEABKFM(::IFMBINHDMOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFMBINHDMOI*))((::PBYTE)hIl2Cpp + JEHCFPEFCDP_PKMMBEABKFM_OFFSET))(this, a1);
		}

		::System::Void AIFBNMPDJOO(::IFMBINHDMOI* a1, ::RPG::GameCore::RtMoveStopReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFMBINHDMOI*, ::RPG::GameCore::RtMoveStopReason))((::PBYTE)hIl2Cpp + JEHCFPEFCDP_AIFBNMPDJOO_OFFSET))(this, a1, a2);
		}

		::System::Void FFKBFPKEPEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHCFPEFCDP_FFKBFPKEPEN_OFFSET))(this);
		}

		::System::Void HHGNECAGCCA(::LNBLMLPMCIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNBLMLPMCIK*))((::PBYTE)hIl2Cpp + JEHCFPEFCDP_HHGNECAGCCA_OFFSET))(this, a1);
		}

	};
