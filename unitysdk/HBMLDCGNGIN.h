#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEHNFCELGOP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HBEBFHNELBM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HBMLDCGNGIN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B8744C0)
#define HBMLDCGNGIN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B874280)
#define HBMLDCGNGIN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B874400)
#define HBMLDCGNGIN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B8745A0)
#define HBMLDCGNGIN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B874290)
#define HBMLDCGNGIN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B874720)
#define HBMLDCGNGIN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B874970)
#define HBMLDCGNGIN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B873ED0)
#define HBMLDCGNGIN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B874950)
#define HBMLDCGNGIN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B873EB0)
#define HBMLDCGNGIN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B874190)
#define HBMLDCGNGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8746D0)

inline static constexpr unsigned int HBMLDCGNGIN_TypeDefinitionIndex = 17192;

class HBMLDCGNGIN : public ::System::Object
{
public:
	::JEHNFCELGOP DHDJDGFNBOA; // 0x10
	::Il2CppArray<::HBEBFHNELBM*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMLDCGNGIN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMLDCGNGIN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMLDCGNGIN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HBMLDCGNGIN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HBMLDCGNGIN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMLDCGNGIN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMLDCGNGIN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMLDCGNGIN_FINALIZE_OFFSET))(this);
	}

	::HBEBFHNELBM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HBEBFHNELBM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HBMLDCGNGIN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HBMLDCGNGIN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMLDCGNGIN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMLDCGNGIN_NAMKJOJBAOA_OFFSET))(this);
	}
};
