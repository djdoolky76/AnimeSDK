#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNDJMPPEMEH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OICEMMGJOLH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HPAFCGBLFEL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAE20B0)
#define HPAFCGBLFEL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAE1E80)
#define HPAFCGBLFEL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BAE1FF0)
#define HPAFCGBLFEL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAE2190)
#define HPAFCGBLFEL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAE1E90)
#define HPAFCGBLFEL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BAE2500)
#define HPAFCGBLFEL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAE2310)
#define HPAFCGBLFEL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAE1AE0)
#define HPAFCGBLFEL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BAE24E0)
#define HPAFCGBLFEL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAE1AC0)
#define HPAFCGBLFEL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAE1DA0)
#define HPAFCGBLFEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE22C0)

inline static constexpr unsigned int HPAFCGBLFEL_TypeDefinitionIndex = 17124;

class HPAFCGBLFEL : public ::System::Object
{
public:
	::HNDJMPPEMEH DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::OICEMMGJOLH*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAFCGBLFEL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAFCGBLFEL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAFCGBLFEL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HPAFCGBLFEL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HPAFCGBLFEL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAFCGBLFEL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAFCGBLFEL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAFCGBLFEL_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HPAFCGBLFEL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAFCGBLFEL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAFCGBLFEL_NAMKJOJBAOA_OFFSET))(this);
	}

	::OICEMMGJOLH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OICEMMGJOLH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPAFCGBLFEL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
