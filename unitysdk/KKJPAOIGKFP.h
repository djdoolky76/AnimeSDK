#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IBMHNLMPECJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ECLJMDNAIPP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KKJPAOIGKFP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BB049E0)
#define KKJPAOIGKFP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BB047A0)
#define KKJPAOIGKFP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BB04920)
#define KKJPAOIGKFP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BB04AC0)
#define KKJPAOIGKFP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BB047B0)
#define KKJPAOIGKFP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BB04E40)
#define KKJPAOIGKFP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BB04C60)
#define KKJPAOIGKFP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BB043F0)
#define KKJPAOIGKFP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BB04C40)
#define KKJPAOIGKFP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BB043D0)
#define KKJPAOIGKFP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BB046B0)
#define KKJPAOIGKFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB04BF0)

inline static constexpr unsigned int KKJPAOIGKFP_TypeDefinitionIndex = 10659;

class KKJPAOIGKFP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::IBMHNLMPECJ DHDJDGFNBOA; // 0x28
	::Il2CppArray<::ECLJMDNAIPP*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJPAOIGKFP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJPAOIGKFP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJPAOIGKFP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KKJPAOIGKFP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KKJPAOIGKFP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJPAOIGKFP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJPAOIGKFP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJPAOIGKFP_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJPAOIGKFP_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KKJPAOIGKFP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::ECLJMDNAIPP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ECLJMDNAIPP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KKJPAOIGKFP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJPAOIGKFP_CHLEALKAOJO_OFFSET))(this);
	}
};
