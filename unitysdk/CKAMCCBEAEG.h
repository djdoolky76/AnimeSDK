#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGFBBCJLJFK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GDJCCGCLNOG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CKAMCCBEAEG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19BF65A0)
#define CKAMCCBEAEG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19BF6320)
#define CKAMCCBEAEG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19BF6330)
#define CKAMCCBEAEG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19BF63F0)
#define CKAMCCBEAEG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19BF6520)
#define CKAMCCBEAEG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19BF6980)
#define CKAMCCBEAEG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19BF66D0)
#define CKAMCCBEAEG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19BF5F80)
#define CKAMCCBEAEG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19BF6BD0)
#define CKAMCCBEAEG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19BF5F60)
#define CKAMCCBEAEG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19BF6240)
#define CKAMCCBEAEG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF6680)

inline static constexpr unsigned int CKAMCCBEAEG_TypeDefinitionIndex = 16086;

class CKAMCCBEAEG : public ::System::Object
{
public:
	::AGFBBCJLJFK DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::GDJCCGCLNOG*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAMCCBEAEG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAMCCBEAEG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAMCCBEAEG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAMCCBEAEG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAMCCBEAEG_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CKAMCCBEAEG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CKAMCCBEAEG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAMCCBEAEG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CKAMCCBEAEG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::GDJCCGCLNOG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GDJCCGCLNOG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKAMCCBEAEG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAMCCBEAEG_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAMCCBEAEG_CHLEALKAOJO_OFFSET))(this);
	}
};
