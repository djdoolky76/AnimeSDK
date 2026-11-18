#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHCLOMHADLM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GEBMBDOGNBO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BAGBCEEKOGJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C50FC80)
#define BAGBCEEKOGJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C50FA40)
#define BAGBCEEKOGJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C50FBC0)
#define BAGBCEEKOGJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C50FD60)
#define BAGBCEEKOGJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C50FA50)
#define BAGBCEEKOGJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C50FEE0)
#define BAGBCEEKOGJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C50F690)
#define BAGBCEEKOGJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C50F670)
#define BAGBCEEKOGJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C50F950)
#define BAGBCEEKOGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C50FE90)

inline static constexpr unsigned int BAGBCEEKOGJ_TypeDefinitionIndex = 17023;

class BAGBCEEKOGJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::EHCLOMHADLM DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::GEBMBDOGNBO*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGBCEEKOGJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGBCEEKOGJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGBCEEKOGJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BAGBCEEKOGJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BAGBCEEKOGJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGBCEEKOGJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGBCEEKOGJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGBCEEKOGJ_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGBCEEKOGJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BAGBCEEKOGJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
