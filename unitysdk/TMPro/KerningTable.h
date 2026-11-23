#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class KerningPair; }

#define TMPRO_KERNINGTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x40BB790)

namespace TMPro
{
	inline static constexpr unsigned int KerningTable_TypeDefinitionIndex = 18284;

	class KerningTable : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::TMPro::KerningPair*>* kerningPairs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE__CTOR_OFFSET))(this);
		}
	};
}
