#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDCDKHALPDP;
class LAECFLNNOFH;

#define IPIAHMIOHMN_CTOR_OFFSET UNITYSDK_OFFSET(0xB855DE0)
#define IPIAHMIOHMN_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB856050)
#define IPIAHMIOHMN_GGDPFJHFPKE_OFFSET UNITYSDK_OFFSET(0xB8563B0)
#define IPIAHMIOHMN_KJJKAHIIAHO_OFFSET UNITYSDK_OFFSET(0xB855DF0)
#define IPIAHMIOHMN_NDOEBAFGOEK_OFFSET UNITYSDK_OFFSET(0xB8561C0)

inline static constexpr unsigned int IPIAHMIOHMN_TypeDefinitionIndex = 79650;

	class IPIAHMIOHMN : public ::System::Object
	{
	public:
		::LAECFLNNOFH* FKINCGODJEP; // 0x10
		::DDCDKHALPDP* PDENFEFCAGN; // 0x18
		::System::Int32 KCFDGCGIMCE; // 0x20
		::System::Single BNBJFLMCFII; // 0x24
		::System::Int32 NIAMNKNDNNI; // 0x28
		::System::Single EHHMAOAHGFJ; // 0x2C
		::System::Single OOBNLIIGFLA; // 0x30
		::System::Int32 MGBEAJHOBFJ; // 0x34
		::System::Boolean DNMEALHNIKO; // 0x38
		::System::Void _ctor(::LAECFLNNOFH* a1, ::DDCDKHALPDP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LAECFLNNOFH*, ::DDCDKHALPDP*))((::PBYTE)hIl2Cpp + IPIAHMIOHMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIAHMIOHMN_EXECUTE_OFFSET))(this);
		}

		::System::Boolean NDOEBAFGOEK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIAHMIOHMN_NDOEBAFGOEK_OFFSET))(this);
		}

		::System::Void GGDPFJHFPKE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IPIAHMIOHMN_GGDPFJHFPKE_OFFSET))(this, a1);
		}

		::System::Void KJJKAHIIAHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIAHMIOHMN_KJJKAHIIAHO_OFFSET))(this);
		}

	};
