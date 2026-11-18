#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKKGODOPALF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NFDLNDMLICC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MBJLHDAEBGG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17340DF0)
#define MBJLHDAEBGG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17340B80)
#define MBJLHDAEBGG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17340D30)
#define MBJLHDAEBGG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17340ED0)
#define MBJLHDAEBGG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17340B90)
#define MBJLHDAEBGG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x173407D0)
#define MBJLHDAEBGG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x173407B0)
#define MBJLHDAEBGG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17340A90)
#define MBJLHDAEBGG__CTOR_OFFSET UNITYSDK_OFFSET(0x17341000)

inline static constexpr unsigned int MBJLHDAEBGG_TypeDefinitionIndex = 17060;

class MBJLHDAEBGG : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::HKKGODOPALF DHDJDGFNBOA; // 0x20
	::Il2CppArray<::NFDLNDMLICC*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJLHDAEBGG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJLHDAEBGG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJLHDAEBGG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MBJLHDAEBGG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MBJLHDAEBGG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJLHDAEBGG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJLHDAEBGG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJLHDAEBGG_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJLHDAEBGG_CHLEALKAOJO_OFFSET))(this);
	}
};
