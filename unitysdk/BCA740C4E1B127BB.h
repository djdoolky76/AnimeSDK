#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/E56EA45C01664F53.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/System/Object.h"

class AF491FFD33B32D71;
class EDE28F8CFA874AE5;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BCA740C4E1B127BB_A3083F162659B7CC_OFFSET UNITYSDK_OFFSET(0x227FC60)
#define BCA740C4E1B127BB_E0E3352EE1573685_OFFSET UNITYSDK_OFFSET(0x227FF80)
#define BCA740C4E1B127BB_E81D11CC0BE6BAFE_OFFSET UNITYSDK_OFFSET(0x2280680)
#define BCA740C4E1B127BB_F01686EE6C4969D2_OFFSET UNITYSDK_OFFSET(0x22803F0)
#define BCA740C4E1B127BB_F21E90A80AC0BE06_OFFSET UNITYSDK_OFFSET(0x227FAE0)
#define BCA740C4E1B127BB__CTOR_OFFSET UNITYSDK_OFFSET(0x22805A0)

inline static constexpr unsigned int BCA740C4E1B127BB_TypeDefinitionIndex = 6995;

class BCA740C4E1B127BB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::E865F6F8B8B44C1E, ::AF491FFD33B32D71*>* BE2A258A8D5F2CA6; // 0x10
	::E865F6F8B8B44C1E BA1B289838B59B0A; // 0x18
	::UnityEngine::Transform* AA520C80D5704496; // 0x20
	::UnityEngine::Transform* E0E2A2A52E9E0EB9; // 0x28
	::E68AA4EB51923C98::E56EA45C01664F53 B3C7308978D3A860; // 0x30
	::System::Byte _padding0[0x4];
	::EDE28F8CFA874AE5* B5EB2B8F1F68AA61; // 0x38

	::System::Void _ctor(::UnityEngine::Transform* BEEA4EC3D8DB7EC8, ::UnityEngine::Transform* BD86DA2622942D08, ::E68AA4EB51923C98::E56EA45C01664F53 EF3AF5F88EF3F20C, ::EDE28F8CFA874AE5* E67894DD11CDD0A6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::E68AA4EB51923C98::E56EA45C01664F53, ::EDE28F8CFA874AE5*))((::PBYTE)hIl2Cpp + BCA740C4E1B127BB__CTOR_OFFSET))(this, BEEA4EC3D8DB7EC8, BD86DA2622942D08, EF3AF5F88EF3F20C, E67894DD11CDD0A6);
	}

	::System::Void F01686EE6C4969D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCA740C4E1B127BB_F01686EE6C4969D2_OFFSET))(this);
	}

	::System::Void A3083F162659B7CC(::E865F6F8B8B44C1E BC707AB04028EF19, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* BA503C83FE93C0FB, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* F87BC7F6505D5552)
	{
		return ((::System::Void(*)(::PVOID, ::E865F6F8B8B44C1E, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + BCA740C4E1B127BB_A3083F162659B7CC_OFFSET))(this, BC707AB04028EF19, BA503C83FE93C0FB, F87BC7F6505D5552);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* E81D11CC0BE6BAFE()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCA740C4E1B127BB_E81D11CC0BE6BAFE_OFFSET))(this);
	}

	::UnityEngine::GameObject* F21E90A80AC0BE06(::E865F6F8B8B44C1E B972F96A6DDE8EE3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::E865F6F8B8B44C1E))((::PBYTE)hIl2Cpp + BCA740C4E1B127BB_F21E90A80AC0BE06_OFFSET))(this, B972F96A6DDE8EE3);
	}

	::System::Void E0E3352EE1573685(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* BA503C83FE93C0FB, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* F87BC7F6505D5552)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + BCA740C4E1B127BB_E0E3352EE1573685_OFFSET))(this, BA503C83FE93C0FB, F87BC7F6505D5552);
	}
};
