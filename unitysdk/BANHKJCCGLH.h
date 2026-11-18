#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FACOLHPBFDM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LJCFHGDNLPL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BANHKJCCGLH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A169010)
#define BANHKJCCGLH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A168DD0)
#define BANHKJCCGLH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A168F50)
#define BANHKJCCGLH_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1A169610)
#define BANHKJCCGLH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A1690F0)
#define BANHKJCCGLH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A168DE0)
#define BANHKJCCGLH_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1A169420)
#define BANHKJCCGLH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A169230)
#define BANHKJCCGLH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A168A20)
#define BANHKJCCGLH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A169400)
#define BANHKJCCGLH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A168A00)
#define BANHKJCCGLH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A168CE0)
#define BANHKJCCGLH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A169220)

inline static constexpr unsigned int BANHKJCCGLH_TypeDefinitionIndex = 13942;

class BANHKJCCGLH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::FACOLHPBFDM DHDJDGFNBOA; // 0x18
	::Il2CppArray<::LJCFHGDNLPL*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANHKJCCGLH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANHKJCCGLH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANHKJCCGLH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BANHKJCCGLH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BANHKJCCGLH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANHKJCCGLH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANHKJCCGLH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANHKJCCGLH_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BANHKJCCGLH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANHKJCCGLH_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANHKJCCGLH_CHLEALKAOJO_OFFSET))(this);
	}

	::LJCFHGDNLPL* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::LJCFHGDNLPL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANHKJCCGLH_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::LJCFHGDNLPL*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::LJCFHGDNLPL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANHKJCCGLH_EJABHIAHIAN_OFFSET))(this);
	}
};
