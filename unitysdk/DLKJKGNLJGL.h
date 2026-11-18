#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LEDIHIOPFOE.h"
#include "unitysdk/System/Object.h"

class MAMNFBBBDND;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DLKJKGNLJGL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1879E760)
#define DLKJKGNLJGL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1879E520)
#define DLKJKGNLJGL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1879E6A0)
#define DLKJKGNLJGL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1879E840)
#define DLKJKGNLJGL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1879E530)
#define DLKJKGNLJGL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1879E9C0)
#define DLKJKGNLJGL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1879EC10)
#define DLKJKGNLJGL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1879E170)
#define DLKJKGNLJGL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1879EBF0)
#define DLKJKGNLJGL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1879E150)
#define DLKJKGNLJGL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1879E430)
#define DLKJKGNLJGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1879E970)

inline static constexpr unsigned int DLKJKGNLJGL_TypeDefinitionIndex = 10373;

class DLKJKGNLJGL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::LEDIHIOPFOE DHDJDGFNBOA; // 0x28
	::Il2CppArray<::MAMNFBBBDND*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKJKGNLJGL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKJKGNLJGL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKJKGNLJGL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DLKJKGNLJGL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DLKJKGNLJGL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKJKGNLJGL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKJKGNLJGL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKJKGNLJGL_FINALIZE_OFFSET))(this);
	}

	::MAMNFBBBDND* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MAMNFBBBDND*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DLKJKGNLJGL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKJKGNLJGL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DLKJKGNLJGL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKJKGNLJGL_NAMKJOJBAOA_OFFSET))(this);
	}
};
