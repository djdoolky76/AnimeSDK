#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Hdg { class rdtSerializerRegistry_ConvertObjectDelegate; }

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerRegistry___O_TypeDefinitionIndex = 47996;

	class rdtSerializerRegistry___O : public ::System::Object
	{
	public:
		static ::Hdg::rdtSerializerRegistry_ConvertObjectDelegate** StaticGet__0___Serialize()
		{
			return (::Hdg::rdtSerializerRegistry_ConvertObjectDelegate**)UnitySDK::FromName("Hdg", "<>O")->GetStaticField(0x165C0);
		}

		static ::Hdg::rdtSerializerRegistry_ConvertObjectDelegate** StaticGet__1___Serialize()
		{
			return (::Hdg::rdtSerializerRegistry_ConvertObjectDelegate**)UnitySDK::FromName("Hdg", "<>O")->GetStaticField(0x165C8);
		}

		static ::Hdg::rdtSerializerRegistry_ConvertObjectDelegate** StaticGet__4___Serialize()
		{
			return (::Hdg::rdtSerializerRegistry_ConvertObjectDelegate**)UnitySDK::FromName("Hdg", "<>O")->GetStaticField(0x165D0);
		}

		static ::Hdg::rdtSerializerRegistry_ConvertObjectDelegate** StaticGet__2___Serialize()
		{
			return (::Hdg::rdtSerializerRegistry_ConvertObjectDelegate**)UnitySDK::FromName("Hdg", "<>O")->GetStaticField(0x165D8);
		}

		static ::Hdg::rdtSerializerRegistry_ConvertObjectDelegate** StaticGet__3___Serialize()
		{
			return (::Hdg::rdtSerializerRegistry_ConvertObjectDelegate**)UnitySDK::FromName("Hdg", "<>O")->GetStaticField(0x165E0);
		}

	};
}
