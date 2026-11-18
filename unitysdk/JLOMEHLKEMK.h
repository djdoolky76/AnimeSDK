#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICGKNDIPCHE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IDKIJFLFBLM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JLOMEHLKEMK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B4FC290)
#define JLOMEHLKEMK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B4FC010)
#define JLOMEHLKEMK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B4FC020)
#define JLOMEHLKEMK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4FC0E0)
#define JLOMEHLKEMK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B4FC210)
#define JLOMEHLKEMK_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B4FC690)
#define JLOMEHLKEMK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B4FC3C0)
#define JLOMEHLKEMK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B4FBC70)
#define JLOMEHLKEMK_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B4FC670)
#define JLOMEHLKEMK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B4FBC50)
#define JLOMEHLKEMK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B4FBF30)
#define JLOMEHLKEMK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4FC370)

inline static constexpr unsigned int JLOMEHLKEMK_TypeDefinitionIndex = 12949;

class JLOMEHLKEMK : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::IDKIJFLFBLM*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::ICGKNDIPCHE DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOMEHLKEMK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOMEHLKEMK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOMEHLKEMK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOMEHLKEMK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOMEHLKEMK_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JLOMEHLKEMK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JLOMEHLKEMK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOMEHLKEMK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JLOMEHLKEMK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOMEHLKEMK_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOMEHLKEMK_CHLEALKAOJO_OFFSET))(this);
	}

	::IDKIJFLFBLM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IDKIJFLFBLM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JLOMEHLKEMK_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
