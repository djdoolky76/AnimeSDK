#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHBIHCBKKMB.h"
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int VolumeParameter_1_TypeDefinitionIndex = 74003;

	template <typename T>
	class VolumeParameter_1 : public ::MHBIHCBKKMB
	{
	public:
		T m_Value; // 0x0
		static ::System::Collections::Generic::IEqualityComparer_1<T>** StaticGet_comparer()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<T>**)UnitySDK::FromName("RPG.Client.OpenWorld", "VolumeParameter`1")->GetStaticField(0x0);
		}

	};
}
