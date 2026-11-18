#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LJDBABOEJBH.h"
#include "unitysdk/System/Object.h"

class JOIBBHJOMAL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define LLCICMHCPHN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1956CA90)
#define LLCICMHCPHN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1956C850)
#define LLCICMHCPHN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1956C9D0)
#define LLCICMHCPHN_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1956D080)
#define LLCICMHCPHN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1956CB70)
#define LLCICMHCPHN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1956C860)
#define LLCICMHCPHN_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1956CCB0)
#define LLCICMHCPHN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1956CEB0)
#define LLCICMHCPHN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1956C4A0)
#define LLCICMHCPHN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1956CE90)
#define LLCICMHCPHN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1956C480)
#define LLCICMHCPHN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1956C760)
#define LLCICMHCPHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1956CCA0)

inline static constexpr unsigned int LLCICMHCPHN_TypeDefinitionIndex = 16606;

class LLCICMHCPHN : public ::System::Object
{
public:
	::Il2CppArray<::JOIBBHJOMAL*>* OJMBOGGMIKO; // 0x10
	::LJDBABOEJBH DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCICMHCPHN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCICMHCPHN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCICMHCPHN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LLCICMHCPHN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LLCICMHCPHN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCICMHCPHN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCICMHCPHN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCICMHCPHN_FINALIZE_OFFSET))(this);
	}

	::JOIBBHJOMAL* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::JOIBBHJOMAL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLCICMHCPHN_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCICMHCPHN_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LLCICMHCPHN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCICMHCPHN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::JOIBBHJOMAL*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::JOIBBHJOMAL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCICMHCPHN_EJABHIAHIAN_OFFSET))(this);
	}
};
