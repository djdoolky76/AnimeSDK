#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B02A84909AE1658A;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define B938A40D5E65343D_F29687675C2F4BB9_1_OFFSET UNITYSDK_OFFSET(0x38431B0)
#define B938A40D5E65343D_F29687675C2F4BB9_OFFSET UNITYSDK_OFFSET(0x38432C0)

inline static constexpr unsigned int B938A40D5E65343D_TypeDefinitionIndex = 17957;

class B938A40D5E65343D : public ::System::Object
{
public:
	static ::B02A84909AE1658A* F29687675C2F4BB9(::UnityEngine::Collider* BD8273AB04C4B760)
	{
		return ((::B02A84909AE1658A*(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + B938A40D5E65343D_F29687675C2F4BB9_OFFSET))(BD8273AB04C4B760);
	}

	static ::System::Collections::Generic::List_1<::B02A84909AE1658A*>* F29687675C2F4BB9_1(::System::Collections::Generic::List_1<::UnityEngine::Collider*>* BD8273AB04C4B760)
	{
		return ((::System::Collections::Generic::List_1<::B02A84909AE1658A*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + B938A40D5E65343D_F29687675C2F4BB9_1_OFFSET))(BD8273AB04C4B760);
	}
};
