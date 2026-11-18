#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPGOJKGFIAH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PHLHMPHKMPH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MBBDEAOMODG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AD6B0F0)
#define MBBDEAOMODG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AD6AEB0)
#define MBBDEAOMODG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AD6B030)
#define MBBDEAOMODG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AD6B1D0)
#define MBBDEAOMODG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AD6AEC0)
#define MBBDEAOMODG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1AD6B350)
#define MBBDEAOMODG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AD6B5A0)
#define MBBDEAOMODG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AD6AB00)
#define MBBDEAOMODG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AD6B580)
#define MBBDEAOMODG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AD6AAE0)
#define MBBDEAOMODG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AD6ADC0)
#define MBBDEAOMODG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD6B300)

inline static constexpr unsigned int MBBDEAOMODG_TypeDefinitionIndex = 12090;

class MBBDEAOMODG : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::PHLHMPHKMPH*>* OJMBOGGMIKO; // 0x18
	::HPGOJKGFIAH DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBDEAOMODG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBDEAOMODG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBDEAOMODG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MBBDEAOMODG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MBBDEAOMODG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBDEAOMODG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBDEAOMODG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBDEAOMODG_FINALIZE_OFFSET))(this);
	}

	::PHLHMPHKMPH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PHLHMPHKMPH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MBBDEAOMODG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MBBDEAOMODG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBDEAOMODG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBDEAOMODG_NAMKJOJBAOA_OFFSET))(this);
	}
};
