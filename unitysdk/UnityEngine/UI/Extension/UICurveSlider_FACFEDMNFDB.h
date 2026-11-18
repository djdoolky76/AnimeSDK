#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace UnityEngine::UI::Extension { class UICurveSlider; }

#define UNITYENGINE_UI_EXTENSION_UICURVESLIDER_FACFEDMNFDB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1D9EA2F0)
#define UNITYENGINE_UI_EXTENSION_UICURVESLIDER_FACFEDMNFDB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1D9EA300)
#define UNITYENGINE_UI_EXTENSION_UICURVESLIDER_FACFEDMNFDB_WRITE_OFFSET UNITYSDK_OFFSET(0x1D9EA560)
#define UNITYENGINE_UI_EXTENSION_UICURVESLIDER_FACFEDMNFDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EA6E0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UICurveSlider_FACFEDMNFDB_TypeDefinitionIndex = 78238;

	class UICurveSlider_FACFEDMNFDB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICURVESLIDER_FACFEDMNFDB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICURVESLIDER_FACFEDMNFDB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::UnityEngine::UI::Extension::UICurveSlider*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UICurveSlider*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICURVESLIDER_FACFEDMNFDB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::UnityEngine::UI::Extension::UICurveSlider*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UICurveSlider*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICURVESLIDER_FACFEDMNFDB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
