#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityCullingEffect; }
namespace MoleMole::Config { class ConfigEntityCullingEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CECGNAHOBEK_ABJFGNGLHBO_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x16944D60)
#define CECGNAHOBEK_ABJFGNGLHBO__CTOR_OFFSET UNITYSDK_OFFSET(0x16944D50)

inline static constexpr unsigned int CECGNAHOBEK_ABJFGNGLHBO_TypeDefinitionIndex = 85943;

class CECGNAHOBEK_ABJFGNGLHBO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCullingEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CECGNAHOBEK_ABJFGNGLHBO__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCullingEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityCullingEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCullingEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityCullingEffects*>*))((::PBYTE)hIl2Cpp + CECGNAHOBEK_ABJFGNGLHBO_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
