#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MEBAPDKJBAI.h"
#include "unitysdk/System/Object.h"

class DCOBGPBPCDK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KFBBJBDALFN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18BD74B0)
#define KFBBJBDALFN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18BD7230)
#define KFBBJBDALFN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18BD7240)
#define KFBBJBDALFN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BD7300)
#define KFBBJBDALFN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18BD7430)
#define KFBBJBDALFN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18BD78B0)
#define KFBBJBDALFN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18BD75E0)
#define KFBBJBDALFN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18BD6E80)
#define KFBBJBDALFN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18BD7890)
#define KFBBJBDALFN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18BD6E60)
#define KFBBJBDALFN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18BD7140)
#define KFBBJBDALFN__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD7590)

inline static constexpr unsigned int KFBBJBDALFN_TypeDefinitionIndex = 9240;

class KFBBJBDALFN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::MEBAPDKJBAI DHDJDGFNBOA; // 0x18
	::Il2CppArray<::DCOBGPBPCDK*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBBJBDALFN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBBJBDALFN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBBJBDALFN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBBJBDALFN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBBJBDALFN_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KFBBJBDALFN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KFBBJBDALFN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBBJBDALFN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KFBBJBDALFN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBBJBDALFN_NAMKJOJBAOA_OFFSET))(this);
	}

	::DCOBGPBPCDK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DCOBGPBPCDK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFBBJBDALFN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBBJBDALFN_CHLEALKAOJO_OFFSET))(this);
	}
};
