#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OFEPACHGPEM.h"
#include "unitysdk/System/Object.h"

class HKIMJOGEHHJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BEDBCDBNDPH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1ADAF100)
#define BEDBCDBNDPH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1ADAEEC0)
#define BEDBCDBNDPH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1ADAF040)
#define BEDBCDBNDPH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ADAF1E0)
#define BEDBCDBNDPH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1ADAEED0)
#define BEDBCDBNDPH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1ADAF360)
#define BEDBCDBNDPH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1ADAF5B0)
#define BEDBCDBNDPH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1ADAEB10)
#define BEDBCDBNDPH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1ADAF590)
#define BEDBCDBNDPH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1ADAEAF0)
#define BEDBCDBNDPH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ADAEDD0)
#define BEDBCDBNDPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAF310)

inline static constexpr unsigned int BEDBCDBNDPH_TypeDefinitionIndex = 13910;

class BEDBCDBNDPH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::OFEPACHGPEM DHDJDGFNBOA; // 0x28
	::Il2CppArray<::HKIMJOGEHHJ*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDBCDBNDPH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDBCDBNDPH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDBCDBNDPH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BEDBCDBNDPH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BEDBCDBNDPH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDBCDBNDPH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDBCDBNDPH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDBCDBNDPH_FINALIZE_OFFSET))(this);
	}

	::HKIMJOGEHHJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HKIMJOGEHHJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEDBCDBNDPH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDBCDBNDPH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDBCDBNDPH_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEDBCDBNDPH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
