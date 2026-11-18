#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGOOCNBKKIG.h"
#include "unitysdk/MHOBPPAJKIL.h"

class EAIOHODECAO;
class OMPFPLKPOGG;
class PHICPBCACKJ;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JOENLEGDODF_JLCAGKNAIFH_1_OFFSET UNITYSDK_OFFSET(0x1ED6DBB0)
#define JOENLEGDODF_JLCAGKNAIFH_OFFSET UNITYSDK_OFFSET(0x1ED6DAF0)
#define JOENLEGDODF_JLEHLFMOLAH_OFFSET UNITYSDK_OFFSET(0x1ED6DA30)
#define JOENLEGDODF_KBINOKNOLPA_OFFSET UNITYSDK_OFFSET(0x1ED65E10)
#define JOENLEGDODF_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1ED6D9A0)
#define JOENLEGDODF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1ED6D950)
#define JOENLEGDODF__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED6D9E0)

inline static constexpr unsigned int JOENLEGDODF_TypeDefinitionIndex = 94876;

class JOENLEGDODF : public ::MHOBPPAJKIL
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* MJLNHIHKPKF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOENLEGDODF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + JOENLEGDODF_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOENLEGDODF_KMMIPNMJILI_OFFSET))(this);
	}

	static ::System::Void JLEHLFMOLAH(::PHICPBCACKJ* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PHICPBCACKJ*))((::PBYTE)hIl2Cpp + JOENLEGDODF_JLEHLFMOLAH_OFFSET))(KECKGDFIALJ);
	}

	::System::Void JLCAGKNAIFH(::OMPFPLKPOGG* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::OMPFPLKPOGG*))((::PBYTE)hIl2Cpp + JOENLEGDODF_JLCAGKNAIFH_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void JLCAGKNAIFH_1(::System::UInt32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOENLEGDODF_JLCAGKNAIFH_1_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Collections::Generic::List_1<::PHICPBCACKJ*>* KBINOKNOLPA(::AGOOCNBKKIG MKCOMJHINNJ, ::System::UInt32 ICDKFBBNNFP)
	{
		return ((::System::Collections::Generic::List_1<::PHICPBCACKJ*>*(*)(::PVOID, ::AGOOCNBKKIG, ::System::UInt32))((::PBYTE)hIl2Cpp + JOENLEGDODF_KBINOKNOLPA_OFFSET))(this, MKCOMJHINNJ, ICDKFBBNNFP);
	}
};
