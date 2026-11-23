#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDC595893C6EE433/AF06CDA68CCFACB4.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Object; }

#define EB8B45249AECDD6C_A267A93A85DBC168_OFFSET UNITYSDK_OFFSET(0x3D8AB50)
#define EB8B45249AECDD6C_A885A466E87C4410_OFFSET UNITYSDK_OFFSET(0x3D8A8E0)
#define EB8B45249AECDD6C_B3C3205A304B98F3_OFFSET UNITYSDK_OFFSET(0x3D8AA20)
#define EB8B45249AECDD6C_BB1DEE976412CD8B_OFFSET UNITYSDK_OFFSET(0x3D8A7B0)
#define EB8B45249AECDD6C_E9D658F66EC4733E_OFFSET UNITYSDK_OFFSET(0x3D8ABF0)

inline static constexpr unsigned int EB8B45249AECDD6C_TypeDefinitionIndex = 18843;

class EB8B45249AECDD6C : public ::System::Object
{
public:
	static ::UnityEngine::GameObject* B3C3205A304B98F3(::BDC595893C6EE433::AF06CDA68CCFACB4 BEF298907F00D3DD, ::UnityEngine::MeshFilter*& E4D9F1E6C2E2D895, ::UnityEngine::MeshRenderer*& F61F2167BF0BD35D)
	{
		return ((::UnityEngine::GameObject*(*)(::BDC595893C6EE433::AF06CDA68CCFACB4, ::UnityEngine::MeshFilter*&, ::UnityEngine::MeshRenderer*&))((::PBYTE)hIl2Cpp + EB8B45249AECDD6C_B3C3205A304B98F3_OFFSET))(BEF298907F00D3DD, E4D9F1E6C2E2D895, F61F2167BF0BD35D);
	}

	static ::UnityEngine::GameObject* A885A466E87C4410(::BDC595893C6EE433::AF06CDA68CCFACB4 BEF298907F00D3DD, ::UnityEngine::GameObject* EFE497ABF6BF98D8, ::System::Int32 B3F59769FF194988, ::UnityEngine::MeshFilter*& E4D9F1E6C2E2D895, ::UnityEngine::MeshRenderer*& F61F2167BF0BD35D)
	{
		return ((::UnityEngine::GameObject*(*)(::BDC595893C6EE433::AF06CDA68CCFACB4, ::UnityEngine::GameObject*, ::System::Int32, ::UnityEngine::MeshFilter*&, ::UnityEngine::MeshRenderer*&))((::PBYTE)hIl2Cpp + EB8B45249AECDD6C_A885A466E87C4410_OFFSET))(BEF298907F00D3DD, EFE497ABF6BF98D8, B3F59769FF194988, E4D9F1E6C2E2D895, F61F2167BF0BD35D);
	}

	static ::UnityEngine::GameObject* A267A93A85DBC168()
	{
		return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + EB8B45249AECDD6C_A267A93A85DBC168_OFFSET))();
	}

	static ::System::Void E9D658F66EC4733E(::UnityEngine::Object* A86A90C31A146E9C)
	{
		return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + EB8B45249AECDD6C_E9D658F66EC4733E_OFFSET))(A86A90C31A146E9C);
	}

	static ::UnityEngine::GameObject* BB1DEE976412CD8B(::BDC595893C6EE433::AF06CDA68CCFACB4 BEF298907F00D3DD, ::UnityEngine::MeshFilter*& E4D9F1E6C2E2D895, ::UnityEngine::MeshRenderer*& F61F2167BF0BD35D)
	{
		return ((::UnityEngine::GameObject*(*)(::BDC595893C6EE433::AF06CDA68CCFACB4, ::UnityEngine::MeshFilter*&, ::UnityEngine::MeshRenderer*&))((::PBYTE)hIl2Cpp + EB8B45249AECDD6C_BB1DEE976412CD8B_OFFSET))(BEF298907F00D3DD, E4D9F1E6C2E2D895, F61F2167BF0BD35D);
	}
};
