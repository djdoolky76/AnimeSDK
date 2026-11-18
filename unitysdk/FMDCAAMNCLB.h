#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FECPHHDBIBP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ADENOECIHHC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FMDCAAMNCLB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1ADE7FD0)
#define FMDCAAMNCLB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1ADE7D90)
#define FMDCAAMNCLB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1ADE7F10)
#define FMDCAAMNCLB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ADE80B0)
#define FMDCAAMNCLB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1ADE7DA0)
#define FMDCAAMNCLB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1ADE8250)
#define FMDCAAMNCLB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1ADE8480)
#define FMDCAAMNCLB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1ADE79E0)
#define FMDCAAMNCLB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1ADE8230)
#define FMDCAAMNCLB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1ADE79C0)
#define FMDCAAMNCLB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ADE7CA0)
#define FMDCAAMNCLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADE81E0)

inline static constexpr unsigned int FMDCAAMNCLB_TypeDefinitionIndex = 16842;

class FMDCAAMNCLB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::ADENOECIHHC*>* OJMBOGGMIKO; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::FECPHHDBIBP DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDCAAMNCLB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDCAAMNCLB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDCAAMNCLB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FMDCAAMNCLB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FMDCAAMNCLB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDCAAMNCLB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDCAAMNCLB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDCAAMNCLB_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDCAAMNCLB_NAMKJOJBAOA_OFFSET))(this);
	}

	::ADENOECIHHC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ADENOECIHHC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FMDCAAMNCLB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FMDCAAMNCLB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDCAAMNCLB_CHLEALKAOJO_OFFSET))(this);
	}
};
