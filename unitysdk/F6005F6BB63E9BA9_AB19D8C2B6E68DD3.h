#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F6005F6BB63E9BA9_AB19D8C2B6E68DD3_E7B193809F8A6AEA.h"
#include "unitysdk/System/Object.h"

class A0E056D42353C1E5;
class E1153259FC38F47B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define F6005F6BB63E9BA9_AB19D8C2B6E68DD3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F6005F6BB63E9BA9_AB19D8C2B6E68DD3_TypeDefinitionIndex = 18070;

class F6005F6BB63E9BA9_AB19D8C2B6E68DD3 : public ::System::Object
{
public:
	::System::Int32 EE75EE705EDBE9BC; // 0x10
	::F6005F6BB63E9BA9_AB19D8C2B6E68DD3_E7B193809F8A6AEA F09ED8F004220155; // 0x14
	::System::Text::StringBuilder* E167B39BBDF6E077; // 0x18
	::E1153259FC38F47B* F488F7244713A973; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* FA4B03119A5AB54F; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::A0E056D42353C1E5*>* A027958D3974C2C3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6005F6BB63E9BA9_AB19D8C2B6E68DD3__CTOR_OFFSET))(this);
	}
};
