#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKNFFBFBMCD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class OMKOKKFLBAJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define NFABOOGMIKK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FD20C0)
#define NFABOOGMIKK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FD1E90)
#define NFABOOGMIKK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FD2000)
#define NFABOOGMIKK_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x17FD2320)
#define NFABOOGMIKK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FD21A0)
#define NFABOOGMIKK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FD1EA0)
#define NFABOOGMIKK_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x17FD23C0)
#define NFABOOGMIKK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FD26D0)
#define NFABOOGMIKK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FD1B30)
#define NFABOOGMIKK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FD1B10)
#define NFABOOGMIKK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FD1DB0)
#define NFABOOGMIKK__CTOR_OFFSET UNITYSDK_OFFSET(0x17FD22D0)

inline static constexpr unsigned int NFABOOGMIKK_TypeDefinitionIndex = 16270;

class NFABOOGMIKK : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LHINHLCKHNE; // 0x18
	::JKNFFBFBMCD DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::OMKOKKFLBAJ*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFABOOGMIKK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFABOOGMIKK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFABOOGMIKK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NFABOOGMIKK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NFABOOGMIKK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFABOOGMIKK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFABOOGMIKK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFABOOGMIKK_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::OMKOKKFLBAJ*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::OMKOKKFLBAJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFABOOGMIKK_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NFABOOGMIKK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFABOOGMIKK_CHLEALKAOJO_OFFSET))(this);
	}

	::OMKOKKFLBAJ* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::OMKOKKFLBAJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NFABOOGMIKK_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
