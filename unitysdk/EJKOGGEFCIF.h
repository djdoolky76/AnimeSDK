#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIBANKBACNG.h"
#include "unitysdk/System/Object.h"
class EJKOGGEFCIF;
class FCOEMCEDLNL;
class FHJKNCMMMON;

#define EJKOGGEFCIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F11BCE0)
#define EJKOGGEFCIF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F11BAD0)

inline static constexpr unsigned int EJKOGGEFCIF_TypeDefinitionIndex = 12039;

	class EJKOGGEFCIF : public ::System::Object
	{
	public:
		::Il2CppArray<::FHJKNCMMMON*>* DIIINDCGMBE; // 0x10
		::System::UInt32 GMFGFLLHPJJ; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x1C
		::System::UInt32 NJMFEDCACPC; // 0x20
		::DIBANKBACNG EMCCLPLCOKG; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKOGGEFCIF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EJKOGGEFCIF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EJKOGGEFCIF*))((::PBYTE)hIl2Cpp + EJKOGGEFCIF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
