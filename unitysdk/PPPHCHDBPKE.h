#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCEFOPHMAGJ.h"
#include "unitysdk/System/Object.h"

class GJJLBGAOKBE;
class IHNJCJPPBIH;
namespace System::IO { class Stream; }

#define PPPHCHDBPKE_BPDMCMCNOBO_OFFSET UNITYSDK_OFFSET(0x1F1A7640)
#define PPPHCHDBPKE_CFILNPBLJLK_OFFSET UNITYSDK_OFFSET(0x1F1A7700)
#define PPPHCHDBPKE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F1A7540)
#define PPPHCHDBPKE_EILOEKMDKJC_OFFSET UNITYSDK_OFFSET(0x1F1A74E0)
#define PPPHCHDBPKE_HNHNINOGOFM_OFFSET UNITYSDK_OFFSET(0x1F1A76E0)
#define PPPHCHDBPKE_IJHPHJKPFPJ_OFFSET UNITYSDK_OFFSET(0x1F1A7630)
#define PPPHCHDBPKE_LNHONFPLKFH_OFFSET UNITYSDK_OFFSET(0x1F1A7580)
#define PPPHCHDBPKE_NFICPJLDBJO_OFFSET UNITYSDK_OFFSET(0x1F1A7590)
#define PPPHCHDBPKE_NGCBIMKHIJG_OFFSET UNITYSDK_OFFSET(0x1F1A76F0)
#define PPPHCHDBPKE_NKGPBFPAJGC_OFFSET UNITYSDK_OFFSET(0x1F194120)
#define PPPHCHDBPKE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1F1A75E0)
#define PPPHCHDBPKE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F1A72D0)
#define PPPHCHDBPKE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F1A73F0)
#define PPPHCHDBPKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1A7280)

inline static constexpr unsigned int PPPHCHDBPKE_TypeDefinitionIndex = 18278;

class PPPHCHDBPKE : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* GHGCJODDJAG; // 0x10
	::BCEFOPHMAGJ JKBLDFBGBPK; // 0x18
	::Il2CppArray<::System::Byte>* PMAMMGFJAJL; // 0xA0
	::System::IO::Stream* HLFFCMIFFIB; // 0xA8
	::System::Boolean AAPMOKNMNAN; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPHCHDBPKE__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Il2CppArray<::System::Byte>* PMAMMGFJAJL)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PPPHCHDBPKE__CTOR_1_OFFSET))(this, PMAMMGFJAJL);
	}

	::System::Void _ctor_2(::System::IO::Stream* HLFFCMIFFIB, ::Il2CppArray<::System::Byte>* PMAMMGFJAJL, ::System::Int32 DGLPLIAMNIA, ::System::Int32 ALLACGIFBHE, ::System::Boolean AAPMOKNMNAN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PPPHCHDBPKE__CTOR_2_OFFSET))(this, HLFFCMIFFIB, PMAMMGFJAJL, DGLPLIAMNIA, ALLACGIFBHE, AAPMOKNMNAN);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPHCHDBPKE_DISPOSE_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* EILOEKMDKJC()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPHCHDBPKE_EILOEKMDKJC_OFFSET))(this);
	}

	::System::Void NKGPBFPAJGC(::IHNJCJPPBIH* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::IHNJCJPPBIH*))((::PBYTE)hIl2Cpp + PPPHCHDBPKE_NKGPBFPAJGC_OFFSET))(this, NAPFALLANDL);
	}

	::System::IO::Stream* LNHONFPLKFH()
	{
		return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPHCHDBPKE_LNHONFPLKFH_OFFSET))(this);
	}

	::System::Void NFICPJLDBJO(::Il2CppArray<::System::Byte>* PMAMMGFJAJL, ::System::Int32 BOGPAHGJOJK, ::System::Int32 KMKBJKOEBMF)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PPPHCHDBPKE_NFICPJLDBJO_OFFSET))(this, PMAMMGFJAJL, BOGPAHGJOJK, KMKBJKOEBMF);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPHCHDBPKE_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void IJHPHJKPFPJ(::GJJLBGAOKBE* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GJJLBGAOKBE*))((::PBYTE)hIl2Cpp + PPPHCHDBPKE_IJHPHJKPFPJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BPDMCMCNOBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPHCHDBPKE_BPDMCMCNOBO_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* HNHNINOGOFM()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPHCHDBPKE_HNHNINOGOFM_OFFSET))(this);
	}

	::System::Void NGCBIMKHIJG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PPPHCHDBPKE_NGCBIMKHIJG_OFFSET))(this, EGEGIMGMJHN);
	}

	::BCEFOPHMAGJ& CFILNPBLJLK()
	{
		return ((::BCEFOPHMAGJ&(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPHCHDBPKE_CFILNPBLJLK_OFFSET))(this);
	}
};
