#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFDHEKHDLGC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FLDHJJBBHHL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DCOPLPPBJOM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1777AFD0)
#define DCOPLPPBJOM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1777ADA0)
#define DCOPLPPBJOM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1777AF10)
#define DCOPLPPBJOM_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1777B230)
#define DCOPLPPBJOM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1777B0B0)
#define DCOPLPPBJOM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1777ADB0)
#define DCOPLPPBJOM_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1777B320)
#define DCOPLPPBJOM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1777B500)
#define DCOPLPPBJOM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1777AA00)
#define DCOPLPPBJOM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1777B300)
#define DCOPLPPBJOM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1777A9E0)
#define DCOPLPPBJOM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1777ACC0)
#define DCOPLPPBJOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1777B1E0)

inline static constexpr unsigned int DCOPLPPBJOM_TypeDefinitionIndex = 13269;

class DCOPLPPBJOM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::FLDHJJBBHHL*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::EFDHEKHDLGC DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOPLPPBJOM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOPLPPBJOM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOPLPPBJOM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DCOPLPPBJOM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DCOPLPPBJOM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOPLPPBJOM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOPLPPBJOM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOPLPPBJOM_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::FLDHJJBBHHL*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::FLDHJJBBHHL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOPLPPBJOM_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOPLPPBJOM_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DCOPLPPBJOM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::FLDHJJBBHHL* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::FLDHJJBBHHL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCOPLPPBJOM_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOPLPPBJOM_CHLEALKAOJO_OFFSET))(this);
	}
};
