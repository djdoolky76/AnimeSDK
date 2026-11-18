#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIMCPKDGIJH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NJIEOECLNOM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BJANDIEJFIO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A16F3E0)
#define BJANDIEJFIO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A16F1A0)
#define BJANDIEJFIO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A16F320)
#define BJANDIEJFIO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A16F4C0)
#define BJANDIEJFIO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A16F1B0)
#define BJANDIEJFIO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A16F7F0)
#define BJANDIEJFIO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A16F600)
#define BJANDIEJFIO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A16EDF0)
#define BJANDIEJFIO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A16F7D0)
#define BJANDIEJFIO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A16EDD0)
#define BJANDIEJFIO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A16F0B0)
#define BJANDIEJFIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A16F5F0)

inline static constexpr unsigned int BJANDIEJFIO_TypeDefinitionIndex = 12488;

class BJANDIEJFIO : public ::System::Object
{
public:
	::EIMCPKDGIJH DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::NJIEOECLNOM*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJANDIEJFIO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJANDIEJFIO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJANDIEJFIO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BJANDIEJFIO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BJANDIEJFIO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJANDIEJFIO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJANDIEJFIO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJANDIEJFIO_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BJANDIEJFIO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJANDIEJFIO_NAMKJOJBAOA_OFFSET))(this);
	}

	::NJIEOECLNOM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NJIEOECLNOM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BJANDIEJFIO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJANDIEJFIO_CHLEALKAOJO_OFFSET))(this);
	}
};
