#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBBIELJLBKK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NCNPFIKMPNJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LJBICDBHBPJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x190FE3F0)
#define LJBICDBHBPJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x190FE190)
#define LJBICDBHBPJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x190FE330)
#define LJBICDBHBPJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x190FE4D0)
#define LJBICDBHBPJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x190FE1A0)
#define LJBICDBHBPJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x190FDDF0)
#define LJBICDBHBPJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x190FDDD0)
#define LJBICDBHBPJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x190FE0B0)
#define LJBICDBHBPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x190FE600)

inline static constexpr unsigned int LJBICDBHBPJ_TypeDefinitionIndex = 9577;

class LJBICDBHBPJ : public ::System::Object
{
public:
	::EBBIELJLBKK DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::Il2CppArray<::NCNPFIKMPNJ*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBICDBHBPJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBICDBHBPJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBICDBHBPJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LJBICDBHBPJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LJBICDBHBPJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBICDBHBPJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBICDBHBPJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBICDBHBPJ_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBICDBHBPJ_CHLEALKAOJO_OFFSET))(this);
	}
};
