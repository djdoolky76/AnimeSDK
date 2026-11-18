#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPNHHGBPCGM.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GFAPACGJCME_GODPCJNBDHK_KMPPMBCJDPM_OFFSET UNITYSDK_OFFSET(0x149C0CD0)
#define GFAPACGJCME_GODPCJNBDHK_OIGKIEKJMNK_OFFSET UNITYSDK_OFFSET(0x149C0C30)
#define GFAPACGJCME_GODPCJNBDHK__CTOR_OFFSET UNITYSDK_OFFSET(0x149C0C20)

inline static constexpr unsigned int GFAPACGJCME_GODPCJNBDHK_TypeDefinitionIndex = 86887;

class GFAPACGJCME_GODPCJNBDHK : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::GPNHHGBPCGM>* DIBBOOBHAEM; // 0x10
	::System::Func_2<::GPNHHGBPCGM, ::System::Boolean>* DLMJCFBENGB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAPACGJCME_GODPCJNBDHK__CTOR_OFFSET))(this);
	}

	::System::Boolean OIGKIEKJMNK(::MoleMole::DownloadFileInfo* JJJIFHMGFAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + GFAPACGJCME_GODPCJNBDHK_OIGKIEKJMNK_OFFSET))(this, JJJIFHMGFAI);
	}

	::System::Boolean KMPPMBCJDPM(::GPNHHGBPCGM AELLPLBJELA)
	{
		return ((::System::Boolean(*)(::PVOID, ::GPNHHGBPCGM))((::PBYTE)hIl2Cpp + GFAPACGJCME_GODPCJNBDHK_KMPPMBCJDPM_OFFSET))(this, AELLPLBJELA);
	}
};
