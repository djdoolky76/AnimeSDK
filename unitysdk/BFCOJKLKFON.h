#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PFIKKGKPOAA.h"
#include "unitysdk/System/Object.h"

class EACAAHHACNK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFCOJKLKFON_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17A7A060)
#define BFCOJKLKFON_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17A79E30)
#define BFCOJKLKFON_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17A79FA0)
#define BFCOJKLKFON_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17A7A140)
#define BFCOJKLKFON_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17A79E40)
#define BFCOJKLKFON_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17A7A280)
#define BFCOJKLKFON_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17A7A4A0)
#define BFCOJKLKFON_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17A79A90)
#define BFCOJKLKFON_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17A7A470)
#define BFCOJKLKFON_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17A79A70)
#define BFCOJKLKFON_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17A79D50)
#define BFCOJKLKFON__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7A270)

inline static constexpr unsigned int BFCOJKLKFON_TypeDefinitionIndex = 16954;

class BFCOJKLKFON : public ::System::Object
{
public:
	::PFIKKGKPOAA DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::EACAAHHACNK*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCOJKLKFON__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCOJKLKFON_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCOJKLKFON_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BFCOJKLKFON_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BFCOJKLKFON_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCOJKLKFON_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCOJKLKFON_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCOJKLKFON_FINALIZE_OFFSET))(this);
	}

	::EACAAHHACNK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EACAAHHACNK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BFCOJKLKFON_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BFCOJKLKFON_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCOJKLKFON_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCOJKLKFON_CHLEALKAOJO_OFFSET))(this);
	}
};
