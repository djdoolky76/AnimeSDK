#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOKEHNCKJCB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GIIHPNGIDOM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JCEGOGNOKGI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAEFF10)
#define JCEGOGNOKGI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAEFCD0)
#define JCEGOGNOKGI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BAEFE50)
#define JCEGOGNOKGI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAEFFF0)
#define JCEGOGNOKGI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAEFCE0)
#define JCEGOGNOKGI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BAF0190)
#define JCEGOGNOKGI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAF03C0)
#define JCEGOGNOKGI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAEF920)
#define JCEGOGNOKGI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BAF0170)
#define JCEGOGNOKGI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAEF900)
#define JCEGOGNOKGI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAEFBE0)
#define JCEGOGNOKGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAF0120)

inline static constexpr unsigned int JCEGOGNOKGI_TypeDefinitionIndex = 11207;

class JCEGOGNOKGI : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::GIIHPNGIDOM*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::FOKEHNCKJCB DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGOGNOKGI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGOGNOKGI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGOGNOKGI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JCEGOGNOKGI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JCEGOGNOKGI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGOGNOKGI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGOGNOKGI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGOGNOKGI_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGOGNOKGI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEGOGNOKGI_CHLEALKAOJO_OFFSET))(this);
	}

	::GIIHPNGIDOM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GIIHPNGIDOM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JCEGOGNOKGI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JCEGOGNOKGI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
