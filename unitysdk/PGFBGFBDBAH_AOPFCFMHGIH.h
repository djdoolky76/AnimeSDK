#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIKJHPHHBLD.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/MNAGAGOHIGH.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
template <typename T> class BFMLEHMAGAK_1;
template <typename T> class DBMAHDDGMHM_1;

#define PGFBGFBDBAH_AOPFCFMHGIH_JINPDDJFIJK_OFFSET UNITYSDK_OFFSET(0x1C1D25B0)
#define PGFBGFBDBAH_AOPFCFMHGIH_LKNBCFOKJLO_OFFSET UNITYSDK_OFFSET(0x1C1D2630)
#define PGFBGFBDBAH_AOPFCFMHGIH_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C1D2430)
#define PGFBGFBDBAH_AOPFCFMHGIH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D22B0)

inline static constexpr unsigned int PGFBGFBDBAH_AOPFCFMHGIH_TypeDefinitionIndex = 46106;

class PGFBGFBDBAH_AOPFCFMHGIH : public ::FIKJHPHHBLD
{
public:
	::System::Func_1<::System::Boolean>* CIFLENFEEGN; // 0xD8
	::DBMAHDDGMHM_1<::UnityEngine::Vector2>* CKLFANCPPFM; // 0xE0
	::System::Action_1<::System::Object*>* ONHBLFPPEBA; // 0xE8
	::BFMLEHMAGAK_1<::System::Boolean>* ADNPFJMKDNM; // 0xF0
	::DBMAHDDGMHM_1<::System::Boolean>* EEDOLFNDGLF; // 0xF8

	::System::Void _ctor(::System::Func_1<::System::Boolean>* FIPHFGHNNBE, ::System::Action_1<::System::Object*>* FDOHAEOEDEO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_AOPFCFMHGIH__CTOR_OFFSET))(this, FIPHFGHNNBE, FDOHAEOEDEO);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_AOPFCFMHGIH_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void JINPDDJFIJK(::MNAGAGOHIGH& KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_AOPFCFMHGIH_JINPDDJFIJK_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void LKNBCFOKJLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_AOPFCFMHGIH_LKNBCFOKJLO_OFFSET))(this);
	}
};
