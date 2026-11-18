#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANGABJDMAPP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GIPMMANEDDK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DBEPEMBEBON_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19AD3E40)
#define DBEPEMBEBON_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19AD3C00)
#define DBEPEMBEBON_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19AD3D80)
#define DBEPEMBEBON_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19AD3F20)
#define DBEPEMBEBON_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19AD3C10)
#define DBEPEMBEBON_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19AD4290)
#define DBEPEMBEBON_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19AD40A0)
#define DBEPEMBEBON_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19AD3850)
#define DBEPEMBEBON_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19AD4270)
#define DBEPEMBEBON_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19AD3830)
#define DBEPEMBEBON_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19AD3B10)
#define DBEPEMBEBON__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD4050)

inline static constexpr unsigned int DBEPEMBEBON_TypeDefinitionIndex = 9676;

class DBEPEMBEBON : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::Il2CppArray<::GIPMMANEDDK*>* OJMBOGGMIKO; // 0x28
	::ANGABJDMAPP DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEPEMBEBON__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEPEMBEBON_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEPEMBEBON_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DBEPEMBEBON_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DBEPEMBEBON_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEPEMBEBON_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEPEMBEBON_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEPEMBEBON_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DBEPEMBEBON_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEPEMBEBON_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEPEMBEBON_CHLEALKAOJO_OFFSET))(this);
	}

	::GIPMMANEDDK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GIPMMANEDDK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DBEPEMBEBON_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
