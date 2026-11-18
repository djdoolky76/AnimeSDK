#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PPLNIHJMJJA.h"
#include "unitysdk/System/Object.h"

class LFIJFAJFKMB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JGDDPCJJCND_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17C26350)
#define JGDDPCJJCND_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17C26110)
#define JGDDPCJJCND_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17C26290)
#define JGDDPCJJCND_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17C26430)
#define JGDDPCJJCND_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17C26120)
#define JGDDPCJJCND_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17C267A0)
#define JGDDPCJJCND_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17C265B0)
#define JGDDPCJJCND_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17C25D60)
#define JGDDPCJJCND_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17C26780)
#define JGDDPCJJCND_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17C25D40)
#define JGDDPCJJCND_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17C26020)
#define JGDDPCJJCND__CTOR_OFFSET UNITYSDK_OFFSET(0x17C26560)

inline static constexpr unsigned int JGDDPCJJCND_TypeDefinitionIndex = 14118;

class JGDDPCJJCND : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::PPLNIHJMJJA DHDJDGFNBOA; // 0x20
	::Il2CppArray<::LFIJFAJFKMB*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDDPCJJCND__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDDPCJJCND_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDDPCJJCND_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JGDDPCJJCND_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JGDDPCJJCND_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDDPCJJCND_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDDPCJJCND_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDDPCJJCND_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JGDDPCJJCND_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDDPCJJCND_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDDPCJJCND_NAMKJOJBAOA_OFFSET))(this);
	}

	::LFIJFAJFKMB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LFIJFAJFKMB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JGDDPCJJCND_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
