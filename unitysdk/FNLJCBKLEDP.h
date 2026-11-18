#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNMEPPMOBJE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OOGBIIKGACM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FNLJCBKLEDP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B865280)
#define FNLJCBKLEDP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B865000)
#define FNLJCBKLEDP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B865010)
#define FNLJCBKLEDP_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1B865860)
#define FNLJCBKLEDP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B8650D0)
#define FNLJCBKLEDP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B865200)
#define FNLJCBKLEDP_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1B8653B0)
#define FNLJCBKLEDP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B8655B0)
#define FNLJCBKLEDP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B864C50)
#define FNLJCBKLEDP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B865590)
#define FNLJCBKLEDP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B864C30)
#define FNLJCBKLEDP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B864F10)
#define FNLJCBKLEDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B865360)

inline static constexpr unsigned int FNLJCBKLEDP_TypeDefinitionIndex = 12462;

class FNLJCBKLEDP : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::OOGBIIKGACM*>* OJMBOGGMIKO; // 0x20
	::DNMEPPMOBJE DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCBKLEDP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCBKLEDP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCBKLEDP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCBKLEDP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCBKLEDP_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FNLJCBKLEDP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FNLJCBKLEDP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCBKLEDP_BHLAEBMEOLO_OFFSET))(this);
	}

	::OOGBIIKGACM* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::OOGBIIKGACM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FNLJCBKLEDP_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCBKLEDP_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FNLJCBKLEDP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::OOGBIIKGACM*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::OOGBIIKGACM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCBKLEDP_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCBKLEDP_CHLEALKAOJO_OFFSET))(this);
	}
};
