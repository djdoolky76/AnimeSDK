#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PONLNMNHGOO.h"
#include "unitysdk/System/Object.h"

class PHOGMDHJIKD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FONFOMHLDBN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18B9E450)
#define FONFOMHLDBN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18B9E220)
#define FONFOMHLDBN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18B9E390)
#define FONFOMHLDBN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18B9E530)
#define FONFOMHLDBN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18B9E230)
#define FONFOMHLDBN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18B9E6B0)
#define FONFOMHLDBN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18B9E900)
#define FONFOMHLDBN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18B9DE80)
#define FONFOMHLDBN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18B9E8E0)
#define FONFOMHLDBN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18B9DE60)
#define FONFOMHLDBN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18B9E140)
#define FONFOMHLDBN__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9E660)

inline static constexpr unsigned int FONFOMHLDBN_TypeDefinitionIndex = 9987;

class FONFOMHLDBN : public ::System::Object
{
public:
	::PONLNMNHGOO DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::Il2CppArray<::PHOGMDHJIKD*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FONFOMHLDBN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FONFOMHLDBN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FONFOMHLDBN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FONFOMHLDBN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FONFOMHLDBN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FONFOMHLDBN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FONFOMHLDBN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FONFOMHLDBN_FINALIZE_OFFSET))(this);
	}

	::PHOGMDHJIKD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PHOGMDHJIKD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FONFOMHLDBN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FONFOMHLDBN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FONFOMHLDBN_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FONFOMHLDBN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
