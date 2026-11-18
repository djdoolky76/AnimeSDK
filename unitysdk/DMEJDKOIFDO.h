#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMBHCJHCEGF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DJHLEEJPIBD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DMEJDKOIFDO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15754270)
#define DMEJDKOIFDO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15754030)
#define DMEJDKOIFDO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x157541B0)
#define DMEJDKOIFDO_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x157548A0)
#define DMEJDKOIFDO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15754350)
#define DMEJDKOIFDO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15754040)
#define DMEJDKOIFDO_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x157544D0)
#define DMEJDKOIFDO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x157546D0)
#define DMEJDKOIFDO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15753C80)
#define DMEJDKOIFDO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x157546B0)
#define DMEJDKOIFDO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15753C60)
#define DMEJDKOIFDO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15753F40)
#define DMEJDKOIFDO__CTOR_OFFSET UNITYSDK_OFFSET(0x15754480)

inline static constexpr unsigned int DMEJDKOIFDO_TypeDefinitionIndex = 13943;

class DMEJDKOIFDO : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::DMBHCJHCEGF DHDJDGFNBOA; // 0x28
	::Il2CppArray<::DJHLEEJPIBD*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEJDKOIFDO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEJDKOIFDO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEJDKOIFDO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DMEJDKOIFDO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DMEJDKOIFDO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEJDKOIFDO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEJDKOIFDO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEJDKOIFDO_FINALIZE_OFFSET))(this);
	}

	::DJHLEEJPIBD* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::DJHLEEJPIBD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DMEJDKOIFDO_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEJDKOIFDO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEJDKOIFDO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DMEJDKOIFDO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::DJHLEEJPIBD*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::DJHLEEJPIBD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEJDKOIFDO_EJABHIAHIAN_OFFSET))(this);
	}
};
