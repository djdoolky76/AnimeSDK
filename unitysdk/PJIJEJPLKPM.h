#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLOEAGHDLL.h"

class GBINEPNHKKO;
class IDGDIFDMIDP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define PJIJEJPLKPM_KBLEBGELJNP_OFFSET UNITYSDK_OFFSET(0x178DD210)
#define PJIJEJPLKPM__CTOR_OFFSET UNITYSDK_OFFSET(0x178DD7A0)

inline static constexpr unsigned int PJIJEJPLKPM_TypeDefinitionIndex = 67128;

class PJIJEJPLKPM : public ::JGLOEAGHDLL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIJEJPLKPM__CTOR_OFFSET))(this);
	}

	::System::String* KBLEBGELJNP(::IDGDIFDMIDP* GGODNFDLEGE, ::GBINEPNHKKO* EECDKMONJPM, ::System::String* MHKFEMGGDNA, ::System::Collections::Generic::IList_1<::System::String*>* HKHFKFGFIJK, ::System::Collections::Generic::IList_1<::System::Int32>* GHIAMNCKOOM, ::System::String* NEBPLBMBPNP)
	{
		return ((::System::String*(*)(::PVOID, ::IDGDIFDMIDP*, ::GBINEPNHKKO*, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::String*))((::PBYTE)hIl2Cpp + PJIJEJPLKPM_KBLEBGELJNP_OFFSET))(this, GGODNFDLEGE, EECDKMONJPM, MHKFEMGGDNA, HKHFKFGFIJK, GHIAMNCKOOM, NEBPLBMBPNP);
	}
};
