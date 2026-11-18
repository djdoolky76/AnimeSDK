#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OFLDCLHLHKP.h"
#include "unitysdk/System/Object.h"

class HCLNCEAEHMH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BAOHKKNBBEL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19AC1E00)
#define BAOHKKNBBEL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19AC1BC0)
#define BAOHKKNBBEL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19AC1D40)
#define BAOHKKNBBEL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19AC1EE0)
#define BAOHKKNBBEL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19AC1BD0)
#define BAOHKKNBBEL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19AC2020)
#define BAOHKKNBBEL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19AC2230)
#define BAOHKKNBBEL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19AC1810)
#define BAOHKKNBBEL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19AC2210)
#define BAOHKKNBBEL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19AC17F0)
#define BAOHKKNBBEL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19AC1AD0)
#define BAOHKKNBBEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC2010)

inline static constexpr unsigned int BAOHKKNBBEL_TypeDefinitionIndex = 16207;

class BAOHKKNBBEL : public ::System::Object
{
public:
	::OFLDCLHLHKP DHDJDGFNBOA; // 0x10
	::Il2CppArray<::HCLNCEAEHMH*>* OJMBOGGMIKO; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOHKKNBBEL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOHKKNBBEL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOHKKNBBEL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BAOHKKNBBEL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BAOHKKNBBEL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOHKKNBBEL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOHKKNBBEL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOHKKNBBEL_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOHKKNBBEL_CHLEALKAOJO_OFFSET))(this);
	}

	::HCLNCEAEHMH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HCLNCEAEHMH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BAOHKKNBBEL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BAOHKKNBBEL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAOHKKNBBEL_NAMKJOJBAOA_OFFSET))(this);
	}
};
