#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OKNJLJLDCIP.h"
#include "unitysdk/System/Object.h"

class KOKGNJDOKIE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LJHAMNAGJJB_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x156626B0)
#define LJHAMNAGJJB_POLISH_OFFSET UNITYSDK_OFFSET(0x15662430)
#define LJHAMNAGJJB_RECYCLE_OFFSET UNITYSDK_OFFSET(0x15662570)
#define LJHAMNAGJJB__CTOR_OFFSET UNITYSDK_OFFSET(0x156626A0)

inline static constexpr unsigned int LJHAMNAGJJB_TypeDefinitionIndex = 42416;

class LJHAMNAGJJB : public ::System::Object
{
public:
	::KOKGNJDOKIE* JECNMEDANBB; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* NFPNCEOHBDL; // 0x18
	::System::Boolean MJAIAIPAEFE; // 0x20
	::System::Boolean DKOMFDGECAJ; // 0x21
	::System::Boolean MBAGMNPHLMN; // 0x22
	::System::Boolean OLAFDMNLKJL; // 0x23
	::System::UInt32 LDJKLFLLGPA; // 0x24
	::System::Single HICPMMKCNNE; // 0x28
	::System::UInt32 GDJOBLJAGDH; // 0x2C
	::System::UInt32 GFOPLDDFDIA; // 0x30
	::OKNJLJLDCIP KKMENMCMMBN; // 0x34
	::System::UInt32 ELNEEALLBGO; // 0x38
	::System::Int32 BIAPKMFHAMF; // 0x3C
	::System::Single PCMGJLCMCHI; // 0x40
	::System::UInt32 KKCKOANMOLA; // 0x44
	::System::Int32 DKOFFFNEFJC; // 0x48
	::System::Single GEEHJDPHKHC; // 0x4C
	::System::Single JJDNHBGLLCA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHAMNAGJJB__CTOR_OFFSET))(this);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHAMNAGJJB_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHAMNAGJJB_RECYCLE_OFFSET))(this);
	}

	static ::LJHAMNAGJJB* COKNIICCODC()
	{
		return ((::LJHAMNAGJJB*(*)())((::PBYTE)hIl2Cpp + LJHAMNAGJJB_COKNIICCODC_OFFSET))();
	}
};
