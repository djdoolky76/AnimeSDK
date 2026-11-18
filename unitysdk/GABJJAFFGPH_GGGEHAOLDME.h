#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GABJJAFFGPH_GGGEHAOLDME__CTOR_OFFSET UNITYSDK_OFFSET(0x156E6AE0)

inline static constexpr unsigned int GABJJAFFGPH_GGGEHAOLDME_TypeDefinitionIndex = 47845;

class GABJJAFFGPH_GGGEHAOLDME : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* LAHIBIEGDBF; // 0x10
	::System::String* BMLHGEJLNHK; // 0x18
	::System::Int32 MKCOINJLFJJ; // 0x20
	::System::Int32 DNGDGEMGMMK; // 0x24
	::System::Int32 GAEHJENNOGL; // 0x28
	::System::Int32 EJEPONJFAIO; // 0x2C

	::System::Void _ctor(::System::Int32 KLJNHMGMDNP, ::System::Tuple_2<::System::Int32, ::System::String*>* CMCPFPNBLDE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Tuple_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + GABJJAFFGPH_GGGEHAOLDME__CTOR_OFFSET))(this, KLJNHMGMDNP, CMCPFPNBLDE);
	}
};
