#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityScreenSpaceReflectionEffect; }
namespace MoleMole::Config { class ConfigEntityScreenSpaceReflectionEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JCOADBNEJNG_FIKJFBOIBOA_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x1306EEF0)
#define JCOADBNEJNG_FIKJFBOIBOA__CTOR_OFFSET UNITYSDK_OFFSET(0x1306EEE0)

inline static constexpr unsigned int JCOADBNEJNG_FIKJFBOIBOA_TypeDefinitionIndex = 51433;

class JCOADBNEJNG_FIKJFBOIBOA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOADBNEJNG_FIKJFBOIBOA__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffects*>*))((::PBYTE)hIl2Cpp + JCOADBNEJNG_FIKJFBOIBOA_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
