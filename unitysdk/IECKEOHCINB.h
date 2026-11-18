#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LBLGPOCLNAC.h"
#include "unitysdk/System/Object.h"

class KMDCEPHDBHB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IECKEOHCINB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B620B50)
#define IECKEOHCINB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B620910)
#define IECKEOHCINB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B620A90)
#define IECKEOHCINB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B620C30)
#define IECKEOHCINB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B620920)
#define IECKEOHCINB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B620DB0)
#define IECKEOHCINB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B621160)
#define IECKEOHCINB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B620490)
#define IECKEOHCINB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B620FE0)
#define IECKEOHCINB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B620460)
#define IECKEOHCINB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B620750)
#define IECKEOHCINB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B620D60)

inline static constexpr unsigned int IECKEOHCINB_TypeDefinitionIndex = 16694;

class IECKEOHCINB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::LBLGPOCLNAC DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::KMDCEPHDBHB*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECKEOHCINB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IECKEOHCINB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECKEOHCINB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IECKEOHCINB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IECKEOHCINB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECKEOHCINB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECKEOHCINB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECKEOHCINB_FINALIZE_OFFSET))(this);
	}

	::KMDCEPHDBHB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KMDCEPHDBHB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IECKEOHCINB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IECKEOHCINB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECKEOHCINB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECKEOHCINB_NAMKJOJBAOA_OFFSET))(this);
	}
};
