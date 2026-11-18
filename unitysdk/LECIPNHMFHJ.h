#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LLFJGOEHPAF.h"
#include "unitysdk/System/Object.h"

class DOPPHFEHGBE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LECIPNHMFHJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18DF8B80)
#define LECIPNHMFHJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18DF8950)
#define LECIPNHMFHJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18DF8AC0)
#define LECIPNHMFHJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18DF8C60)
#define LECIPNHMFHJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18DF8960)
#define LECIPNHMFHJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18DF8E00)
#define LECIPNHMFHJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18DF9030)
#define LECIPNHMFHJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18DF85B0)
#define LECIPNHMFHJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18DF8DE0)
#define LECIPNHMFHJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18DF8590)
#define LECIPNHMFHJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18DF8870)
#define LECIPNHMFHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF8D90)

inline static constexpr unsigned int LECIPNHMFHJ_TypeDefinitionIndex = 17041;

class LECIPNHMFHJ : public ::System::Object
{
public:
	::LLFJGOEHPAF DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::DOPPHFEHGBE*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIPNHMFHJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIPNHMFHJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIPNHMFHJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LECIPNHMFHJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LECIPNHMFHJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIPNHMFHJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIPNHMFHJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIPNHMFHJ_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIPNHMFHJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIPNHMFHJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::DOPPHFEHGBE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DOPPHFEHGBE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LECIPNHMFHJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LECIPNHMFHJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
