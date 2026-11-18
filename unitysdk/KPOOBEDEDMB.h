#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CPOHJBACHEM;
class KPOOBEDEDMB_IAPDGKCPKEO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPOOBEDEDMB_IMKMJEGFJHF_OFFSET UNITYSDK_OFFSET(0x1A2E6290)
#define KPOOBEDEDMB_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x1A2E65A0)
#define KPOOBEDEDMB_PIOFEOLFMAD_OFFSET UNITYSDK_OFFSET(0x1A2E61C0)
#define KPOOBEDEDMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E6050)

inline static constexpr unsigned int KPOOBEDEDMB_TypeDefinitionIndex = 66376;

class KPOOBEDEDMB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* HCKJDPEPGHE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* JOBKMGDCPMM; // 0x18
	::System::UInt32 DMJIGNEPGML; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOOBEDEDMB__CTOR_OFFSET))(this);
	}

	::KPOOBEDEDMB_IAPDGKCPKEO* PIOFEOLFMAD()
	{
		return ((::KPOOBEDEDMB_IAPDGKCPKEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOOBEDEDMB_PIOFEOLFMAD_OFFSET))(this);
	}

	::CPOHJBACHEM* IMKMJEGFJHF()
	{
		return ((::CPOHJBACHEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOOBEDEDMB_IMKMJEGFJHF_OFFSET))(this);
	}

	::System::Void JLIMOLHLFAK(::KPOOBEDEDMB_IAPDGKCPKEO* GENNIFDPOAM)
	{
		return ((::System::Void(*)(::PVOID, ::KPOOBEDEDMB_IAPDGKCPKEO*))((::PBYTE)hIl2Cpp + KPOOBEDEDMB_JLIMOLHLFAK_OFFSET))(this, GENNIFDPOAM);
	}
};
