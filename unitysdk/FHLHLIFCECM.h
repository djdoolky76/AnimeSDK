#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEGEEIDLPF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DMHLPCJOJEM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FHLHLIFCECM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1952A980)
#define FHLHLIFCECM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1952A700)
#define FHLHLIFCECM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1952A710)
#define FHLHLIFCECM_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1952AA70)
#define FHLHLIFCECM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1952A7D0)
#define FHLHLIFCECM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1952A900)
#define FHLHLIFCECM_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1952AB60)
#define FHLHLIFCECM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1952AD10)
#define FHLHLIFCECM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1952A430)
#define FHLHLIFCECM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1952AB40)
#define FHLHLIFCECM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1952A410)
#define FHLHLIFCECM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1952A620)
#define FHLHLIFCECM__CTOR_OFFSET UNITYSDK_OFFSET(0x1952AA60)

inline static constexpr unsigned int FHLHLIFCECM_TypeDefinitionIndex = 10454;

class FHLHLIFCECM : public ::System::Object
{
public:
	::ABEGEEIDLPF DHDJDGFNBOA; // 0x10
	::Il2CppArray<::DMHLPCJOJEM*>* OJMBOGGMIKO; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLHLIFCECM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLHLIFCECM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLHLIFCECM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLHLIFCECM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLHLIFCECM_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FHLHLIFCECM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FHLHLIFCECM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLHLIFCECM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLHLIFCECM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::DMHLPCJOJEM*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::DMHLPCJOJEM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLHLIFCECM_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLHLIFCECM_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FHLHLIFCECM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::DMHLPCJOJEM* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::DMHLPCJOJEM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FHLHLIFCECM_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
