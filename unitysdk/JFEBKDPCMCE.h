#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LOONALDAHDO.h"
#include "unitysdk/System/Object.h"

class DMCOENMKCFF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JFEBKDPCMCE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15AA8180)
#define JFEBKDPCMCE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15AA7F40)
#define JFEBKDPCMCE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15AA80C0)
#define JFEBKDPCMCE_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x15AA8770)
#define JFEBKDPCMCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15AA8260)
#define JFEBKDPCMCE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15AA7F50)
#define JFEBKDPCMCE_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x15AA83E0)
#define JFEBKDPCMCE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15AA85A0)
#define JFEBKDPCMCE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15AA7B90)
#define JFEBKDPCMCE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15AA7B70)
#define JFEBKDPCMCE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15AA7E50)
#define JFEBKDPCMCE__CTOR_OFFSET UNITYSDK_OFFSET(0x15AA8390)

inline static constexpr unsigned int JFEBKDPCMCE_TypeDefinitionIndex = 17665;

class JFEBKDPCMCE : public ::System::Object
{
public:
	::LOONALDAHDO DHDJDGFNBOA; // 0x10
	::Il2CppArray<::DMCOENMKCFF*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEBKDPCMCE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEBKDPCMCE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEBKDPCMCE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JFEBKDPCMCE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JFEBKDPCMCE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEBKDPCMCE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEBKDPCMCE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEBKDPCMCE_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEBKDPCMCE_CHLEALKAOJO_OFFSET))(this);
	}

	::DMCOENMKCFF* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::DMCOENMKCFF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JFEBKDPCMCE_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JFEBKDPCMCE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::DMCOENMKCFF*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::DMCOENMKCFF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEBKDPCMCE_EJABHIAHIAN_OFFSET))(this);
	}
};
