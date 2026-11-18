#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GENECIMHLIK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DIIHKDPCFBL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DPJFKBNBJKM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x187A0DF0)
#define DPJFKBNBJKM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x187A0BB0)
#define DPJFKBNBJKM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x187A0D30)
#define DPJFKBNBJKM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x187A0ED0)
#define DPJFKBNBJKM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x187A0BC0)
#define DPJFKBNBJKM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x187A1050)
#define DPJFKBNBJKM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x187A0800)
#define DPJFKBNBJKM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x187A07E0)
#define DPJFKBNBJKM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x187A0AC0)
#define DPJFKBNBJKM__CTOR_OFFSET UNITYSDK_OFFSET(0x187A1000)

inline static constexpr unsigned int DPJFKBNBJKM_TypeDefinitionIndex = 9469;

class DPJFKBNBJKM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::DIIHKDPCFBL*>* OJMBOGGMIKO; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::GENECIMHLIK DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJFKBNBJKM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJFKBNBJKM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJFKBNBJKM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DPJFKBNBJKM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DPJFKBNBJKM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJFKBNBJKM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJFKBNBJKM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJFKBNBJKM_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJFKBNBJKM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DPJFKBNBJKM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
