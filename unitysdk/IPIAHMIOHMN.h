#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDCDKHALPDP;
class LAECFLNNOFH;

#define IPIAHMIOHMN_CTOR_OFFSET UNITYSDK_OFFSET(0x19300760)
#define IPIAHMIOHMN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x193009D0)
#define IPIAHMIOHMN_GGDPFJHFPKE_OFFSET UNITYSDK_OFFSET(0x19300D30)
#define IPIAHMIOHMN_KJJKAHIIAHO_OFFSET UNITYSDK_OFFSET(0x19300770)
#define IPIAHMIOHMN_NDOEBAFGOEK_OFFSET UNITYSDK_OFFSET(0x19300B40)

inline static constexpr unsigned int IPIAHMIOHMN_TypeDefinitionIndex = 79649;

	class IPIAHMIOHMN : public ::System::Object
	{
	public:
		::LAECFLNNOFH* FKINCGODJEP; // 0x10
		::DDCDKHALPDP* PDENFEFCAGN; // 0x18
		::System::Single BNBJFLMCFII; // 0x20
		::System::Int32 KCFDGCGIMCE; // 0x24
		::System::Single OOBNLIIGFLA; // 0x28
		::System::Boolean DNMEALHNIKO; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Int32 MGBEAJHOBFJ; // 0x30
		::System::Single EHHMAOAHGFJ; // 0x34
		::System::Int32 NIAMNKNDNNI; // 0x38
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
