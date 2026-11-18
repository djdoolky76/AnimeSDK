#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENKNLCIELCF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LEOHLLPEOED;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HFCJJGKDKAJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B876A10)
#define HFCJJGKDKAJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B8767E0)
#define HFCJJGKDKAJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B876950)
#define HFCJJGKDKAJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B876AF0)
#define HFCJJGKDKAJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B8767F0)
#define HFCJJGKDKAJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B876C70)
#define HFCJJGKDKAJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B876440)
#define HFCJJGKDKAJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B876420)
#define HFCJJGKDKAJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B876700)
#define HFCJJGKDKAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B876C20)

inline static constexpr unsigned int HFCJJGKDKAJ_TypeDefinitionIndex = 10131;

class HFCJJGKDKAJ : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::LEOHLLPEOED*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::ENKNLCIELCF DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCJJGKDKAJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCJJGKDKAJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCJJGKDKAJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HFCJJGKDKAJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HFCJJGKDKAJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCJJGKDKAJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCJJGKDKAJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCJJGKDKAJ_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HFCJJGKDKAJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCJJGKDKAJ_CHLEALKAOJO_OFFSET))(this);
	}
};
