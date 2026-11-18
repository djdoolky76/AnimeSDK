#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OPKIPGHFDDA.h"
#include "unitysdk/System/Object.h"

class EJDMJHLMLHE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ILHLBAPNHNH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A4FD340)
#define ILHLBAPNHNH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A4FD110)
#define ILHLBAPNHNH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A4FD280)
#define ILHLBAPNHNH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A4FD420)
#define ILHLBAPNHNH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A4FD120)
#define ILHLBAPNHNH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A4FD5A0)
#define ILHLBAPNHNH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A4FD7F0)
#define ILHLBAPNHNH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A4FCD70)
#define ILHLBAPNHNH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A4FD7D0)
#define ILHLBAPNHNH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A4FCD50)
#define ILHLBAPNHNH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A4FD030)
#define ILHLBAPNHNH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4FD550)

inline static constexpr unsigned int ILHLBAPNHNH_TypeDefinitionIndex = 9144;

class ILHLBAPNHNH : public ::System::Object
{
public:
	::Il2CppArray<::EJDMJHLMLHE*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::OPKIPGHFDDA DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHLBAPNHNH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHLBAPNHNH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHLBAPNHNH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ILHLBAPNHNH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ILHLBAPNHNH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHLBAPNHNH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHLBAPNHNH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHLBAPNHNH_FINALIZE_OFFSET))(this);
	}

	::EJDMJHLMLHE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EJDMJHLMLHE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILHLBAPNHNH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHLBAPNHNH_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ILHLBAPNHNH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHLBAPNHNH_CHLEALKAOJO_OFFSET))(this);
	}
};
