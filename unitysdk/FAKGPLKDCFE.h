#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIKMJEAAJJD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GJDCJOJAIKG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FAKGPLKDCFE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x16630CF0)
#define FAKGPLKDCFE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x16630A80)
#define FAKGPLKDCFE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x16630C30)
#define FAKGPLKDCFE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16630DD0)
#define FAKGPLKDCFE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x16630A90)
#define FAKGPLKDCFE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x166306D0)
#define FAKGPLKDCFE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x166306B0)
#define FAKGPLKDCFE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16630990)
#define FAKGPLKDCFE__CTOR_OFFSET UNITYSDK_OFFSET(0x16630F00)

inline static constexpr unsigned int FAKGPLKDCFE_TypeDefinitionIndex = 14471;

class FAKGPLKDCFE : public ::System::Object
{
public:
	::AIKMJEAAJJD DHDJDGFNBOA; // 0x10
	::Il2CppArray<::GJDCJOJAIKG*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKGPLKDCFE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKGPLKDCFE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKGPLKDCFE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FAKGPLKDCFE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FAKGPLKDCFE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKGPLKDCFE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKGPLKDCFE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKGPLKDCFE_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKGPLKDCFE_CHLEALKAOJO_OFFSET))(this);
	}
};
