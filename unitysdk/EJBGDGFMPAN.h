#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MDGGOGHFKLK.h"
#include "unitysdk/System/Object.h"

class JLJJPJGCGKL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EJBGDGFMPAN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A19FF20)
#define EJBGDGFMPAN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A19FCF0)
#define EJBGDGFMPAN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A19FE60)
#define EJBGDGFMPAN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A1A0000)
#define EJBGDGFMPAN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A19FD00)
#define EJBGDGFMPAN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A1A0180)
#define EJBGDGFMPAN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A19F950)
#define EJBGDGFMPAN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A19F930)
#define EJBGDGFMPAN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A19FC10)
#define EJBGDGFMPAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1A0130)

inline static constexpr unsigned int EJBGDGFMPAN_TypeDefinitionIndex = 16530;

class EJBGDGFMPAN : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::MDGGOGHFKLK DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::JLJJPJGCGKL*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBGDGFMPAN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBGDGFMPAN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBGDGFMPAN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EJBGDGFMPAN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EJBGDGFMPAN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBGDGFMPAN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBGDGFMPAN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBGDGFMPAN_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EJBGDGFMPAN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBGDGFMPAN_CHLEALKAOJO_OFFSET))(this);
	}
};
