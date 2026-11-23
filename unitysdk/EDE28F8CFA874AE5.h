#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/E56EA45C01664F53.h"
#include "unitysdk/System/Object.h"

class B6AE86B8D9446EE4;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define EDE28F8CFA874AE5_E3D17824AB1D819C_OFFSET UNITYSDK_OFFSET(0x1F75900)
#define EDE28F8CFA874AE5__CTOR_OFFSET UNITYSDK_OFFSET(0x1F759E0)

inline static constexpr unsigned int EDE28F8CFA874AE5_TypeDefinitionIndex = 7844;

class EDE28F8CFA874AE5 : public ::System::Object
{
public:
	::UnityEngine::Material* FB5016160A02E529; // 0x10
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::E56EA45C01664F53, ::UnityEngine::Material*>* A8C3DF1915AF2D16; // 0x18
	::UnityEngine::Transform* E5F1C3AE02D57934; // 0x20
	::B6AE86B8D9446EE4* E0F169E70BDD4CB4; // 0x28

	::System::Boolean E3D17824AB1D819C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDE28F8CFA874AE5_E3D17824AB1D819C_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDE28F8CFA874AE5__CTOR_OFFSET))(this);
	}
};
