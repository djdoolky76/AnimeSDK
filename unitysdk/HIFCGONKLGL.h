#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MKMGAOGHHAC.h"
#include "unitysdk/System/Object.h"

class JENKLBEIOKJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HIFCGONKLGL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A4F0800)
#define HIFCGONKLGL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A4F05C0)
#define HIFCGONKLGL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A4F0740)
#define HIFCGONKLGL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A4F08E0)
#define HIFCGONKLGL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A4F05D0)
#define HIFCGONKLGL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A4F0C50)
#define HIFCGONKLGL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A4F0A60)
#define HIFCGONKLGL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A4F0210)
#define HIFCGONKLGL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A4F0C30)
#define HIFCGONKLGL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A4F01F0)
#define HIFCGONKLGL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A4F04D0)
#define HIFCGONKLGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F0A10)

inline static constexpr unsigned int HIFCGONKLGL_TypeDefinitionIndex = 9597;

class HIFCGONKLGL : public ::System::Object
{
public:
	::Il2CppArray<::JENKLBEIOKJ*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::MKMGAOGHHAC DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFCGONKLGL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFCGONKLGL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFCGONKLGL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HIFCGONKLGL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HIFCGONKLGL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFCGONKLGL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFCGONKLGL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFCGONKLGL_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HIFCGONKLGL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFCGONKLGL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFCGONKLGL_NAMKJOJBAOA_OFFSET))(this);
	}

	::JENKLBEIOKJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JENKLBEIOKJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIFCGONKLGL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
