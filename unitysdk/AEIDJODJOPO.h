#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALFOHEKOMKM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JGDAONENDJJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define AEIDJODJOPO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C504230)
#define AEIDJODJOPO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C503FF0)
#define AEIDJODJOPO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C504170)
#define AEIDJODJOPO_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1C504860)
#define AEIDJODJOPO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C504310)
#define AEIDJODJOPO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C504000)
#define AEIDJODJOPO_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1C504490)
#define AEIDJODJOPO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C504690)
#define AEIDJODJOPO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C503C40)
#define AEIDJODJOPO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C504670)
#define AEIDJODJOPO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C503C20)
#define AEIDJODJOPO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C503F00)
#define AEIDJODJOPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C504440)

inline static constexpr unsigned int AEIDJODJOPO_TypeDefinitionIndex = 14078;

class AEIDJODJOPO : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::JGDAONENDJJ*>* OJMBOGGMIKO; // 0x18
	::ALFOHEKOMKM DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIDJODJOPO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIDJODJOPO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIDJODJOPO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AEIDJODJOPO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AEIDJODJOPO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIDJODJOPO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIDJODJOPO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIDJODJOPO_FINALIZE_OFFSET))(this);
	}

	::JGDAONENDJJ* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::JGDAONENDJJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AEIDJODJOPO_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIDJODJOPO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AEIDJODJOPO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIDJODJOPO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::JGDAONENDJJ*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::JGDAONENDJJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIDJODJOPO_EJABHIAHIAN_OFFSET))(this);
	}
};
