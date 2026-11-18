#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFMEJOMDNKB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IOEPBBAGEAA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LAFIHCAHCPB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BB08B80)
#define LAFIHCAHCPB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BB08900)
#define LAFIHCAHCPB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BB08910)
#define LAFIHCAHCPB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BB089D0)
#define LAFIHCAHCPB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BB08B00)
#define LAFIHCAHCPB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BB08CB0)
#define LAFIHCAHCPB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BB08F00)
#define LAFIHCAHCPB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BB08550)
#define LAFIHCAHCPB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BB08EE0)
#define LAFIHCAHCPB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BB08530)
#define LAFIHCAHCPB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BB08810)
#define LAFIHCAHCPB__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB08C60)

inline static constexpr unsigned int LAFIHCAHCPB_TypeDefinitionIndex = 15493;

class LAFIHCAHCPB : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::Il2CppArray<::IOEPBBAGEAA*>* OJMBOGGMIKO; // 0x28
	::DFMEJOMDNKB DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFIHCAHCPB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFIHCAHCPB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFIHCAHCPB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFIHCAHCPB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFIHCAHCPB_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LAFIHCAHCPB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LAFIHCAHCPB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFIHCAHCPB_BHLAEBMEOLO_OFFSET))(this);
	}

	::IOEPBBAGEAA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IOEPBBAGEAA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LAFIHCAHCPB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LAFIHCAHCPB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFIHCAHCPB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFIHCAHCPB_NAMKJOJBAOA_OFFSET))(this);
	}
};
