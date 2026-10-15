#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIBANKBACNG.h"
#include "unitysdk/System/Object.h"
class EJKOGGEFCIF;
class FCOEMCEDLNL;
class FHJKNCMMMON;

#define EJKOGGEFCIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD62F00)
#define EJKOGGEFCIF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD62CF0)

inline static constexpr unsigned int EJKOGGEFCIF_TypeDefinitionIndex = 11982;

	class EJKOGGEFCIF : public ::System::Object
	{
	public:
		::Il2CppArray<::FHJKNCMMMON*>* DIIINDCGMBE; // 0x10
		::System::UInt32 NJMFEDCACPC; // 0x18
		::DIBANKBACNG EMCCLPLCOKG; // 0x1C
		::System::UInt32 PHFMCACHFIJ; // 0x20
		::System::UInt32 GMFGFLLHPJJ; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKOGGEFCIF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EJKOGGEFCIF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EJKOGGEFCIF*))((::PBYTE)hIl2Cpp + EJKOGGEFCIF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
