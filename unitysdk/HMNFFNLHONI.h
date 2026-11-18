#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFHNLMMHKB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LMKOGIJHMDB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HMNFFNLHONI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19537230)
#define HMNFFNLHONI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19536FB0)
#define HMNFFNLHONI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19536FC0)
#define HMNFFNLHONI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19537080)
#define HMNFFNLHONI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x195371B0)
#define HMNFFNLHONI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19537610)
#define HMNFFNLHONI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19537360)
#define HMNFFNLHONI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19536C00)
#define HMNFFNLHONI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19537840)
#define HMNFFNLHONI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19536BE0)
#define HMNFFNLHONI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19536EC0)
#define HMNFFNLHONI__CTOR_OFFSET UNITYSDK_OFFSET(0x19537310)

inline static constexpr unsigned int HMNFFNLHONI_TypeDefinitionIndex = 14855;

class HMNFFNLHONI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::LMKOGIJHMDB*>* OJMBOGGMIKO; // 0x20
	::KAFHNLMMHKB DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNFFNLHONI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNFFNLHONI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNFFNLHONI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNFFNLHONI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNFFNLHONI_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HMNFFNLHONI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HMNFFNLHONI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNFFNLHONI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HMNFFNLHONI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::LMKOGIJHMDB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LMKOGIJHMDB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HMNFFNLHONI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNFFNLHONI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNFFNLHONI_CHLEALKAOJO_OFFSET))(this);
	}
};
