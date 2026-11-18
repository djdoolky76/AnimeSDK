#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGOGIFONBCP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CGFFHFEFIBP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BBJHHEDGFGA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17A764C0)
#define BBJHHEDGFGA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17A76240)
#define BBJHHEDGFGA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17A76250)
#define BBJHHEDGFGA_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x17A765F0)
#define BBJHHEDGFGA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17A76310)
#define BBJHHEDGFGA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17A76440)
#define BBJHHEDGFGA_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x17A766E0)
#define BBJHHEDGFGA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17A768C0)
#define BBJHHEDGFGA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17A75E90)
#define BBJHHEDGFGA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17A766C0)
#define BBJHHEDGFGA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17A75E70)
#define BBJHHEDGFGA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17A76150)
#define BBJHHEDGFGA__CTOR_OFFSET UNITYSDK_OFFSET(0x17A765A0)

inline static constexpr unsigned int BBJHHEDGFGA_TypeDefinitionIndex = 11579;

class BBJHHEDGFGA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::DGOGIFONBCP DHDJDGFNBOA; // 0x20
	::Il2CppArray<::CGFFHFEFIBP*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJHHEDGFGA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJHHEDGFGA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJHHEDGFGA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJHHEDGFGA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJHHEDGFGA_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BBJHHEDGFGA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BBJHHEDGFGA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJHHEDGFGA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::CGFFHFEFIBP*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::CGFFHFEFIBP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJHHEDGFGA_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJHHEDGFGA_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJHHEDGFGA_CHLEALKAOJO_OFFSET))(this);
	}

	::CGFFHFEFIBP* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::CGFFHFEFIBP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BBJHHEDGFGA_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BBJHHEDGFGA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
