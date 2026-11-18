#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBEFPMNAOHO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LFMPDEGEGDH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CNFJCMDLLAJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A589B70)
#define CNFJCMDLLAJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A589930)
#define CNFJCMDLLAJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A589AB0)
#define CNFJCMDLLAJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A589C50)
#define CNFJCMDLLAJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A589940)
#define CNFJCMDLLAJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A589D90)
#define CNFJCMDLLAJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A589FA0)
#define CNFJCMDLLAJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A589580)
#define CNFJCMDLLAJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A589F80)
#define CNFJCMDLLAJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A589560)
#define CNFJCMDLLAJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A589840)
#define CNFJCMDLLAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A589D80)

inline static constexpr unsigned int CNFJCMDLLAJ_TypeDefinitionIndex = 14843;

class CNFJCMDLLAJ : public ::System::Object
{
public:
	::KBEFPMNAOHO DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::LFMPDEGEGDH*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFJCMDLLAJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFJCMDLLAJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFJCMDLLAJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CNFJCMDLLAJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CNFJCMDLLAJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFJCMDLLAJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFJCMDLLAJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFJCMDLLAJ_FINALIZE_OFFSET))(this);
	}

	::LFMPDEGEGDH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LFMPDEGEGDH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CNFJCMDLLAJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFJCMDLLAJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFJCMDLLAJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CNFJCMDLLAJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
