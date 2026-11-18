#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBGINEHBPP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NBNAEBIPLAO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NLCHMIAEBEP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DC6E60)
#define NLCHMIAEBEP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DC6C30)
#define NLCHMIAEBEP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DC6DA0)
#define NLCHMIAEBEP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DC6F40)
#define NLCHMIAEBEP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DC6C40)
#define NLCHMIAEBEP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19DC72B0)
#define NLCHMIAEBEP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DC70E0)
#define NLCHMIAEBEP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DC6890)
#define NLCHMIAEBEP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19DC70C0)
#define NLCHMIAEBEP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DC6870)
#define NLCHMIAEBEP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DC6B50)
#define NLCHMIAEBEP__CTOR_OFFSET UNITYSDK_OFFSET(0x19DC7070)

inline static constexpr unsigned int NLCHMIAEBEP_TypeDefinitionIndex = 9403;

class NLCHMIAEBEP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::NBNAEBIPLAO*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::GIBGINEHBPP DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCHMIAEBEP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCHMIAEBEP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCHMIAEBEP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NLCHMIAEBEP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NLCHMIAEBEP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCHMIAEBEP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCHMIAEBEP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCHMIAEBEP_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCHMIAEBEP_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCHMIAEBEP_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NLCHMIAEBEP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::NBNAEBIPLAO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NBNAEBIPLAO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NLCHMIAEBEP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
