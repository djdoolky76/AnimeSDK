#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class IFormatterResolver; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C72AA10)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C72A9B0)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_REGISTERTOGLOBALRESOLVER_OFFSET UNITYSDK_OFFSET(0x1C72A9C0)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_TypeDefinitionIndex = 36093;

	class GeneratedMessagePackResolver : public ::System::Object
	{
	public:
		static ::MessagePack::IFormatterResolver** StaticGet_FMJPMFEDIJL()
		{
			return (::MessagePack::IFormatterResolver**)UnitySDK::FromName("MessagePack", "GeneratedMessagePackResolver")->GetStaticField(0x164D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_CCTOR_OFFSET))();
		}

		static ::System::Void RegisterToGlobalResolver()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_REGISTERTOGLOBALRESOLVER_OFFSET))();
		}

	};
}
