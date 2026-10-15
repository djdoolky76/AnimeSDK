#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDC0E8C0)
#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_HDNCGHBOMLL_OFFSET UNITYSDK_OFFSET(0xDC0E420)
#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_HIKEOACMNCI_OFFSET UNITYSDK_OFFSET(0xDC0E190)
#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_KFFGIANOLGL_OFFSET UNITYSDK_OFFSET(0xDC0E090)
#define RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_PMCJFEDPMGE_OFFSET UNITYSDK_OFFSET(0xDC0E010)

namespace RPG::Client
{
	class ProjectileBGCurveExportData : public ::System::Object
	{
	public:
		::System::String* SubCurveName; // 0x10
		::System::Int32 SubIndex; // 0x18
		::System::Single SessionExportMaxDistance; // 0x1C
		::System::Boolean EnableOverrideSpeed; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single OverrideCurveSpeed; // 0x24
		::RPG::GameCore::EaseType OverrideEaseType; // 0x28
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* OverrideTimeCurve; // 0x30
		::System::Int32 SectionParts; // 0x38
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* SessionExportDataList; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* KeyPathExportPointList; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 PMCJFEDPMGE(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_PMCJFEDPMGE_OFFSET))(this, a1);
		}

		::System::Single HIKEOACMNCI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_HIKEOACMNCI_OFFSET))(this);
		}

		::UnityEngine::Vector3 KFFGIANOLGL(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_KFFGIANOLGL_OFFSET))(this, a1);
		}

		::System::Int32 HDNCGHBOMLL(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROJECTILEBGCURVEEXPORTDATA_HDNCGHBOMLL_OFFSET))(this, a1);
		}

	};
}
