#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHFJNJIAJAG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AGFKKBMENBK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OCMJDMLEKOB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18E28EE0)
#define OCMJDMLEKOB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18E28CB0)
#define OCMJDMLEKOB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18E28E20)
#define OCMJDMLEKOB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18E28FC0)
#define OCMJDMLEKOB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18E28CC0)
#define OCMJDMLEKOB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18E29310)
#define OCMJDMLEKOB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18E29140)
#define OCMJDMLEKOB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18E28910)
#define OCMJDMLEKOB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18E29540)
#define OCMJDMLEKOB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18E288F0)
#define OCMJDMLEKOB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18E28BD0)
#define OCMJDMLEKOB__CTOR_OFFSET UNITYSDK_OFFSET(0x18E290F0)

inline static constexpr unsigned int OCMJDMLEKOB_TypeDefinitionIndex = 15754;

class OCMJDMLEKOB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::AGFKKBMENBK*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::EHFJNJIAJAG DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMJDMLEKOB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMJDMLEKOB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMJDMLEKOB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OCMJDMLEKOB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OCMJDMLEKOB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMJDMLEKOB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMJDMLEKOB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMJDMLEKOB_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OCMJDMLEKOB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMJDMLEKOB_CHLEALKAOJO_OFFSET))(this);
	}

	::AGFKKBMENBK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::AGFKKBMENBK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCMJDMLEKOB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMJDMLEKOB_NAMKJOJBAOA_OFFSET))(this);
	}
};
