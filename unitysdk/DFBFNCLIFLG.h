#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHIHLPJGBIG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GCLOKEACLHO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DFBFNCLIFLG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19C05170)
#define DFBFNCLIFLG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19C04F30)
#define DFBFNCLIFLG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19C050B0)
#define DFBFNCLIFLG_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x19C059D0)
#define DFBFNCLIFLG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19C05250)
#define DFBFNCLIFLG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19C04F40)
#define DFBFNCLIFLG_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x19C057F0)
#define DFBFNCLIFLG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19C053D0)
#define DFBFNCLIFLG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19C05620)
#define DFBFNCLIFLG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19C04B80)
#define DFBFNCLIFLG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19C05600)
#define DFBFNCLIFLG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19C04B60)
#define DFBFNCLIFLG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19C04E40)
#define DFBFNCLIFLG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C05380)

inline static constexpr unsigned int DFBFNCLIFLG_TypeDefinitionIndex = 10845;

class DFBFNCLIFLG : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::BHIHLPJGBIG DHDJDGFNBOA; // 0x28
	::Il2CppArray<::GCLOKEACLHO*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBFNCLIFLG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBFNCLIFLG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBFNCLIFLG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DFBFNCLIFLG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DFBFNCLIFLG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBFNCLIFLG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBFNCLIFLG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBFNCLIFLG_FINALIZE_OFFSET))(this);
	}

	::GCLOKEACLHO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GCLOKEACLHO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFBFNCLIFLG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DFBFNCLIFLG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::GCLOKEACLHO* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::GCLOKEACLHO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFBFNCLIFLG_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::GCLOKEACLHO*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::GCLOKEACLHO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBFNCLIFLG_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBFNCLIFLG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBFNCLIFLG_NAMKJOJBAOA_OFFSET))(this);
	}
};
