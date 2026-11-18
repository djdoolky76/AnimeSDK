#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"

class MEJJOLJABBP;
namespace System { class Action; }

#define BJDJKGNEDBL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1856E9B0)
#define BJDJKGNEDBL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1856EA00)
#define BJDJKGNEDBL_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1856ED50)
#define BJDJKGNEDBL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1856EF90)
#define BJDJKGNEDBL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1856EB10)
#define BJDJKGNEDBL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1856E720)
#define BJDJKGNEDBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1856EAC0)

inline static constexpr unsigned int BJDJKGNEDBL_TypeDefinitionIndex = 77028;

class BJDJKGNEDBL
{
public:
	::System::Action* PLDOELOOFLL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDJKGNEDBL__CTOR_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDJKGNEDBL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BJDJKGNEDBL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BJDJKGNEDBL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BJDJKGNEDBL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::MEJJOLJABBP* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::MEJJOLJABBP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BJDJKGNEDBL_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::MEJJOLJABBP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MEJJOLJABBP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BJDJKGNEDBL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
