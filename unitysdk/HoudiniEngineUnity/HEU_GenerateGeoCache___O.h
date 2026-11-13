#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2> class Converter_2; }

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GenerateGeoCache___O_TypeDefinitionIndex = 41612;

	class HEU_GenerateGeoCache___O : public ::System::Object
	{
	public:
		static ::System::Converter_2<::System::Int16, ::System::Single>** StaticGet__2___ToSingle()
		{
			return (::System::Converter_2<::System::Int16, ::System::Single>**)UnitySDK::FromName("HoudiniEngineUnity", "<>O")->GetStaticField(0x61F70);
		}

		static ::System::Converter_2<::System::Int32, ::System::Single>** StaticGet__0___ToSingle()
		{
			return (::System::Converter_2<::System::Int32, ::System::Single>**)UnitySDK::FromName("HoudiniEngineUnity", "<>O")->GetStaticField(0x61F78);
		}

		static ::System::Converter_2<::System::SByte, ::System::Single>** StaticGet__1___ToSingle()
		{
			return (::System::Converter_2<::System::SByte, ::System::Single>**)UnitySDK::FromName("HoudiniEngineUnity", "<>O")->GetStaticField(0x61F80);
		}

		static ::System::Converter_2<::System::Double, ::System::Single>** StaticGet__4___ToSingle()
		{
			return (::System::Converter_2<::System::Double, ::System::Single>**)UnitySDK::FromName("HoudiniEngineUnity", "<>O")->GetStaticField(0x61F88);
		}

		static ::System::Converter_2<::System::Int64, ::System::Single>** StaticGet__3___ToSingle()
		{
			return (::System::Converter_2<::System::Int64, ::System::Single>**)UnitySDK::FromName("HoudiniEngineUnity", "<>O")->GetStaticField(0x61F90);
		}

	};
}
