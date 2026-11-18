#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LFLKHNKKLEG.h"
#include "unitysdk/System/Object.h"

class NPOJLHNIDNO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MDGGELOPNDO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AD70D00)
#define MDGGELOPNDO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AD70AD0)
#define MDGGELOPNDO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AD70C40)
#define MDGGELOPNDO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AD70DE0)
#define MDGGELOPNDO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AD70AE0)
#define MDGGELOPNDO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1AD71110)
#define MDGGELOPNDO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AD70F20)
#define MDGGELOPNDO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AD70730)
#define MDGGELOPNDO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AD710F0)
#define MDGGELOPNDO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AD70710)
#define MDGGELOPNDO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AD709F0)
#define MDGGELOPNDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD70F10)

inline static constexpr unsigned int MDGGELOPNDO_TypeDefinitionIndex = 10723;

class MDGGELOPNDO : public ::System::Object
{
public:
	::Il2CppArray<::NPOJLHNIDNO*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::LFLKHNKKLEG DHDJDGFNBOA; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGGELOPNDO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGGELOPNDO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGGELOPNDO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MDGGELOPNDO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MDGGELOPNDO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGGELOPNDO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGGELOPNDO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGGELOPNDO_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGGELOPNDO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MDGGELOPNDO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGGELOPNDO_NAMKJOJBAOA_OFFSET))(this);
	}

	::NPOJLHNIDNO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NPOJLHNIDNO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MDGGELOPNDO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
