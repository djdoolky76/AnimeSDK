#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NLBGECNFNLP.h"
#include "unitysdk/System/Object.h"

class FICMFIFLBEC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define AGIPDHOKKFC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1571FB30)
#define AGIPDHOKKFC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1571F900)
#define AGIPDHOKKFC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1571FA70)
#define AGIPDHOKKFC_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1571FF80)
#define AGIPDHOKKFC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1571FC10)
#define AGIPDHOKKFC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1571F910)
#define AGIPDHOKKFC_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x15720050)
#define AGIPDHOKKFC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1571FDB0)
#define AGIPDHOKKFC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1571F560)
#define AGIPDHOKKFC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1571FD90)
#define AGIPDHOKKFC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1571F540)
#define AGIPDHOKKFC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1571F820)
#define AGIPDHOKKFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1571FD40)

inline static constexpr unsigned int AGIPDHOKKFC_TypeDefinitionIndex = 9931;

class AGIPDHOKKFC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::FICMFIFLBEC*>* OJMBOGGMIKO; // 0x18
	::NLBGECNFNLP DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIPDHOKKFC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIPDHOKKFC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIPDHOKKFC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AGIPDHOKKFC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AGIPDHOKKFC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIPDHOKKFC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIPDHOKKFC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIPDHOKKFC_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIPDHOKKFC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIPDHOKKFC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AGIPDHOKKFC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::FICMFIFLBEC*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::FICMFIFLBEC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIPDHOKKFC_EJABHIAHIAN_OFFSET))(this);
	}

	::FICMFIFLBEC* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::FICMFIFLBEC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGIPDHOKKFC_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
