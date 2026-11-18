#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDCFJKHBDIO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AKAFADEMEFN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GLBGLMNLLIJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1746A300)
#define GLBGLMNLLIJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1746A080)
#define GLBGLMNLLIJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1746A090)
#define GLBGLMNLLIJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1746A150)
#define GLBGLMNLLIJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1746A280)
#define GLBGLMNLLIJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1746A6E0)
#define GLBGLMNLLIJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1746A430)
#define GLBGLMNLLIJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17469CE0)
#define GLBGLMNLLIJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1746A910)
#define GLBGLMNLLIJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17469CC0)
#define GLBGLMNLLIJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17469FA0)
#define GLBGLMNLLIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1746A3E0)

inline static constexpr unsigned int GLBGLMNLLIJ_TypeDefinitionIndex = 11963;

class GLBGLMNLLIJ : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::GDCFJKHBDIO DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::AKAFADEMEFN*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBGLMNLLIJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBGLMNLLIJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBGLMNLLIJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBGLMNLLIJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBGLMNLLIJ_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GLBGLMNLLIJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GLBGLMNLLIJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBGLMNLLIJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GLBGLMNLLIJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBGLMNLLIJ_CHLEALKAOJO_OFFSET))(this);
	}

	::AKAFADEMEFN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::AKAFADEMEFN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GLBGLMNLLIJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBGLMNLLIJ_NAMKJOJBAOA_OFFSET))(this);
	}
};
