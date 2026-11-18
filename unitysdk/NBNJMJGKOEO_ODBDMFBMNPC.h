#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/NBNJMJGKOEO_PNBHBGLNDMK.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NBNJMJGKOEO_ODBDMFBMNPC_LKCDJBHPDED_OFFSET UNITYSDK_OFFSET(0x16B5C790)
#define NBNJMJGKOEO_ODBDMFBMNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x16B5C780)

inline static constexpr unsigned int NBNJMJGKOEO_ODBDMFBMNPC_TypeDefinitionIndex = 68601;

class NBNJMJGKOEO_ODBDMFBMNPC : public ::NBNJMJGKOEO_PNBHBGLNDMK
{
public:
	::MoleMole::Config::MonsterFunctionType BHKOGNDMFDF; // 0x38

	::System::Void _ctor(::System::Int32 GPJPMCGBHFI, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* JMDOANHOEJG, ::MoleMole::Config::MonsterFunctionType FPMCEDOFCHB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*, ::MoleMole::Config::MonsterFunctionType))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_ODBDMFBMNPC__CTOR_OFFSET))(this, GPJPMCGBHFI, JMDOANHOEJG, FPMCEDOFCHB);
	}

	::System::Void LKCDJBHPDED(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& IDKNEIEMPAP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_ODBDMFBMNPC_LKCDJBHPDED_OFFSET))(this, IDKNEIEMPAP);
	}
};
