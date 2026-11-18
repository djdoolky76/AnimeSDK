#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LGKMOMPAKJA.h"
#include "unitysdk/System/Object.h"

class EDNIJMAEMEF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NGKAPHPDNMA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B32B450)
#define NGKAPHPDNMA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B32B1E0)
#define NGKAPHPDNMA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B32B390)
#define NGKAPHPDNMA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B32B530)
#define NGKAPHPDNMA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B32B1F0)
#define NGKAPHPDNMA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B32AE30)
#define NGKAPHPDNMA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B32AE10)
#define NGKAPHPDNMA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B32B0F0)
#define NGKAPHPDNMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B32B660)

inline static constexpr unsigned int NGKAPHPDNMA_TypeDefinitionIndex = 12069;

class NGKAPHPDNMA : public ::System::Object
{
public:
	::Il2CppArray<::EDNIJMAEMEF*>* OJMBOGGMIKO; // 0x10
	::LGKMOMPAKJA DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKAPHPDNMA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKAPHPDNMA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKAPHPDNMA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NGKAPHPDNMA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NGKAPHPDNMA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKAPHPDNMA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKAPHPDNMA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKAPHPDNMA_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKAPHPDNMA_CHLEALKAOJO_OFFSET))(this);
	}
};
