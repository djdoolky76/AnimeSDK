#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KEJNHMJNNCF_HBMICIAHAKN_OFDCGHIJIPN_OFFSET UNITYSDK_OFFSET(0x157E2DD0)
#define KEJNHMJNNCF_HBMICIAHAKN__CTOR_OFFSET UNITYSDK_OFFSET(0x157E2DC0)

inline static constexpr unsigned int KEJNHMJNNCF_HBMICIAHAKN_TypeDefinitionIndex = 64932;

class KEJNHMJNNCF_HBMICIAHAKN : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* JOMJBEBHOMA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJNHMJNNCF_HBMICIAHAKN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFDCGHIJIPN(::MoleMole::DownloadFileInfo* HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + KEJNHMJNNCF_HBMICIAHAKN_OFDCGHIJIPN_OFFSET))(this, HMMMOCJAEOA);
	}
};
