#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NDODOKOAEJM.h"
#include "unitysdk/System/Object.h"

class BLPJHNGACIL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MNABIDNCNFM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x195A9910)
#define MNABIDNCNFM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x195A9690)
#define MNABIDNCNFM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x195A96A0)
#define MNABIDNCNFM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x195A9760)
#define MNABIDNCNFM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x195A9890)
#define MNABIDNCNFM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x195A9D10)
#define MNABIDNCNFM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x195A9A60)
#define MNABIDNCNFM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x195A92E0)
#define MNABIDNCNFM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x195A9A40)
#define MNABIDNCNFM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x195A92C0)
#define MNABIDNCNFM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x195A95A0)
#define MNABIDNCNFM__CTOR_OFFSET UNITYSDK_OFFSET(0x195A99F0)

inline static constexpr unsigned int MNABIDNCNFM_TypeDefinitionIndex = 11779;

class MNABIDNCNFM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::NDODOKOAEJM DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::BLPJHNGACIL*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNABIDNCNFM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNABIDNCNFM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNABIDNCNFM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNABIDNCNFM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNABIDNCNFM_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MNABIDNCNFM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MNABIDNCNFM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNABIDNCNFM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNABIDNCNFM_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MNABIDNCNFM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::BLPJHNGACIL* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BLPJHNGACIL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNABIDNCNFM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNABIDNCNFM_CHLEALKAOJO_OFFSET))(this);
	}
};
