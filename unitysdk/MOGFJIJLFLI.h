#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COJHMLMIBOP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KPGHCEFLHPB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOGFJIJLFLI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BF657E0)
#define MOGFJIJLFLI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BF655B0)
#define MOGFJIJLFLI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BF65720)
#define MOGFJIJLFLI_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1BF65A00)
#define MOGFJIJLFLI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BF658C0)
#define MOGFJIJLFLI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BF655C0)
#define MOGFJIJLFLI_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1BF65AF0)
#define MOGFJIJLFLI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BF65CD0)
#define MOGFJIJLFLI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BF65210)
#define MOGFJIJLFLI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BF65AD0)
#define MOGFJIJLFLI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BF651F0)
#define MOGFJIJLFLI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BF654D0)
#define MOGFJIJLFLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF659F0)

inline static constexpr unsigned int MOGFJIJLFLI_TypeDefinitionIndex = 16115;

class MOGFJIJLFLI : public ::System::Object
{
public:
	::COJHMLMIBOP DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::KPGHCEFLHPB*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGFJIJLFLI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGFJIJLFLI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGFJIJLFLI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOGFJIJLFLI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MOGFJIJLFLI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGFJIJLFLI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGFJIJLFLI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGFJIJLFLI_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::KPGHCEFLHPB*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::KPGHCEFLHPB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGFJIJLFLI_EJABHIAHIAN_OFFSET))(this);
	}

	::KPGHCEFLHPB* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::KPGHCEFLHPB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOGFJIJLFLI_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGFJIJLFLI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGFJIJLFLI_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MOGFJIJLFLI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
