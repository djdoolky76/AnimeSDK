#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LMHLANNFEHJ.h"
#include "unitysdk/System/Object.h"

class NPLECDKJONF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ABEGLJCDFMA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C500B20)
#define ABEGLJCDFMA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C5008F0)
#define ABEGLJCDFMA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C500A60)
#define ABEGLJCDFMA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C500C00)
#define ABEGLJCDFMA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C500900)
#define ABEGLJCDFMA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C500D80)
#define ABEGLJCDFMA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C500FD0)
#define ABEGLJCDFMA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C500550)
#define ABEGLJCDFMA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C500FB0)
#define ABEGLJCDFMA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C500530)
#define ABEGLJCDFMA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C500810)
#define ABEGLJCDFMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C500D30)

inline static constexpr unsigned int ABEGLJCDFMA_TypeDefinitionIndex = 13029;

class ABEGLJCDFMA : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::Il2CppArray<::NPLECDKJONF*>* OJMBOGGMIKO; // 0x28
	::LMHLANNFEHJ DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEGLJCDFMA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEGLJCDFMA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEGLJCDFMA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ABEGLJCDFMA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ABEGLJCDFMA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEGLJCDFMA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEGLJCDFMA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEGLJCDFMA_FINALIZE_OFFSET))(this);
	}

	::NPLECDKJONF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NPLECDKJONF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABEGLJCDFMA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEGLJCDFMA_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEGLJCDFMA_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ABEGLJCDFMA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
