#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKIFFOFBL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IADGJOOOJGL;
class KOOEOIGFICM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EFONLEJPMIG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x187A9080)
#define EFONLEJPMIG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x187A8E00)
#define EFONLEJPMIG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x187A8E10)
#define EFONLEJPMIG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x187A8ED0)
#define EFONLEJPMIG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x187A9000)
#define EFONLEJPMIG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x187A9460)
#define EFONLEJPMIG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x187A91B0)
#define EFONLEJPMIG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x187A8A60)
#define EFONLEJPMIG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x187A96A0)
#define EFONLEJPMIG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x187A8A40)
#define EFONLEJPMIG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x187A8D20)
#define EFONLEJPMIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187A9160)

inline static constexpr unsigned int EFONLEJPMIG_TypeDefinitionIndex = 16566;

class EFONLEJPMIG : public ::System::Object
{
public:
	::ENGKIFFOFBL DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::IADGJOOOJGL*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFONLEJPMIG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFONLEJPMIG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFONLEJPMIG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFONLEJPMIG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFONLEJPMIG_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EFONLEJPMIG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EFONLEJPMIG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFONLEJPMIG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EFONLEJPMIG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::KOOEOIGFICM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KOOEOIGFICM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EFONLEJPMIG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFONLEJPMIG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFONLEJPMIG_NAMKJOJBAOA_OFFSET))(this);
	}
};
