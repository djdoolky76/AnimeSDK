#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLOEAGHDLL.h"

class GBINEPNHKKO;
class IDGDIFDMIDP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define APDLAJIFFDK_KBLEBGELJNP_OFFSET UNITYSDK_OFFSET(0x136013F0)
#define APDLAJIFFDK__CTOR_OFFSET UNITYSDK_OFFSET(0x13601590)

inline static constexpr unsigned int APDLAJIFFDK_TypeDefinitionIndex = 90481;

class APDLAJIFFDK : public ::JGLOEAGHDLL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDLAJIFFDK__CTOR_OFFSET))(this);
	}

	::System::String* KBLEBGELJNP(::IDGDIFDMIDP* GGODNFDLEGE, ::GBINEPNHKKO* EECDKMONJPM, ::System::String* MHKFEMGGDNA, ::System::Collections::Generic::IList_1<::System::String*>* HKHFKFGFIJK, ::System::Collections::Generic::IList_1<::System::Int32>* GHIAMNCKOOM, ::System::String* NEBPLBMBPNP)
	{
		return ((::System::String*(*)(::PVOID, ::IDGDIFDMIDP*, ::GBINEPNHKKO*, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::String*))((::PBYTE)hIl2Cpp + APDLAJIFFDK_KBLEBGELJNP_OFFSET))(this, GGODNFDLEGE, EECDKMONJPM, MHKFEMGGDNA, HKHFKFGFIJK, GHIAMNCKOOM, NEBPLBMBPNP);
	}
};
