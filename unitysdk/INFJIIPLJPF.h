#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KPFDOKOJGGL.h"
#include "unitysdk/System/Object.h"

class MLLDPBJGNBL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define INFJIIPLJPF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B62C0B0)
#define INFJIIPLJPF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B62BE70)
#define INFJIIPLJPF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B62BFF0)
#define INFJIIPLJPF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B62C190)
#define INFJIIPLJPF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B62BE80)
#define INFJIIPLJPF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B62C310)
#define INFJIIPLJPF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B62C560)
#define INFJIIPLJPF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B62BAC0)
#define INFJIIPLJPF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B62C540)
#define INFJIIPLJPF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B62BAA0)
#define INFJIIPLJPF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B62BD80)
#define INFJIIPLJPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B62C2C0)

inline static constexpr unsigned int INFJIIPLJPF_TypeDefinitionIndex = 11744;

class INFJIIPLJPF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::MLLDPBJGNBL*>* OJMBOGGMIKO; // 0x20
	::KPFDOKOJGGL DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFJIIPLJPF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INFJIIPLJPF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFJIIPLJPF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + INFJIIPLJPF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + INFJIIPLJPF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFJIIPLJPF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFJIIPLJPF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFJIIPLJPF_FINALIZE_OFFSET))(this);
	}

	::MLLDPBJGNBL* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MLLDPBJGNBL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INFJIIPLJPF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFJIIPLJPF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFJIIPLJPF_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + INFJIIPLJPF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
