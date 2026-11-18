#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PKBDKALMPEH.h"
#include "unitysdk/System/Object.h"

class OHPNFACGBJH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KNNAGBJBINC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19587820)
#define KNNAGBJBINC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x195875E0)
#define KNNAGBJBINC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19587760)
#define KNNAGBJBINC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19587900)
#define KNNAGBJBINC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x195875F0)
#define KNNAGBJBINC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19587A80)
#define KNNAGBJBINC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19587CD0)
#define KNNAGBJBINC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19587230)
#define KNNAGBJBINC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19587CB0)
#define KNNAGBJBINC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19587210)
#define KNNAGBJBINC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x195874F0)
#define KNNAGBJBINC__CTOR_OFFSET UNITYSDK_OFFSET(0x19587A30)

inline static constexpr unsigned int KNNAGBJBINC_TypeDefinitionIndex = 11827;

class KNNAGBJBINC : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::PKBDKALMPEH DHDJDGFNBOA; // 0x28
	::Il2CppArray<::OHPNFACGBJH*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNAGBJBINC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNAGBJBINC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNAGBJBINC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KNNAGBJBINC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KNNAGBJBINC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNAGBJBINC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNAGBJBINC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNAGBJBINC_FINALIZE_OFFSET))(this);
	}

	::OHPNFACGBJH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OHPNFACGBJH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNNAGBJBINC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KNNAGBJBINC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNAGBJBINC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNAGBJBINC_NAMKJOJBAOA_OFFSET))(this);
	}
};
