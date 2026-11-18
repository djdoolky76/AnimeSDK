#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMNOBGGPKAG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FCCBIAIBJCI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PJLJMAPKEHG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19144D40)
#define PJLJMAPKEHG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19144AD0)
#define PJLJMAPKEHG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19144C80)
#define PJLJMAPKEHG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19144E20)
#define PJLJMAPKEHG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19144AE0)
#define PJLJMAPKEHG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19144FC0)
#define PJLJMAPKEHG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19144720)
#define PJLJMAPKEHG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19144FA0)
#define PJLJMAPKEHG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19144700)
#define PJLJMAPKEHG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x191449E0)
#define PJLJMAPKEHG__CTOR_OFFSET UNITYSDK_OFFSET(0x19144F50)

inline static constexpr unsigned int PJLJMAPKEHG_TypeDefinitionIndex = 15324;

class PJLJMAPKEHG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::JMNOBGGPKAG DHDJDGFNBOA; // 0x18
	::Il2CppArray<::FCCBIAIBJCI*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJMAPKEHG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJMAPKEHG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJMAPKEHG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PJLJMAPKEHG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PJLJMAPKEHG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJMAPKEHG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJMAPKEHG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJMAPKEHG_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJMAPKEHG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJMAPKEHG_NAMKJOJBAOA_OFFSET))(this);
	}

	::FCCBIAIBJCI* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FCCBIAIBJCI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PJLJMAPKEHG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
