#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/UnityEngine/UI/RawImage.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::UI { class VertexHelper; }

#define MOLEMOLE_SPINERTRAWIMAGE_AOEAEDNFJBI_OFFSET UNITYSDK_OFFSET(0x1311A960)
#define MOLEMOLE_SPINERTRAWIMAGE_BICEEBGCNMD_OFFSET UNITYSDK_OFFSET(0x13119EE0)
#define MOLEMOLE_SPINERTRAWIMAGE_CIKIGAOIPLP_OFFSET UNITYSDK_OFFSET(0x13119E90)
#define MOLEMOLE_SPINERTRAWIMAGE_ELMNAHBFOKA_OFFSET UNITYSDK_OFFSET(0x1311A660)
#define MOLEMOLE_SPINERTRAWIMAGE_GOKBADGGEMB_OFFSET UNITYSDK_OFFSET(0x1311A880)
#define MOLEMOLE_SPINERTRAWIMAGE_HNPJHPBCNGM_OFFSET UNITYSDK_OFFSET(0x1311A7B0)
#define MOLEMOLE_SPINERTRAWIMAGE_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x1311A650)
#define MOLEMOLE_SPINERTRAWIMAGE_KBOIHOEPHCI_OFFSET UNITYSDK_OFFSET(0x1311A6E0)
#define MOLEMOLE_SPINERTRAWIMAGE_KHMFKKNPANN_OFFSET UNITYSDK_OFFSET(0x1311A890)
#define MOLEMOLE_SPINERTRAWIMAGE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1311A1C0)
#define MOLEMOLE_SPINERTRAWIMAGE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1311A2B0)
#define MOLEMOLE_SPINERTRAWIMAGE_SETCUSTOMMESH_OFFSET UNITYSDK_OFFSET(0x13119D30)
#define MOLEMOLE_SPINERTRAWIMAGE_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x13119D80)
#define MOLEMOLE_SPINERTRAWIMAGE_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x1311A0B0)
#define MOLEMOLE_SPINERTRAWIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1311A620)

namespace MoleMole
{
	inline static constexpr unsigned int SpineRTRawImage_TypeDefinitionIndex = 75947;

	class SpineRTRawImage : public ::UnityEngine::UI::RawImage
	{
	public:
		::UnityEngine::Mesh* LMPALBICJNB; // 0x110
		::System::Boolean DJGOGKONMNJ; // 0x118
		::System::Boolean BPJDHPOKCNO; // 0x119
		::System::Byte _padding0[0x2];
		::Foundation::Coroutine::CoroutineHandle EPNPLEGIDEG; // 0x11C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINERTRAWIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void SetCustomMesh(::UnityEngine::Mesh* BEEGIMMGFPF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINERTRAWIMAGE_SETCUSTOMMESH_OFFSET))(this, BEEGIMMGFPF);
		}

		::System::Void SetMaterialDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINERTRAWIMAGE_SETMATERIALDIRTY_OFFSET))(this);
		}

		::System::Void SetVerticesDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINERTRAWIMAGE_SETVERTICESDIRTY_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINERTRAWIMAGE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* KKHICLCLGDM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINERTRAWIMAGE_ONPOPULATEMESH_OFFSET))(this, KKHICLCLGDM);
		}

		::System::Void ILHIIDBCNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINERTRAWIMAGE_ILHIIDBCNEC_OFFSET))(this);
		}

		static ::System::Boolean CIKIGAOIPLP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPINERTRAWIMAGE_CIKIGAOIPLP_OFFSET))();
		}

		::System::Void BICEEBGCNMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINERTRAWIMAGE_BICEEBGCNMD_OFFSET))(this);
		}

		::System::Void KBOIHOEPHCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINERTRAWIMAGE_KBOIHOEPHCI_OFFSET))(this);
		}

		::System::Void HNPJHPBCNGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINERTRAWIMAGE_HNPJHPBCNGM_OFFSET))(this);
		}

		::System::Void GOKBADGGEMB(::UnityEngine::UI::VertexHelper* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINERTRAWIMAGE_GOKBADGGEMB_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KHMFKKNPANN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINERTRAWIMAGE_KHMFKKNPANN_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* ELMNAHBFOKA()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINERTRAWIMAGE_ELMNAHBFOKA_OFFSET))(this);
		}

		::System::Void AOEAEDNFJBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPINERTRAWIMAGE_AOEAEDNFJBI_OFFSET))(this);
		}
	};
}
