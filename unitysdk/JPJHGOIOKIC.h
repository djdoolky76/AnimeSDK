#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEOCEOAKCEN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GGACCHJLKGM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JPJHGOIOKIC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B63CDA0)
#define JPJHGOIOKIC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B63CB60)
#define JPJHGOIOKIC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B63CCE0)
#define JPJHGOIOKIC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B63CE80)
#define JPJHGOIOKIC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B63CB70)
#define JPJHGOIOKIC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B63D000)
#define JPJHGOIOKIC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B63C7B0)
#define JPJHGOIOKIC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B63C790)
#define JPJHGOIOKIC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B63CA70)
#define JPJHGOIOKIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B63CFB0)

inline static constexpr unsigned int JPJHGOIOKIC_TypeDefinitionIndex = 12181;

class JPJHGOIOKIC : public ::System::Object
{
public:
	::FEOCEOAKCEN DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::GGACCHJLKGM*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJHGOIOKIC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJHGOIOKIC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJHGOIOKIC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JPJHGOIOKIC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JPJHGOIOKIC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJHGOIOKIC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJHGOIOKIC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJHGOIOKIC_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JPJHGOIOKIC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJHGOIOKIC_CHLEALKAOJO_OFFSET))(this);
	}
};
