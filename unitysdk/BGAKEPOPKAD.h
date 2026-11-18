#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KKFEOPMFCGL.h"
#include "unitysdk/System/Object.h"

class MCFLGHJAPJB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BGAKEPOPKAD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C5142F0)
#define BGAKEPOPKAD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C5140C0)
#define BGAKEPOPKAD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C514230)
#define BGAKEPOPKAD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C5143D0)
#define BGAKEPOPKAD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C5140D0)
#define BGAKEPOPKAD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C514550)
#define BGAKEPOPKAD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C5147A0)
#define BGAKEPOPKAD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C513D20)
#define BGAKEPOPKAD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C514780)
#define BGAKEPOPKAD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C513D00)
#define BGAKEPOPKAD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C513FE0)
#define BGAKEPOPKAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C514500)

inline static constexpr unsigned int BGAKEPOPKAD_TypeDefinitionIndex = 17203;

class BGAKEPOPKAD : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::MCFLGHJAPJB*>* OJMBOGGMIKO; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::KKFEOPMFCGL DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAKEPOPKAD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAKEPOPKAD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAKEPOPKAD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BGAKEPOPKAD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BGAKEPOPKAD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAKEPOPKAD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAKEPOPKAD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAKEPOPKAD_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAKEPOPKAD_CHLEALKAOJO_OFFSET))(this);
	}

	::MCFLGHJAPJB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MCFLGHJAPJB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BGAKEPOPKAD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BGAKEPOPKAD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAKEPOPKAD_NAMKJOJBAOA_OFFSET))(this);
	}
};
