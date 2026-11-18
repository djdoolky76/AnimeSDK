#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJNBJAKLOIP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PCJFANAPFNP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define NOCKGOBDHAK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DCA2C0)
#define NOCKGOBDHAK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DCA080)
#define NOCKGOBDHAK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DCA200)
#define NOCKGOBDHAK_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x19DCAA30)
#define NOCKGOBDHAK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DCA3A0)
#define NOCKGOBDHAK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DCA090)
#define NOCKGOBDHAK_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x19DCA540)
#define NOCKGOBDHAK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DCA860)
#define NOCKGOBDHAK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DC9CD0)
#define NOCKGOBDHAK_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19DCA520)
#define NOCKGOBDHAK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DC9CB0)
#define NOCKGOBDHAK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DC9F90)
#define NOCKGOBDHAK__CTOR_OFFSET UNITYSDK_OFFSET(0x19DCA4D0)

inline static constexpr unsigned int NOCKGOBDHAK_TypeDefinitionIndex = 13642;

class NOCKGOBDHAK : public ::System::Object
{
public:
	::Il2CppArray<::PCJFANAPFNP*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::JJNBJAKLOIP DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCKGOBDHAK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCKGOBDHAK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCKGOBDHAK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NOCKGOBDHAK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NOCKGOBDHAK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCKGOBDHAK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCKGOBDHAK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCKGOBDHAK_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCKGOBDHAK_NAMKJOJBAOA_OFFSET))(this);
	}

	::PCJFANAPFNP* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::PCJFANAPFNP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NOCKGOBDHAK_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NOCKGOBDHAK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCKGOBDHAK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::PCJFANAPFNP*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::PCJFANAPFNP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCKGOBDHAK_EJABHIAHIAN_OFFSET))(this);
	}
};
