#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Generator { class CGMaterialSettingsEx; }
namespace FluffyUnderware::Curvy::Generator { class CGVolume; }
namespace FluffyUnderware::Curvy::Generator { class SamplePointsMaterialGroup; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUPCOLLECTION_CALCULATEASPECTCORRECTION_OFFSET UNITYSDK_OFFSET(0x1E7DE210)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUPCOLLECTION_GET_ASPECTCORRECTION_OFFSET UNITYSDK_OFFSET(0x1E7DE0F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUPCOLLECTION_GET_TRIANGLECOUNT_OFFSET UNITYSDK_OFFSET(0x1E7DDF90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUPCOLLECTION_SET_ASPECTCORRECTION_OFFSET UNITYSDK_OFFSET(0x1E7DE100)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUPCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7DE170)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUPCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E7DE1C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUPCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DE110)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int SamplePointsMaterialGroupCollection_TypeDefinitionIndex = 37565;

	class SamplePointsMaterialGroupCollection
	{
	public:
		::System::Int32 MaterialID; // 0x20
		::System::Single AspectCorrectionV; // 0x24
		::System::Single AspectCorrectionU; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUPCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUPCOLLECTION__CTOR_1_OFFSET))(this, capacity);
		}

		::System::Void _ctor_2(::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*>* collection)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUPCOLLECTION__CTOR_2_OFFSET))(this, collection);
		}

		::System::Int32 get_TriangleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUPCOLLECTION_GET_TRIANGLECOUNT_OFFSET))(this);
		}

		::System::Single get_AspectCorrection()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUPCOLLECTION_GET_ASPECTCORRECTION_OFFSET))(this);
		}

		::System::Void set_AspectCorrection(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUPCOLLECTION_SET_ASPECTCORRECTION_OFFSET))(this, value);
		}

		::System::Void CalculateAspectCorrection(::FluffyUnderware::Curvy::Generator::CGVolume* volume, ::FluffyUnderware::Curvy::Generator::CGMaterialSettingsEx* matSettings)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVolume*, ::FluffyUnderware::Curvy::Generator::CGMaterialSettingsEx*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SAMPLEPOINTSMATERIALGROUPCOLLECTION_CALCULATEASPECTCORRECTION_OFFSET))(this, volume, matSettings);
		}
	};
}
