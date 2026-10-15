#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class AECMCBAHALK;
class CILNKGMHIIE;
class LDMKDNCFGKL;

#define AECMCBAHALK_BNEOJLLDFJP_OFFSET UNITYSDK_OFFSET(0xB14C480)
#define AECMCBAHALK_CTOR_OFFSET UNITYSDK_OFFSET(0xB14C470)
#define AECMCBAHALK_HEPPBBLLBPN_OFFSET UNITYSDK_OFFSET(0xB14C3E0)

inline static constexpr unsigned int AECMCBAHALK_TypeDefinitionIndex = 56299;

	class AECMCBAHALK : public ::System::Object
	{
	public:
		::LDMKDNCFGKL* FGNHFJHBPIM; // 0x10
		::RPG::GameCore::FixPoint MCCIKOBOIEM; // 0x18
		::System::Int32 DKAHMNKOMPB; // 0x20
		::System::UInt32 PHFMCACHFIJ; // 0x24
		::RPG::GameCore::FixPoint NHPMMJEMAHJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AECMCBAHALK_CTOR_OFFSET))(this);
		}

		::AECMCBAHALK* HEPPBBLLBPN()
		{
			return ((::AECMCBAHALK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AECMCBAHALK_HEPPBBLLBPN_OFFSET))(this);
		}

		::System::Void BNEOJLLDFJP(::CILNKGMHIIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CILNKGMHIIE*))((::PBYTE)hIl2Cpp + AECMCBAHALK_BNEOJLLDFJP_OFFSET))(this, a1);
		}

	};
