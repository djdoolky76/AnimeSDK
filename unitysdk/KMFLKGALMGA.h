#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OAMNALFNKEO.h"
#include "unitysdk/System/Object.h"

class ENDPKEHELIM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KMFLKGALMGA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A50F3C0)
#define KMFLKGALMGA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A50F200)
#define KMFLKGALMGA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x190F3890)
#define KMFLKGALMGA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A50F210)
#define KMFLKGALMGA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A50F340)
#define KMFLKGALMGA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A50F510)
#define KMFLKGALMGA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x190F36B0)
#define KMFLKGALMGA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A50EE50)
#define KMFLKGALMGA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A50F4F0)
#define KMFLKGALMGA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A50EE30)
#define KMFLKGALMGA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A50F110)
#define KMFLKGALMGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A50F4A0)

inline static constexpr unsigned int KMFLKGALMGA_TypeDefinitionIndex = 11236;

class KMFLKGALMGA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::OAMNALFNKEO DHDJDGFNBOA; // 0x20
	::Il2CppArray<::ENDPKEHELIM*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFLKGALMGA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFLKGALMGA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFLKGALMGA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFLKGALMGA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFLKGALMGA_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KMFLKGALMGA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KMFLKGALMGA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFLKGALMGA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFLKGALMGA_NAMKJOJBAOA_OFFSET))(this);
	}

	::ENDPKEHELIM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ENDPKEHELIM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KMFLKGALMGA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KMFLKGALMGA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFLKGALMGA_CHLEALKAOJO_OFFSET))(this);
	}
};
