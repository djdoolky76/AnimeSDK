#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MCIGMFDGIPL.h"
#include "unitysdk/System/Object.h"

class BCKNKCNIILB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GPEBCIIHHNL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15A86050)
#define GPEBCIIHHNL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15A85DD0)
#define GPEBCIIHHNL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15A85DE0)
#define GPEBCIIHHNL_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x15A86450)
#define GPEBCIIHHNL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15A85EA0)
#define GPEBCIIHHNL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15A85FD0)
#define GPEBCIIHHNL_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x15A86520)
#define GPEBCIIHHNL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15A861A0)
#define GPEBCIIHHNL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15A85A30)
#define GPEBCIIHHNL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15A86180)
#define GPEBCIIHHNL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15A85A10)
#define GPEBCIIHHNL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15A85CF0)
#define GPEBCIIHHNL__CTOR_OFFSET UNITYSDK_OFFSET(0x15A86130)

inline static constexpr unsigned int GPEBCIIHHNL_TypeDefinitionIndex = 10214;

class GPEBCIIHHNL : public ::System::Object
{
public:
	::MCIGMFDGIPL DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::BCKNKCNIILB*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEBCIIHHNL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEBCIIHHNL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEBCIIHHNL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEBCIIHHNL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEBCIIHHNL_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GPEBCIIHHNL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GPEBCIIHHNL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEBCIIHHNL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEBCIIHHNL_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GPEBCIIHHNL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::BCKNKCNIILB*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::BCKNKCNIILB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEBCIIHHNL_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPEBCIIHHNL_CHLEALKAOJO_OFFSET))(this);
	}

	::BCKNKCNIILB* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::BCKNKCNIILB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPEBCIIHHNL_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
