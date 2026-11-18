#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCMCGMNALOB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OMLBPCBIKDH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ODHOLCCEFPD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CCF8450)
#define ODHOLCCEFPD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1CCF81D0)
#define ODHOLCCEFPD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1CCF81E0)
#define ODHOLCCEFPD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CCF82A0)
#define ODHOLCCEFPD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1CCF83D0)
#define ODHOLCCEFPD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1CCF8580)
#define ODHOLCCEFPD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CCF7E20)
#define ODHOLCCEFPD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1CCF7E00)
#define ODHOLCCEFPD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CCF80E0)
#define ODHOLCCEFPD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF8530)

inline static constexpr unsigned int ODHOLCCEFPD_TypeDefinitionIndex = 12413;

class ODHOLCCEFPD : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::KCMCGMNALOB DHDJDGFNBOA; // 0x28
	::Il2CppArray<::OMLBPCBIKDH*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHOLCCEFPD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHOLCCEFPD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHOLCCEFPD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHOLCCEFPD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHOLCCEFPD_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ODHOLCCEFPD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ODHOLCCEFPD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHOLCCEFPD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHOLCCEFPD_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ODHOLCCEFPD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
