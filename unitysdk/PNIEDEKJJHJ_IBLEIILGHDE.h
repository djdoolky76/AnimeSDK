#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityScreenSpacePlanarReflectionEffect; }
namespace MoleMole::Config { class ConfigEntityScreenSpacePlanarReflectionEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PNIEDEKJJHJ_IBLEIILGHDE_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x178ED7A0)
#define PNIEDEKJJHJ_IBLEIILGHDE__CTOR_OFFSET UNITYSDK_OFFSET(0x178ED790)

inline static constexpr unsigned int PNIEDEKJJHJ_IBLEIILGHDE_TypeDefinitionIndex = 39279;

class PNIEDEKJJHJ_IBLEIILGHDE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIEDEKJJHJ_IBLEIILGHDE__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffects*>*))((::PBYTE)hIl2Cpp + PNIEDEKJJHJ_IBLEIILGHDE_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
