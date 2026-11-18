#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OEHHJPDIIIP.h"
#include "unitysdk/System/Object.h"

class JCOEIHOJDPN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NNEIHFGGAME_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AB19F80)
#define NNEIHFGGAME_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AB19D40)
#define NNEIHFGGAME_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AB19EC0)
#define NNEIHFGGAME_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AB1A060)
#define NNEIHFGGAME_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AB19D50)
#define NNEIHFGGAME_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1AB1A3D0)
#define NNEIHFGGAME_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AB1A1E0)
#define NNEIHFGGAME_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AB19990)
#define NNEIHFGGAME_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AB1A3B0)
#define NNEIHFGGAME_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AB19970)
#define NNEIHFGGAME_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AB19C50)
#define NNEIHFGGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB1A190)

inline static constexpr unsigned int NNEIHFGGAME_TypeDefinitionIndex = 11121;

class NNEIHFGGAME : public ::System::Object
{
public:
	::Il2CppArray<::JCOEIHOJDPN*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::OEHHJPDIIIP DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIHFGGAME__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIHFGGAME_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIHFGGAME_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NNEIHFGGAME_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NNEIHFGGAME_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIHFGGAME_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIHFGGAME_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIHFGGAME_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NNEIHFGGAME_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIHFGGAME_NAMKJOJBAOA_OFFSET))(this);
	}

	::JCOEIHOJDPN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JCOEIHOJDPN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NNEIHFGGAME_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEIHFGGAME_CHLEALKAOJO_OFFSET))(this);
	}
};
