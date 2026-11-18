#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCBPBBKADEJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class BKIBLDBNEJK;
namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IEOJJBKMBON_BBCNKJGIJDO_OFFSET UNITYSDK_OFFSET(0x1B8869B0)
#define IEOJJBKMBON_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B8871C0)
#define IEOJJBKMBON_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B8869A0)
#define IEOJJBKMBON_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B887010)
#define IEOJJBKMBON_DKNEAIGMOJI_OFFSET UNITYSDK_OFFSET(0x1B8876E0)
#define IEOJJBKMBON_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1B887400)
#define IEOJJBKMBON_FBBDFGINJDE_OFFSET UNITYSDK_OFFSET(0x1B887AE0)
#define IEOJJBKMBON_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B8870D0)
#define IEOJJBKMBON_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B887140)
#define IEOJJBKMBON_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1B8874F0)
#define IEOJJBKMBON_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B887980)
#define IEOJJBKMBON_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B886630)
#define IEOJJBKMBON_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B8874D0)
#define IEOJJBKMBON_NHAGKJPAFLK_OFFSET UNITYSDK_OFFSET(0x1B887930)
#define IEOJJBKMBON_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B886610)
#define IEOJJBKMBON_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B8867B0)
#define IEOJJBKMBON__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8872A0)

inline static constexpr unsigned int IEOJJBKMBON_TypeDefinitionIndex = 11141;

class IEOJJBKMBON : public ::System::Object
{
public:
	::KCBPBBKADEJ DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::BKIBLDBNEJK*>*>* HBIHOBDPBJH; // 0x28
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LHINHLCKHNE; // 0x30
	::Foundation::DoubleKeyDictionary_3<::System::Int32, ::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::BKIBLDBNEJK*>* OAPOMEMFNIK; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* LHEJBMLMICH; // 0x48
	::Il2CppArray<::BKIBLDBNEJK*>* OJMBOGGMIKO; // 0x50
	::System::Action* PLDOELOOFLL; // 0x58
	::System::Boolean DLGKLGKOMHK; // 0x60
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOJJBKMBON__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOJJBKMBON_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOJJBKMBON_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOJJBKMBON_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOJJBKMBON_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IEOJJBKMBON_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IEOJJBKMBON_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOJJBKMBON_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::BKIBLDBNEJK*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::BKIBLDBNEJK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOJJBKMBON_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOJJBKMBON_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void DKNEAIGMOJI(::System::Int32 KCJHDEGPBNI, ::System::Int64 OBBNFFLMGPD, ::System::Int32& MOBNMDEDJIP, ::System::Int64& HKAPHMDMDNA, ::System::Int64& JDCFMOGICFB, ::System::Boolean& LGNCIPJFOJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int64, ::System::Int32&, ::System::Int64&, ::System::Int64&, ::System::Boolean&))((::PBYTE)hIl2Cpp + IEOJJBKMBON_DKNEAIGMOJI_OFFSET))(this, KCJHDEGPBNI, OBBNFFLMGPD, MOBNMDEDJIP, HKAPHMDMDNA, JDCFMOGICFB, LGNCIPJFOJF);
	}

	::System::Collections::Generic::List_1<::System::Int32>* NHAGKJPAFLK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOJJBKMBON_NHAGKJPAFLK_OFFSET))(this);
	}

	::System::Void BBCNKJGIJDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOJJBKMBON_BBCNKJGIJDO_OFFSET))(this);
	}

	::BKIBLDBNEJK* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::BKIBLDBNEJK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IEOJJBKMBON_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IEOJJBKMBON_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOJJBKMBON_CHLEALKAOJO_OFFSET))(this);
	}

	::BKIBLDBNEJK* FBBDFGINJDE(::System::Int32 APKIKLPPHEA)
	{
		return ((::BKIBLDBNEJK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IEOJJBKMBON_FBBDFGINJDE_OFFSET))(this, APKIKLPPHEA);
	}
};
