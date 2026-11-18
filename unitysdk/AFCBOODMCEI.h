#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LJMFMEKKLCK.h"
#include "unitysdk/System/Object.h"

class MEPCMMAEMKG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AFCBOODMCEI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17A6CC10)
#define AFCBOODMCEI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17A6C9E0)
#define AFCBOODMCEI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17A6CB50)
#define AFCBOODMCEI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17A6CCF0)
#define AFCBOODMCEI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17A6C9F0)
#define AFCBOODMCEI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17A6D060)
#define AFCBOODMCEI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17A6CE70)
#define AFCBOODMCEI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17A6C640)
#define AFCBOODMCEI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17A6D040)
#define AFCBOODMCEI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17A6C620)
#define AFCBOODMCEI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17A6C900)
#define AFCBOODMCEI__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6CE20)

inline static constexpr unsigned int AFCBOODMCEI_TypeDefinitionIndex = 9368;

class AFCBOODMCEI : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::LJMFMEKKLCK DHDJDGFNBOA; // 0x20
	::Il2CppArray<::MEPCMMAEMKG*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCBOODMCEI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCBOODMCEI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCBOODMCEI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AFCBOODMCEI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AFCBOODMCEI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCBOODMCEI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCBOODMCEI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCBOODMCEI_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AFCBOODMCEI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCBOODMCEI_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCBOODMCEI_NAMKJOJBAOA_OFFSET))(this);
	}

	::MEPCMMAEMKG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MEPCMMAEMKG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFCBOODMCEI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
