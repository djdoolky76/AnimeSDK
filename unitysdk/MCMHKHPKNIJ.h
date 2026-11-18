#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAIJAGFLNGO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NHGLFPOBCEA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MCMHKHPKNIJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18E047C0)
#define MCMHKHPKNIJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18E04590)
#define MCMHKHPKNIJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18E04700)
#define MCMHKHPKNIJ_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x18E04C10)
#define MCMHKHPKNIJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18E048A0)
#define MCMHKHPKNIJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18E045A0)
#define MCMHKHPKNIJ_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x18E04CE0)
#define MCMHKHPKNIJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18E04A40)
#define MCMHKHPKNIJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18E041F0)
#define MCMHKHPKNIJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18E04A20)
#define MCMHKHPKNIJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18E041D0)
#define MCMHKHPKNIJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18E044B0)
#define MCMHKHPKNIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18E049D0)

inline static constexpr unsigned int MCMHKHPKNIJ_TypeDefinitionIndex = 10444;

class MCMHKHPKNIJ : public ::System::Object
{
public:
	::Il2CppArray<::NHGLFPOBCEA*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::IAIJAGFLNGO DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMHKHPKNIJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMHKHPKNIJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMHKHPKNIJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MCMHKHPKNIJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MCMHKHPKNIJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMHKHPKNIJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMHKHPKNIJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMHKHPKNIJ_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMHKHPKNIJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MCMHKHPKNIJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::NHGLFPOBCEA*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::NHGLFPOBCEA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMHKHPKNIJ_EJABHIAHIAN_OFFSET))(this);
	}

	::NHGLFPOBCEA* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::NHGLFPOBCEA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MCMHKHPKNIJ_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMHKHPKNIJ_CHLEALKAOJO_OFFSET))(this);
	}
};
