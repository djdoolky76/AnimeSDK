#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NDINNOEPEMI.h"
#include "unitysdk/System/Object.h"

class DNOLGJLIOIE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define COAKAKGAIHA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x187932F0)
#define COAKAKGAIHA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x187930B0)
#define COAKAKGAIHA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18793230)
#define COAKAKGAIHA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x187933D0)
#define COAKAKGAIHA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x187930C0)
#define COAKAKGAIHA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18793740)
#define COAKAKGAIHA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18793550)
#define COAKAKGAIHA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18792D00)
#define COAKAKGAIHA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18793720)
#define COAKAKGAIHA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18792CE0)
#define COAKAKGAIHA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18792FC0)
#define COAKAKGAIHA__CTOR_OFFSET UNITYSDK_OFFSET(0x18793500)

inline static constexpr unsigned int COAKAKGAIHA_TypeDefinitionIndex = 17607;

class COAKAKGAIHA : public ::System::Object
{
public:
	::Il2CppArray<::DNOLGJLIOIE*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::NDINNOEPEMI DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAKAKGAIHA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COAKAKGAIHA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAKAKGAIHA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + COAKAKGAIHA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + COAKAKGAIHA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAKAKGAIHA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAKAKGAIHA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAKAKGAIHA_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + COAKAKGAIHA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAKAKGAIHA_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAKAKGAIHA_CHLEALKAOJO_OFFSET))(this);
	}

	::DNOLGJLIOIE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DNOLGJLIOIE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COAKAKGAIHA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
