#pragma once
#include "unitysdk/unitysdk.h"

class DMHOLJNNCJA_FIMJMKHPCBG;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DMHOLJNNCJA_GIFBADNLHAC_BLPPEDPHMCL_OFFSET UNITYSDK_OFFSET(0x149BEBD0)
#define DMHOLJNNCJA_GIFBADNLHAC_DOMBJBLNKLN_OFFSET UNITYSDK_OFFSET(0x149BF220)
#define DMHOLJNNCJA_GIFBADNLHAC_GNKELAECDNC_OFFSET UNITYSDK_OFFSET(0x149BE890)
#define DMHOLJNNCJA_GIFBADNLHAC_JHHPFGMDEPA_OFFSET UNITYSDK_OFFSET(0x149BEDF0)
#define DMHOLJNNCJA_GIFBADNLHAC__CTOR_OFFSET UNITYSDK_OFFSET(0x149BE850)

inline static constexpr unsigned int DMHOLJNNCJA_GIFBADNLHAC_TypeDefinitionIndex = 46946;

class DMHOLJNNCJA_GIFBADNLHAC
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* MOMJBLBBKGK; // 0x48
	::System::Int32 LHFPIJKBHHI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_GIFBADNLHAC__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* GNKELAECDNC()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_GIFBADNLHAC_GNKELAECDNC_OFFSET))(this);
	}

	::System::Boolean BLPPEDPHMCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_GIFBADNLHAC_BLPPEDPHMCL_OFFSET))(this);
	}

	::System::Int32 JHHPFGMDEPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_GIFBADNLHAC_JHHPFGMDEPA_OFFSET))(this);
	}

	::DMHOLJNNCJA_FIMJMKHPCBG* DOMBJBLNKLN()
	{
		return ((::DMHOLJNNCJA_FIMJMKHPCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_GIFBADNLHAC_DOMBJBLNKLN_OFFSET))(this);
	}
};
