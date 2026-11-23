#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B6564CAC678AC465.h"
#include "unitysdk/E8C1635F85E9BC30.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FB8B6A66C22E6F45__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3D2DEC0)
#define FB8B6A66C22E6F45__CTOR_OFFSET UNITYSDK_OFFSET(0x3D2DE90)

inline static constexpr unsigned int FB8B6A66C22E6F45_TypeDefinitionIndex = 10911;

class FB8B6A66C22E6F45 : public ::E8C1635F85E9BC30
{
public:
	::B6564CAC678AC465 B92B5CBD3D0999CE; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* B3E5C5AF6F8415FB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB8B6A66C22E6F45__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::B6564CAC678AC465 B2E673F362AA060E)
	{
		return ((::System::Void(*)(::PVOID, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + FB8B6A66C22E6F45__CTOR_1_OFFSET))(this, B2E673F362AA060E);
	}
};
