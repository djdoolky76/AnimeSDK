#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LCMDOFEPHKO.h"
#include "unitysdk/System/Object.h"

class MBHDAJMBDPF;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FJLFBDEBFPB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B9C64E0)
#define FJLFBDEBFPB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B9C5E50)
#define FJLFBDEBFPB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B9C6420)
#define FJLFBDEBFPB_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1B9C6350)
#define FJLFBDEBFPB_FIMINDGAIJN_OFFSET UNITYSDK_OFFSET(0x1B9C6940)
#define FJLFBDEBFPB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B9C65C0)
#define FJLFBDEBFPB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B9C61E0)
#define FJLFBDEBFPB_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1B9C6760)
#define FJLFBDEBFPB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B9C6A80)
#define FJLFBDEBFPB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B9C6CB0)
#define FJLFBDEBFPB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B9C5A90)
#define FJLFBDEBFPB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B9C6740)
#define FJLFBDEBFPB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B9C5A70)
#define FJLFBDEBFPB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B9C5D60)
#define FJLFBDEBFPB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C66F0)

inline static constexpr unsigned int FJLFBDEBFPB_TypeDefinitionIndex = 11489;

class FJLFBDEBFPB : public ::System::Object
{
public:
	::LCMDOFEPHKO DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MBHDAJMBDPF*>*>* PPGLABBOAGF; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::MBHDAJMBDPF*>* OJMBOGGMIKO; // 0x40
	::System::Action* PLDOELOOFLL; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x50
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLFBDEBFPB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLFBDEBFPB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLFBDEBFPB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FJLFBDEBFPB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FJLFBDEBFPB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLFBDEBFPB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLFBDEBFPB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLFBDEBFPB_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLFBDEBFPB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::MBHDAJMBDPF*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::MBHDAJMBDPF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLFBDEBFPB_EJABHIAHIAN_OFFSET))(this);
	}

	::MBHDAJMBDPF* FIMINDGAIJN(::System::String* MCOHLHMKLIP)
	{
		return ((::MBHDAJMBDPF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FJLFBDEBFPB_FIMINDGAIJN_OFFSET))(this, MCOHLHMKLIP);
	}

	::MBHDAJMBDPF* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::MBHDAJMBDPF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FJLFBDEBFPB_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::MBHDAJMBDPF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MBHDAJMBDPF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FJLFBDEBFPB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FJLFBDEBFPB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLFBDEBFPB_NAMKJOJBAOA_OFFSET))(this);
	}
};
