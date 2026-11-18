#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PACNFFPPCKE.h"
#include "unitysdk/System/Object.h"

class JBOPFEKKHBB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EPLANNLALNN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17453DE0)
#define EPLANNLALNN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17453BA0)
#define EPLANNLALNN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17453D20)
#define EPLANNLALNN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17453EC0)
#define EPLANNLALNN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17453BB0)
#define EPLANNLALNN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17454060)
#define EPLANNLALNN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17454290)
#define EPLANNLALNN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x174537F0)
#define EPLANNLALNN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17454040)
#define EPLANNLALNN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x174537D0)
#define EPLANNLALNN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17453AB0)
#define EPLANNLALNN__CTOR_OFFSET UNITYSDK_OFFSET(0x17453FF0)

inline static constexpr unsigned int EPLANNLALNN_TypeDefinitionIndex = 9647;

class EPLANNLALNN : public ::System::Object
{
public:
	::Il2CppArray<::JBOPFEKKHBB*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::PACNFFPPCKE DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLANNLALNN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLANNLALNN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLANNLALNN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EPLANNLALNN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EPLANNLALNN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLANNLALNN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLANNLALNN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLANNLALNN_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLANNLALNN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLANNLALNN_NAMKJOJBAOA_OFFSET))(this);
	}

	::JBOPFEKKHBB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JBOPFEKKHBB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPLANNLALNN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPLANNLALNN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
