#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEIPELDMAAE;
namespace RPG::Client::CrowdAnimator { class CrowdPrototype; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }

#define GCFPDEHADKC_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x19EA44A0)
#define GCFPDEHADKC_CTOR_OFFSET UNITYSDK_OFFSET(0x19EA4540)
#define GCFPDEHADKC_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x19EA41A0)
#define GCFPDEHADKC_JAGJJDEKLIO_OFFSET UNITYSDK_OFFSET(0x19EA42D0)
#define GCFPDEHADKC_JMGAPFKJIFG_OFFSET UNITYSDK_OFFSET(0x19EA4410)

inline static constexpr unsigned int GCFPDEHADKC_TypeDefinitionIndex = 75861;

	class GCFPDEHADKC : public ::System::Object
	{
	public:
		::UnityEngine::Material* DFJEIPBBFMN; // 0x10
		::RPG::Client::CrowdAnimator::CrowdPrototype* JHAHABGNPEM; // 0x18
		::UnityEngine::Texture2D* PKKLHJOCJAB; // 0x20
		::UnityEngine::Material* EJGNBFKFHGG; // 0x28
		::System::Collections::Generic::List_1<::OEIPELDMAAE*>* OGBJANBPJJN; // 0x30
		::UnityEngine::Mesh* APBJFDCLGOC; // 0x38
		::System::Int32 BJIOBCHFCAA; // 0x40
		::System::Int32 ILKENAAKKLH; // 0x44
		::System::Int32 GAGJLNOBMFK; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFPDEHADKC_CTOR_OFFSET))(this);
		}

		::System::Boolean DGCGLNOLDIB(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::RPG::Client::CrowdAnimator::CrowdPrototype* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::RPG::Client::CrowdAnimator::CrowdPrototype*))((::PBYTE)hIl2Cpp + GCFPDEHADKC_DGCGLNOLDIB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JAGJJDEKLIO(::OEIPELDMAAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEIPELDMAAE*))((::PBYTE)hIl2Cpp + GCFPDEHADKC_JAGJJDEKLIO_OFFSET))(this, a1);
		}

		::System::Void JMGAPFKJIFG(::OEIPELDMAAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEIPELDMAAE*))((::PBYTE)hIl2Cpp + GCFPDEHADKC_JMGAPFKJIFG_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFPDEHADKC_ABKBOGIGAEH_OFFSET))(this);
		}

	};
