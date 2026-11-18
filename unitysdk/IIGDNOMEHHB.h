#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDONIHDHDFK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LCCLAEBMOFA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IIGDNOMEHHB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x161095B0)
#define IIGDNOMEHHB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x16109340)
#define IIGDNOMEHHB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x161094F0)
#define IIGDNOMEHHB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16109690)
#define IIGDNOMEHHB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x16109350)
#define IIGDNOMEHHB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x16108F90)
#define IIGDNOMEHHB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x16108F70)
#define IIGDNOMEHHB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16109250)
#define IIGDNOMEHHB__CTOR_OFFSET UNITYSDK_OFFSET(0x161097C0)

inline static constexpr unsigned int IIGDNOMEHHB_TypeDefinitionIndex = 14520;

class IIGDNOMEHHB : public ::System::Object
{
public:
	::HDONIHDHDFK DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::LCCLAEBMOFA*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGDNOMEHHB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGDNOMEHHB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGDNOMEHHB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IIGDNOMEHHB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IIGDNOMEHHB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGDNOMEHHB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGDNOMEHHB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGDNOMEHHB_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGDNOMEHHB_CHLEALKAOJO_OFFSET))(this);
	}
};
