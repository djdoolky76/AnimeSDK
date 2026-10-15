#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AcheronSpaceSlicer_SlicePlane.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class JLGAPJLCIKO;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshFilter; }

#define RPG_CLIENT_ACHERONSPACESLICER_CAJFGOIOKGF_OFFSET UNITYSDK_OFFSET(0xC3A7ED0)
#define RPG_CLIENT_ACHERONSPACESLICER_CTOR_OFFSET UNITYSDK_OFFSET(0xC3A86E0)
#define RPG_CLIENT_ACHERONSPACESLICER_FOOPKKPADGM_OFFSET UNITYSDK_OFFSET(0xC3A8370)

namespace RPG::Client
{
	inline static constexpr unsigned int AcheronSpaceSlicer_TypeDefinitionIndex = 70352;

	class AcheronSpaceSlicer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::AcheronSpaceSlicer_SlicePlane plane; // 0x18
		::UnityEngine::Material* Mat; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* SliceTargets; // 0x38
		::System::Single SliceDistance; // 0x40
		::System::Boolean NeedHull; // 0x44
		::System::Byte _padding0[0x3];
		::JLGAPJLCIKO* FMMDMJNDLPE; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* MIPBBLIKBCD; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHERONSPACESLICER_CTOR_OFFSET))(this);
		}

		::System::Void CAJFGOIOKGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHERONSPACESLICER_CAJFGOIOKGF_OFFSET))(this);
		}

		::System::Void FOOPKKPADGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHERONSPACESLICER_FOOPKKPADGM_OFFSET))(this);
		}

	};
}
