#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class ScratchConfigObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define IDOMCLJBGNN_INPDPPMAGHG_1_OFFSET UNITYSDK_OFFSET(0x16F5DF40)
#define IDOMCLJBGNN_INPDPPMAGHG_2_OFFSET UNITYSDK_OFFSET(0x16F5E430)
#define IDOMCLJBGNN_INPDPPMAGHG_OFFSET UNITYSDK_OFFSET(0x16F5D7B0)
#define IDOMCLJBGNN_NDCKELKENEK_OFFSET UNITYSDK_OFFSET(0x16F5DCF0)
#define IDOMCLJBGNN__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F5D7A0)

inline static constexpr unsigned int IDOMCLJBGNN_TypeDefinitionIndex = 43992;

class IDOMCLJBGNN : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::ScratchConfigObject*>** StaticGet_BMNGJIEFGEL()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::ScratchConfigObject*>**)Il2CppClass::FromTypeDefinitionIndex(IDOMCLJBGNN_TypeDefinitionIndex)->GetStaticField(0x3E030);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDOMCLJBGNN__CCTOR_OFFSET))();
	}

	static ::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Vector3> INPDPPMAGHG(::MoleMole::Battle::Entity* DKFPKJJOJNF, ::UnityEngine::Vector3 HKGNDNLFMAP)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Vector3>(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IDOMCLJBGNN_INPDPPMAGHG_OFFSET))(DKFPKJJOJNF, HKGNDNLFMAP);
	}

	static ::System::Void NDCKELKENEK(::System::Collections::Generic::List_1<::MoleMole::Battle::ScratchConfigObject*>* CPJEFBNPPGF)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Battle::ScratchConfigObject*>*))((::PBYTE)hIl2Cpp + IDOMCLJBGNN_NDCKELKENEK_OFFSET))(CPJEFBNPPGF);
	}

	static ::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Vector3> INPDPPMAGHG_1(::UnityEngine::Collider* EHHHMFKHNAI, ::UnityEngine::Vector3 HKGNDNLFMAP)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Vector3>(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IDOMCLJBGNN_INPDPPMAGHG_1_OFFSET))(EHHHMFKHNAI, HKGNDNLFMAP);
	}

	static ::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Vector3> INPDPPMAGHG_2(::UnityEngine::RaycastHit NLJNLBAMKDP)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Vector3>(*)(::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + IDOMCLJBGNN_INPDPPMAGHG_2_OFFSET))(NLJNLBAMKDP);
	}
};
