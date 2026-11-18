#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NMHJDIHELEA.h"
#include "unitysdk/System/Object.h"

class EGDGIOLMHME;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MADBBNJOOML_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B656F20)
#define MADBBNJOOML_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B656CE0)
#define MADBBNJOOML_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B656E60)
#define MADBBNJOOML_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B657000)
#define MADBBNJOOML_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B656CF0)
#define MADBBNJOOML_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1B657350)
#define MADBBNJOOML_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B657550)
#define MADBBNJOOML_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B657180)
#define MADBBNJOOML_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B656930)
#define MADBBNJOOML_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B657530)
#define MADBBNJOOML_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B656910)
#define MADBBNJOOML_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B656BF0)
#define MADBBNJOOML__CTOR_OFFSET UNITYSDK_OFFSET(0x1B657130)

inline static constexpr unsigned int MADBBNJOOML_TypeDefinitionIndex = 11487;

class MADBBNJOOML : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::NMHJDIHELEA DHDJDGFNBOA; // 0x20
	::Il2CppArray<::EGDGIOLMHME*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADBBNJOOML__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MADBBNJOOML_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADBBNJOOML_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MADBBNJOOML_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MADBBNJOOML_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADBBNJOOML_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADBBNJOOML_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADBBNJOOML_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADBBNJOOML_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MADBBNJOOML_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::EGDGIOLMHME* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::EGDGIOLMHME*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MADBBNJOOML_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::EGDGIOLMHME* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EGDGIOLMHME*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MADBBNJOOML_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADBBNJOOML_NAMKJOJBAOA_OFFSET))(this);
	}
};
