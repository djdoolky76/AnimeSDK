#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

class INKIBAKJGBI;
class LDGHPCBNKMP;
class OLJDNGNGAJP;
namespace System { class Action; }

#define FFLFLOJMFHC_COMOAHHNBEN_OFFSET UNITYSDK_OFFSET(0xBB3F900)
#define FFLFLOJMFHC_DAFDNGNIMCC_OFFSET UNITYSDK_OFFSET(0xBB3FA70)
#define FFLFLOJMFHC_HCGPBCIFOBN_OFFSET UNITYSDK_OFFSET(0xBB3F7B0)
#define FFLFLOJMFHC_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0xBB3F4F0)
#define FFLFLOJMFHC_ONFGJEGFBCD_1_OFFSET UNITYSDK_OFFSET(0xBB3F950)
#define FFLFLOJMFHC_ONFGJEGFBCD_OFFSET UNITYSDK_OFFSET(0xBB3F5F0)
#define FFLFLOJMFHC_ONSTART_OFFSET UNITYSDK_OFFSET(0xBB3F3E0)
#define FFLFLOJMFHC__CTOR_OFFSET UNITYSDK_OFFSET(0xBB3F5E0)

inline static constexpr unsigned int FFLFLOJMFHC_TypeDefinitionIndex = 91505;

class FFLFLOJMFHC : public ::DJBPFFLIECG
{
public:
	::LDGHPCBNKMP* KBBNIDLDOEA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLFLOJMFHC__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLFLOJMFHC_ONSTART_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLFLOJMFHC_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void ONFGJEGFBCD(::System::Action* EJGDHCIBCJH, ::System::Action* IOLCMHKHKGH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + FFLFLOJMFHC_ONFGJEGFBCD_OFFSET))(this, EJGDHCIBCJH, IOLCMHKHKGH);
	}

	::System::Void HCGPBCIFOBN(::INKIBAKJGBI* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::INKIBAKJGBI*))((::PBYTE)hIl2Cpp + FFLFLOJMFHC_HCGPBCIFOBN_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void COMOAHHNBEN(::OLJDNGNGAJP* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OLJDNGNGAJP*))((::PBYTE)hIl2Cpp + FFLFLOJMFHC_COMOAHHNBEN_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void ONFGJEGFBCD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLFLOJMFHC_ONFGJEGFBCD_1_OFFSET))(this);
	}

	::System::Void DAFDNGNIMCC(::System::Int32 BMIHIOEKNAD, ::System::Int32 EHOFDPBELNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FFLFLOJMFHC_DAFDNGNIMCC_OFFSET))(this, BMIHIOEKNAD, EHOFDPBELNP);
	}
};
