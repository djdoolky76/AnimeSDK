#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/NPBFPCGKCOG.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T> class DFDEIDBBGHG_1;

#define KNBPBKLLMNG_AAONANKIMAG_OFFSET UNITYSDK_OFFSET(0x1269D8C0)
#define KNBPBKLLMNG_BBDMBBPJEIF_OFFSET UNITYSDK_OFFSET(0x1269E640)
#define KNBPBKLLMNG_CKKEANMAKJG_OFFSET UNITYSDK_OFFSET(0x1269DB00)
#define KNBPBKLLMNG_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x1269E5A0)
#define KNBPBKLLMNG_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x1269D830)
#define KNBPBKLLMNG_FKDDPODDJLD_OFFSET UNITYSDK_OFFSET(0x1269E540)
#define KNBPBKLLMNG_IFJFJHPBCJF_OFFSET UNITYSDK_OFFSET(0x1269E2C0)
#define KNBPBKLLMNG_IIEPIIDOFJI_OFFSET UNITYSDK_OFFSET(0x1269E550)
#define KNBPBKLLMNG_NPGLLFFKKCG_OFFSET UNITYSDK_OFFSET(0x1269E630)
#define KNBPBKLLMNG_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1269D7A0)
#define KNBPBKLLMNG_ONSTART_OFFSET UNITYSDK_OFFSET(0x1269D760)
#define KNBPBKLLMNG_PEIJBPFFFAI_OFFSET UNITYSDK_OFFSET(0x1269E820)
#define KNBPBKLLMNG_PPHLGILPKCF_OFFSET UNITYSDK_OFFSET(0x1269E260)
#define KNBPBKLLMNG__CTOR_OFFSET UNITYSDK_OFFSET(0x1269D7E0)

inline static constexpr unsigned int KNBPBKLLMNG_TypeDefinitionIndex = 47031;

class KNBPBKLLMNG : public ::JGELKBLKFHE
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* JFAJLLDOBLK; // 0x18
	::System::Int32 EFPAOCLDBGK; // 0x20
	::System::Boolean FNODDFCMAGB; // 0x24
	::System::Byte _padding0[0x3];
	::NPBFPCGKCOG ENKAGLMGIMF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBPBKLLMNG__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBPBKLLMNG_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBPBKLLMNG_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBPBKLLMNG_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Void AAONANKIMAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBPBKLLMNG_AAONANKIMAG_OFFSET))(this);
	}

	::System::Void CKKEANMAKJG(::System::Action* EJGDHCIBCJH, ::System::Boolean NNCFIEJBKEF, ::System::Boolean HHFKNDMLCIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KNBPBKLLMNG_CKKEANMAKJG_OFFSET))(this, EJGDHCIBCJH, NNCFIEJBKEF, HHFKNDMLCIE);
	}

	::System::Void PPHLGILPKCF(::NPBFPCGKCOG FCPCLIJNDLA, ::System::Boolean POJEDACFDOF)
	{
		return ((::System::Void(*)(::PVOID, ::NPBFPCGKCOG, ::System::Boolean))((::PBYTE)hIl2Cpp + KNBPBKLLMNG_PPHLGILPKCF_OFFSET))(this, FCPCLIJNDLA, POJEDACFDOF);
	}

	::System::Void IFJFJHPBCJF(::System::Int32 LEHABHCOMGH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNBPBKLLMNG_IFJFJHPBCJF_OFFSET))(this, LEHABHCOMGH);
	}

	::System::Int32 FKDDPODDJLD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBPBKLLMNG_FKDDPODDJLD_OFFSET))(this);
	}

	::System::Void IIEPIIDOFJI(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNBPBKLLMNG_IIEPIIDOFJI_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBPBKLLMNG_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void NPGLLFFKKCG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNBPBKLLMNG_NPGLLFFKKCG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BBDMBBPJEIF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBPBKLLMNG_BBDMBBPJEIF_OFFSET))(this);
	}

	::System::Void PEIJBPFFFAI(::DFDEIDBBGHG_1<::System::UInt32>* CBENGCCGOGA)
	{
		return ((::System::Void(*)(::PVOID, ::DFDEIDBBGHG_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KNBPBKLLMNG_PEIJBPFFFAI_OFFSET))(this, CBENGCCGOGA);
	}
};
