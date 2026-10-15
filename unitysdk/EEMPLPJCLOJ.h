#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/Linq/FromNonGenericEnumerable_1.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"
namespace System { class Object; }
namespace System::Collections { class IEnumerable; }

#define EEMPLPJCLOJ_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1DD3A090)

inline static constexpr unsigned int EEMPLPJCLOJ_TypeDefinitionIndex = 6414;

	class EEMPLPJCLOJ : public ::System::Object
	{
	public:
		static ::ZLinq::ValueEnumerable_2<::ZLinq::Linq::FromNonGenericEnumerable_1<::System::Object*>, ::System::Object*> EHAFELPCLKB(::System::Collections::IEnumerable* a1)
		{
			return ((::ZLinq::ValueEnumerable_2<::ZLinq::Linq::FromNonGenericEnumerable_1<::System::Object*>, ::System::Object*>(*)(::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + EEMPLPJCLOJ_EHAFELPCLKB_OFFSET))(a1);
		}

	};
