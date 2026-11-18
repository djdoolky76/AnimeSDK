#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEIEPCGBPMI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class GHJJDPKGDEB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NCMBHLNKNDA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AB13790)
#define NCMBHLNKNDA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AB13560)
#define NCMBHLNKNDA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AB136D0)
#define NCMBHLNKNDA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AB13870)
#define NCMBHLNKNDA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AB13570)
#define NCMBHLNKNDA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AB139F0)
#define NCMBHLNKNDA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AB13200)
#define NCMBHLNKNDA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AB131E0)
#define NCMBHLNKNDA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AB13480)
#define NCMBHLNKNDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB139A0)

inline static constexpr unsigned int NCMBHLNKNDA_TypeDefinitionIndex = 16310;

class NCMBHLNKNDA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::GHJJDPKGDEB*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x20
	::CEIEPCGBPMI DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCMBHLNKNDA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCMBHLNKNDA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCMBHLNKNDA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NCMBHLNKNDA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NCMBHLNKNDA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCMBHLNKNDA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCMBHLNKNDA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCMBHLNKNDA_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NCMBHLNKNDA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCMBHLNKNDA_CHLEALKAOJO_OFFSET))(this);
	}
};
