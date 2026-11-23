#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_AE0184118209FB2E_INVOKE_OFFSET UNITYSDK_OFFSET(0x2911D30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_AE0184118209FB2E__CTOR_OFFSET UNITYSDK_OFFSET(0x4407350)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_AE0184118209FB2E_TypeDefinitionIndex = 19495;

	class BrowserNative_AE0184118209FB2E : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_AE0184118209FB2E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::IntPtr Invoke(::System::Int32 B98030ED206894D2, ::System::Int32 A342D5344F7596A8, ::System::Int32 F591F9C7707AAEEB, ::System::Int32 AE40CAA6BBFEAD2C, ::System::Int32 B35BBBE7E39341A2)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_AE0184118209FB2E_INVOKE_OFFSET))(this, B98030ED206894D2, A342D5344F7596A8, F591F9C7707AAEEB, AE40CAA6BBFEAD2C, B35BBBE7E39341A2);
		}
	};
}
