#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBEHJIJMPIP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NILGNGDBENM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HEHDANADBBK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x152D8650)
#define HEHDANADBBK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x152D8410)
#define HEHDANADBBK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x152D8590)
#define HEHDANADBBK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x152D8730)
#define HEHDANADBBK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x152D8420)
#define HEHDANADBBK_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x152D8AB0)
#define HEHDANADBBK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x152D88B0)
#define HEHDANADBBK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x152D8060)
#define HEHDANADBBK_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x152D8A90)
#define HEHDANADBBK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x152D8040)
#define HEHDANADBBK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x152D8320)
#define HEHDANADBBK__CTOR_OFFSET UNITYSDK_OFFSET(0x152D8860)

inline static constexpr unsigned int HEHDANADBBK_TypeDefinitionIndex = 17405;

class HEHDANADBBK : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::NILGNGDBENM*>* OJMBOGGMIKO; // 0x18
	::HBEHJIJMPIP DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHDANADBBK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHDANADBBK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHDANADBBK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HEHDANADBBK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HEHDANADBBK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHDANADBBK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHDANADBBK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHDANADBBK_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HEHDANADBBK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHDANADBBK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHDANADBBK_NAMKJOJBAOA_OFFSET))(this);
	}

	::NILGNGDBENM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NILGNGDBENM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEHDANADBBK_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
