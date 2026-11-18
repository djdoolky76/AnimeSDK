#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBKHAJMLEBG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MEOGHGLOALN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JAPIEKKIMLB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x161136D0)
#define JAPIEKKIMLB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x16113450)
#define JAPIEKKIMLB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x16113460)
#define JAPIEKKIMLB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16113520)
#define JAPIEKKIMLB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x16113650)
#define JAPIEKKIMLB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x16113800)
#define JAPIEKKIMLB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x16113A50)
#define JAPIEKKIMLB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x161130A0)
#define JAPIEKKIMLB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x16113A30)
#define JAPIEKKIMLB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x16113080)
#define JAPIEKKIMLB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16113360)
#define JAPIEKKIMLB__CTOR_OFFSET UNITYSDK_OFFSET(0x161137B0)

inline static constexpr unsigned int JAPIEKKIMLB_TypeDefinitionIndex = 10349;

class JAPIEKKIMLB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::Il2CppArray<::MEOGHGLOALN*>* OJMBOGGMIKO; // 0x28
	::HBKHAJMLEBG DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPIEKKIMLB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPIEKKIMLB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPIEKKIMLB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPIEKKIMLB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPIEKKIMLB_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JAPIEKKIMLB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JAPIEKKIMLB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPIEKKIMLB_BHLAEBMEOLO_OFFSET))(this);
	}

	::MEOGHGLOALN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MEOGHGLOALN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JAPIEKKIMLB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JAPIEKKIMLB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPIEKKIMLB_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPIEKKIMLB_CHLEALKAOJO_OFFSET))(this);
	}
};
