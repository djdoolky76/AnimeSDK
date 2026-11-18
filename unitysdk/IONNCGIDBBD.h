#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BHDIFOOIHLK;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace UnityEngine { class Collider; }

#define IONNCGIDBBD_MBAABHCCNGE_OFFSET UNITYSDK_OFFSET(0x1943F420)
#define IONNCGIDBBD_PMPNCCDLDHE_OFFSET UNITYSDK_OFFSET(0x1943F590)
#define IONNCGIDBBD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1943F1A0)

inline static constexpr unsigned int IONNCGIDBBD_TypeDefinitionIndex = 69683;

class IONNCGIDBBD : public ::System::Object
{
public:
	static ::BHDIFOOIHLK** StaticGet_IEJJKLPOCJN()
	{
		return (::BHDIFOOIHLK**)Il2CppClass::FromTypeDefinitionIndex(IONNCGIDBBD_TypeDefinitionIndex)->GetStaticField(0x37F90);
	}
	static ::BHDIFOOIHLK** StaticGet_KFDBBGACIHP()
	{
		return (::BHDIFOOIHLK**)Il2CppClass::FromTypeDefinitionIndex(IONNCGIDBBD_TypeDefinitionIndex)->GetStaticField(0x37F98);
	}
	static ::System::Func_3<::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Boolean>** StaticGet_JAJDGKFBHED()
	{
		return (::System::Func_3<::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IONNCGIDBBD_TypeDefinitionIndex)->GetStaticField(0x37FA0);
	}
	static ::BHDIFOOIHLK** StaticGet_DDGNFJDLOKA()
	{
		return (::BHDIFOOIHLK**)Il2CppClass::FromTypeDefinitionIndex(IONNCGIDBBD_TypeDefinitionIndex)->GetStaticField(0x37FA8);
	}
	// static const ::System::Int32 AGFHEFIPIOJ = 0x1; // 0x0
	// static const ::System::Int32 JEPEKMBHOGG = 0x2; // 0x0
	// static const ::System::Int32 BNHFEMIDJGK = 0x3; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IONNCGIDBBD__CCTOR_OFFSET))();
	}

	static ::BHDIFOOIHLK* MBAABHCCNGE(::System::Int32 MGMDLMBEDJF, ::System::String* HIAIKHDFCLN, ::System::Func_3<::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Boolean>* KPDNJEDICCM)
	{
		return ((::BHDIFOOIHLK*(*)(::System::Int32, ::System::String*, ::System::Func_3<::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Boolean>*))((::PBYTE)hIl2Cpp + IONNCGIDBBD_MBAABHCCNGE_OFFSET))(MGMDLMBEDJF, HIAIKHDFCLN, KPDNJEDICCM);
	}

	static ::BHDIFOOIHLK* PMPNCCDLDHE(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BHDIFOOIHLK*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IONNCGIDBBD_PMPNCCDLDHE_OFFSET))(MGMDLMBEDJF);
	}
};
