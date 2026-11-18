#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase_Spline.h"

namespace MoleMole::DataStructures::Common { class Comment; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define MOLEMOLE_SPLINE_NAPSPLINEMETA_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C0BF020)
#define MOLEMOLE_SPLINE_NAPSPLINEMETA_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1C0BF010)
#define MOLEMOLE_SPLINE_NAPSPLINEMETA_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x1C0BF150)
#define MOLEMOLE_SPLINE_NAPSPLINEMETA_PJGHAMCBIFK_OFFSET UNITYSDK_OFFSET(0x1C0BF160)
#define MOLEMOLE_SPLINE_NAPSPLINEMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0BF070)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPSplineMeta_TypeDefinitionIndex = 71467;

	class NAPSplineMeta : public ::FluffyUnderware::Curvy::CurvyMetadataBase_Spline
	{
	public:
		::System::String* _tag; // 0x38
		::MoleMole::DataStructures::Common::Comment* Comment; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* GPBDEFADHDI; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETA__CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETA_GET_TAG_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETA_AWAKE_OFFSET))(this);
		}

		::System::Void GPGLNOBDBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETA_GPGLNOBDBGJ_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* PJGHAMCBIFK()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETA_PJGHAMCBIFK_OFFSET))(this);
		}
	};
}
