#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class IFormatterResolver; }

#define COCIJMIENJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D759620)
#define COCIJMIENJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D759610)

inline static constexpr unsigned int COCIJMIENJK_TypeDefinitionIndex = 38135;

	class COCIJMIENJK : public ::System::Object
	{
	public:
		static ::MessagePack::IFormatterResolver** StaticGet_FMJPMFEDIJL()
		{
			return (::MessagePack::IFormatterResolver**)UnitySDK::FromName("", "COCIJMIENJK")->GetStaticField(0xD060);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCIJMIENJK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COCIJMIENJK_CCTOR_OFFSET))();
		}

	};
