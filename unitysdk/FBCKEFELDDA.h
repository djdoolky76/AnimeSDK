#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFAEEJDDLII.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FFJIAHHPEFC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FBCKEFELDDA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x166321D0)
#define FBCKEFELDDA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x16631FA0)
#define FBCKEFELDDA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x16632110)
#define FBCKEFELDDA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x166322B0)
#define FBCKEFELDDA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x16631FB0)
#define FBCKEFELDDA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x16632430)
#define FBCKEFELDDA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x16632680)
#define FBCKEFELDDA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x16631C00)
#define FBCKEFELDDA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x16632660)
#define FBCKEFELDDA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x16631BE0)
#define FBCKEFELDDA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16631EC0)
#define FBCKEFELDDA__CTOR_OFFSET UNITYSDK_OFFSET(0x166323E0)

inline static constexpr unsigned int FBCKEFELDDA_TypeDefinitionIndex = 10879;

class FBCKEFELDDA : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::Il2CppArray<::FFJIAHHPEFC*>* OJMBOGGMIKO; // 0x28
	::DFAEEJDDLII DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCKEFELDDA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCKEFELDDA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCKEFELDDA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FBCKEFELDDA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FBCKEFELDDA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCKEFELDDA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCKEFELDDA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCKEFELDDA_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCKEFELDDA_CHLEALKAOJO_OFFSET))(this);
	}

	::FFJIAHHPEFC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FFJIAHHPEFC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBCKEFELDDA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCKEFELDDA_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FBCKEFELDDA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
