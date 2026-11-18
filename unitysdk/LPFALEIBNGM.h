#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NCILMBMHCNK.h"
#include "unitysdk/System/Object.h"

class MLPKNFFCNCO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LPFALEIBNGM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x195967B0)
#define LPFALEIBNGM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19596550)
#define LPFALEIBNGM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x195966F0)
#define LPFALEIBNGM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19596890)
#define LPFALEIBNGM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19596560)
#define LPFALEIBNGM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19596A10)
#define LPFALEIBNGM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x195961B0)
#define LPFALEIBNGM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19596C80)
#define LPFALEIBNGM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19596190)
#define LPFALEIBNGM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19596470)
#define LPFALEIBNGM__CTOR_OFFSET UNITYSDK_OFFSET(0x195969C0)

inline static constexpr unsigned int LPFALEIBNGM_TypeDefinitionIndex = 13152;

class LPFALEIBNGM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::MLPKNFFCNCO*>* OJMBOGGMIKO; // 0x18
	::NCILMBMHCNK DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFALEIBNGM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFALEIBNGM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFALEIBNGM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LPFALEIBNGM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LPFALEIBNGM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFALEIBNGM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFALEIBNGM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFALEIBNGM_FINALIZE_OFFSET))(this);
	}

	::MLPKNFFCNCO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MLPKNFFCNCO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPFALEIBNGM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFALEIBNGM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFALEIBNGM_NAMKJOJBAOA_OFFSET))(this);
	}
};
