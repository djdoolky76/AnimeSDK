#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class SceneLightVolume;
namespace System { template <typename T> class Comparison_1; }

inline static constexpr unsigned int EditorLightPreviewer___O_TypeDefinitionIndex = 47344;

	class EditorLightPreviewer___O : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::SceneLightVolume*>** StaticGet__0___CompareForSelection()
		{
			return (::System::Comparison_1<::SceneLightVolume*>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x47120);
		}

	};
