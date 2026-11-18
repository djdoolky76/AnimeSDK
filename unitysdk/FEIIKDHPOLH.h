#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MEPFPODNHPG.h"
#include "unitysdk/System/Object.h"

class DCHHLAANPFI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FEIIKDHPOLH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B860470)
#define FEIIKDHPOLH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B8601F0)
#define FEIIKDHPOLH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B860200)
#define FEIIKDHPOLH_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1B8605A0)
#define FEIIKDHPOLH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B8602C0)
#define FEIIKDHPOLH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B8603F0)
#define FEIIKDHPOLH_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1B860690)
#define FEIIKDHPOLH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B860870)
#define FEIIKDHPOLH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B85FE40)
#define FEIIKDHPOLH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B860670)
#define FEIIKDHPOLH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B85FE20)
#define FEIIKDHPOLH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B860100)
#define FEIIKDHPOLH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B860550)

inline static constexpr unsigned int FEIIKDHPOLH_TypeDefinitionIndex = 13384;

class FEIIKDHPOLH : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::DCHHLAANPFI*>* OJMBOGGMIKO; // 0x20
	::MEPFPODNHPG DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIIKDHPOLH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIIKDHPOLH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIIKDHPOLH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIIKDHPOLH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIIKDHPOLH_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FEIIKDHPOLH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FEIIKDHPOLH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIIKDHPOLH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::DCHHLAANPFI*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::DCHHLAANPFI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIIKDHPOLH_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIIKDHPOLH_CHLEALKAOJO_OFFSET))(this);
	}

	::DCHHLAANPFI* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::DCHHLAANPFI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FEIIKDHPOLH_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FEIIKDHPOLH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIIKDHPOLH_NAMKJOJBAOA_OFFSET))(this);
	}
};
