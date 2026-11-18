#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMEDFOINBOG.h"

class CFCKIPEGOKN;
class HHLMDPLGLBP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DONOKLOMOCF_AINIBDOJFPK_OFFSET UNITYSDK_OFFSET(0x1F00FE80)
#define DONOKLOMOCF_EMPKCOADOBH_OFFSET UNITYSDK_OFFSET(0x1F00FA90)
#define DONOKLOMOCF_JLEHIGKAMKJ_OFFSET UNITYSDK_OFFSET(0x1F010250)
#define DONOKLOMOCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0100F0)

inline static constexpr unsigned int DONOKLOMOCF_TypeDefinitionIndex = 36095;

class DONOKLOMOCF : public ::LMEDFOINBOG
{
public:
	::HHLMDPLGLBP* KFFNNOFPFHC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONOKLOMOCF__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::CFCKIPEGOKN*>* EMPKCOADOBH()
	{
		return ((::System::Collections::Generic::List_1<::CFCKIPEGOKN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DONOKLOMOCF_EMPKCOADOBH_OFFSET))(this);
	}

	::System::Void AINIBDOJFPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONOKLOMOCF_AINIBDOJFPK_OFFSET))(this);
	}

	::System::Void JLEHIGKAMKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONOKLOMOCF_JLEHIGKAMKJ_OFFSET))(this);
	}
};
