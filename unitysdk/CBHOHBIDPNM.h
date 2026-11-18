#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOFKELNKKNC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HPCMMFHMAEK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CBHOHBIDPNM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A175480)
#define CBHOHBIDPNM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A175240)
#define CBHOHBIDPNM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A1753C0)
#define CBHOHBIDPNM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A175560)
#define CBHOHBIDPNM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A175250)
#define CBHOHBIDPNM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A1756A0)
#define CBHOHBIDPNM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A175AC0)
#define CBHOHBIDPNM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A174EC0)
#define CBHOHBIDPNM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A175AA0)
#define CBHOHBIDPNM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A174EA0)
#define CBHOHBIDPNM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A175150)
#define CBHOHBIDPNM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A175690)

inline static constexpr unsigned int CBHOHBIDPNM_TypeDefinitionIndex = 15256;

class CBHOHBIDPNM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::IOFKELNKKNC DHDJDGFNBOA; // 0x20
	::Il2CppArray<::HPCMMFHMAEK*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHOHBIDPNM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHOHBIDPNM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHOHBIDPNM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CBHOHBIDPNM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CBHOHBIDPNM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHOHBIDPNM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHOHBIDPNM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHOHBIDPNM_FINALIZE_OFFSET))(this);
	}

	::HPCMMFHMAEK* IFDPKDOFOJD(::System::Int32 EBCCPPJHLND, ::System::Int32 HFKIDEMMMBN)
	{
		return ((::HPCMMFHMAEK*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CBHOHBIDPNM_IFDPKDOFOJD_OFFSET))(this, EBCCPPJHLND, HFKIDEMMMBN);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHOHBIDPNM_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CBHOHBIDPNM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHOHBIDPNM_CHLEALKAOJO_OFFSET))(this);
	}
};
