#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LOD.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class LODGroup; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define FNLBCCCENMF_EDLGKHOAIHL_OFFSET UNITYSDK_OFFSET(0x14114E10)
#define FNLBCCCENMF_GANOOGMDJLK_OFFSET UNITYSDK_OFFSET(0x141148C0)
#define FNLBCCCENMF_JABKKIIEKHK_OFFSET UNITYSDK_OFFSET(0x14114B30)
#define FNLBCCCENMF_KCJJPPKLCEL_OFFSET UNITYSDK_OFFSET(0x14114840)
#define FNLBCCCENMF_NEBIPHNFOMA_OFFSET UNITYSDK_OFFSET(0x14114AC0)
#define FNLBCCCENMF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14114DB0)
#define FNLBCCCENMF_PIJDOJAKFGK_OFFSET UNITYSDK_OFFSET(0x14114BB0)
#define FNLBCCCENMF__CTOR_OFFSET UNITYSDK_OFFSET(0x14114670)

inline static constexpr unsigned int FNLBCCCENMF_TypeDefinitionIndex = 85434;

class FNLBCCCENMF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* LIIPBKHKFGG; // 0x10
	::UnityEngine::MaterialPropertyBlock* JAJILFEJDGD; // 0x18
	::UnityEngine::LOD LAIIENHDIFL; // 0x20
	::System::Int32 PFJJOCFBDDO; // 0x38
	::System::Int32 JBOCEKAGCOG; // 0x3C
	::System::Boolean AFJFMFAJHCB; // 0x40

	::System::Void _ctor(::UnityEngine::LODGroup* KPNIHKEKDOC, ::System::Int32 KKAMEGLDKPM, ::System::Int32 HKBBMLEAOIK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LODGroup*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FNLBCCCENMF__CTOR_OFFSET))(this, KPNIHKEKDOC, KKAMEGLDKPM, HKBBMLEAOIK);
	}

	::System::Void KCJJPPKLCEL(::System::Int32 PHIKBGHJCKK, ::UnityEngine::Vector4 PKIEMILGBDH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + FNLBCCCENMF_KCJJPPKLCEL_OFFSET))(this, PHIKBGHJCKK, PKIEMILGBDH);
	}

	::System::Void GANOOGMDJLK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLBCCCENMF_GANOOGMDJLK_OFFSET))(this);
	}

	::System::Void NEBIPHNFOMA(::System::Int32 PHIKBGHJCKK, ::UnityEngine::Texture2D* GLBPBKDPCBD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + FNLBCCCENMF_NEBIPHNFOMA_OFFSET))(this, PHIKBGHJCKK, GLBPBKDPCBD);
	}

	::System::Void JABKKIIEKHK(::System::Int32 PHIKBGHJCKK, ::System::Single FEKJMJOPFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + FNLBCCCENMF_JABKKIIEKHK_OFFSET))(this, PHIKBGHJCKK, FEKJMJOPFJC);
	}

	::System::Boolean PIJDOJAKFGK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLBCCCENMF_PIJDOJAKFGK_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLBCCCENMF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void EDLGKHOAIHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLBCCCENMF_EDLGKHOAIHL_OFFSET))(this);
	}
};
