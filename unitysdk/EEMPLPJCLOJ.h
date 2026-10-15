#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/Linq/FromNonGenericEnumerable_1.h"
namespace System { class Object; }
namespace System::Collections { class IEnumerable; }
namespace ZLinq { class ValueEnumerable; }

#define EEMPLPJCLOJ_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1DD3A090)

	class EEMPLPJCLOJ : public ::System::Object
	{
	public:
		static ::ZLinq::ValueEnumerable* EHAFELPCLKB(::System::Collections::IEnumerable* a1)
		{
			return ((::ZLinq::ValueEnumerable*(*)(::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + EEMPLPJCLOJ_EHAFELPCLKB_OFFSET))(a1);
		}

	};
