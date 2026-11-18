#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAFJAFEBBKJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FOIANJCAFOG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DGGNMBDMFHB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17781AC0)
#define DGGNMBDMFHB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17781840)
#define DGGNMBDMFHB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17781850)
#define DGGNMBDMFHB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17781910)
#define DGGNMBDMFHB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17781A40)
#define DGGNMBDMFHB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17781EA0)
#define DGGNMBDMFHB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17781BF0)
#define DGGNMBDMFHB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17781490)
#define DGGNMBDMFHB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x177820D0)
#define DGGNMBDMFHB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17781470)
#define DGGNMBDMFHB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17781750)
#define DGGNMBDMFHB__CTOR_OFFSET UNITYSDK_OFFSET(0x17781BA0)

inline static constexpr unsigned int DGGNMBDMFHB_TypeDefinitionIndex = 11790;

class DGGNMBDMFHB : public ::System::Object
{
public:
	::Il2CppArray<::FOIANJCAFOG*>* OJMBOGGMIKO; // 0x10
	::HAFJAFEBBKJ DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGNMBDMFHB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGNMBDMFHB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGNMBDMFHB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGNMBDMFHB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGNMBDMFHB_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DGGNMBDMFHB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DGGNMBDMFHB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGNMBDMFHB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DGGNMBDMFHB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGNMBDMFHB_CHLEALKAOJO_OFFSET))(this);
	}

	::FOIANJCAFOG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FOIANJCAFOG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGGNMBDMFHB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGNMBDMFHB_NAMKJOJBAOA_OFFSET))(this);
	}
};
