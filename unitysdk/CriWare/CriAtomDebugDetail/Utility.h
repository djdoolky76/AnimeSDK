#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CRIWARE_CRIATOMDEBUGDETAIL_UTILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x166CDA20)
#define CRIWARE_CRIATOMDEBUGDETAIL_UTILITY_PTRTOSTRINGAUTOORNULL_OFFSET UNITYSDK_OFFSET(0x166CD9F0)

namespace CriWare::CriAtomDebugDetail
{
	class Utility : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMDEBUGDETAIL_UTILITY_CTOR_OFFSET))(this);
		}

		static ::System::String* PtrToStringAutoOrNull(::System::IntPtr a1)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMDEBUGDETAIL_UTILITY_PTRTOSTRINGAUTOORNULL_OFFSET))(a1);
		}

	};
}
