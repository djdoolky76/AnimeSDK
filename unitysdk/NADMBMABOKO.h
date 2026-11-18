#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMCABIPPLNK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KMIBDNFFHCH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NADMBMABOKO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FCE650)
#define NADMBMABOKO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FCE420)
#define NADMBMABOKO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FCE590)
#define NADMBMABOKO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FCE730)
#define NADMBMABOKO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FCE430)
#define NADMBMABOKO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17FCE920)
#define NADMBMABOKO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FCEB20)
#define NADMBMABOKO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FCE080)
#define NADMBMABOKO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17FCE900)
#define NADMBMABOKO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FCE060)
#define NADMBMABOKO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FCE340)
#define NADMBMABOKO__CTOR_OFFSET UNITYSDK_OFFSET(0x17FCE860)

inline static constexpr unsigned int NADMBMABOKO_TypeDefinitionIndex = 10505;

class NADMBMABOKO : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* ONAJMOOJANG; // 0x18
	::Il2CppArray<::KMIBDNFFHCH*>* OJMBOGGMIKO; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::HMCABIPPLNK DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADMBMABOKO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NADMBMABOKO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADMBMABOKO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NADMBMABOKO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NADMBMABOKO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADMBMABOKO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADMBMABOKO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADMBMABOKO_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADMBMABOKO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADMBMABOKO_NAMKJOJBAOA_OFFSET))(this);
	}

	::KMIBDNFFHCH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KMIBDNFFHCH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NADMBMABOKO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NADMBMABOKO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
