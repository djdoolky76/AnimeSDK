#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NCFIFCOPCDC.h"
#include "unitysdk/System/Object.h"

class ECMOABJPKCM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IIPKEOAHDGE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x195413E0)
#define IIPKEOAHDGE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x195411B0)
#define IIPKEOAHDGE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19541320)
#define IIPKEOAHDGE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x195414C0)
#define IIPKEOAHDGE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x195411C0)
#define IIPKEOAHDGE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x195417F0)
#define IIPKEOAHDGE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19541620)
#define IIPKEOAHDGE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19540E10)
#define IIPKEOAHDGE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19541600)
#define IIPKEOAHDGE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19540DF0)
#define IIPKEOAHDGE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x195410D0)
#define IIPKEOAHDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x195415F0)

inline static constexpr unsigned int IIPKEOAHDGE_TypeDefinitionIndex = 13970;

class IIPKEOAHDGE : public ::System::Object
{
public:
	::NCFIFCOPCDC DHDJDGFNBOA; // 0x10
	::Il2CppArray<::ECMOABJPKCM*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPKEOAHDGE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPKEOAHDGE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPKEOAHDGE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IIPKEOAHDGE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IIPKEOAHDGE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPKEOAHDGE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPKEOAHDGE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPKEOAHDGE_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPKEOAHDGE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPKEOAHDGE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IIPKEOAHDGE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::ECMOABJPKCM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ECMOABJPKCM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IIPKEOAHDGE_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
