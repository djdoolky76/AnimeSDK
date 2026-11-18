#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPCLDCAEIAM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DNPKGEBOAGL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define NDNIHPBOCJE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AB14190)
#define NDNIHPBOCJE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AB13F60)
#define NDNIHPBOCJE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AB140D0)
#define NDNIHPBOCJE_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1AB143F0)
#define NDNIHPBOCJE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AB14270)
#define NDNIHPBOCJE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AB13F70)
#define NDNIHPBOCJE_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1AB144E0)
#define NDNIHPBOCJE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AB146C0)
#define NDNIHPBOCJE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AB13BC0)
#define NDNIHPBOCJE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AB144C0)
#define NDNIHPBOCJE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AB13BA0)
#define NDNIHPBOCJE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AB13E80)
#define NDNIHPBOCJE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB143A0)

inline static constexpr unsigned int NDNIHPBOCJE_TypeDefinitionIndex = 10027;

class NDNIHPBOCJE : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::DNPKGEBOAGL*>* OJMBOGGMIKO; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::EPCLDCAEIAM DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNIHPBOCJE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNIHPBOCJE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNIHPBOCJE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NDNIHPBOCJE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NDNIHPBOCJE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNIHPBOCJE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNIHPBOCJE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNIHPBOCJE_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::DNPKGEBOAGL*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::DNPKGEBOAGL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNIHPBOCJE_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNIHPBOCJE_CHLEALKAOJO_OFFSET))(this);
	}

	::DNPKGEBOAGL* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::DNPKGEBOAGL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NDNIHPBOCJE_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNIHPBOCJE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NDNIHPBOCJE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
