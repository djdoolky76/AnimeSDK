#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCFJICFNDDJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KCCCDFPGMAF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DLLIBDMJPLI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1879F3F0)
#define DLLIBDMJPLI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1879F1B0)
#define DLLIBDMJPLI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1879F330)
#define DLLIBDMJPLI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1879F4D0)
#define DLLIBDMJPLI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1879F1C0)
#define DLLIBDMJPLI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1879F670)
#define DLLIBDMJPLI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1879F8A0)
#define DLLIBDMJPLI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1879EE00)
#define DLLIBDMJPLI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1879F650)
#define DLLIBDMJPLI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1879EDE0)
#define DLLIBDMJPLI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1879F0C0)
#define DLLIBDMJPLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1879F600)

inline static constexpr unsigned int DLLIBDMJPLI_TypeDefinitionIndex = 11608;

class DLLIBDMJPLI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::KCCCDFPGMAF*>* OJMBOGGMIKO; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::HCFJICFNDDJ DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLIBDMJPLI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLIBDMJPLI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLIBDMJPLI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DLLIBDMJPLI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DLLIBDMJPLI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLIBDMJPLI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLIBDMJPLI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLIBDMJPLI_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLIBDMJPLI_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLIBDMJPLI_NAMKJOJBAOA_OFFSET))(this);
	}

	::KCCCDFPGMAF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KCCCDFPGMAF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DLLIBDMJPLI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DLLIBDMJPLI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
