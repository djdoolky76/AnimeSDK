#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { class Version; }

#define DLEELFNHHCD_CTOR_OFFSET UNITYSDK_OFFSET(0xF895220)
#define DLEELFNHHCD_NOOEDJNPFPC_1_OFFSET UNITYSDK_OFFSET(0xF895160)
#define DLEELFNHHCD_NOOEDJNPFPC_OFFSET UNITYSDK_OFFSET(0xF895080)

inline static constexpr unsigned int DLEELFNHHCD_TypeDefinitionIndex = 82256;

	class DLEELFNHHCD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEELFNHHCD_CTOR_OFFSET))(this);
		}

		static ::System::String* NOOEDJNPFPC(::System::Version* a1, ::System::Version* a2)
		{
			return ((::System::String*(*)(::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + DLEELFNHHCD_NOOEDJNPFPC_OFFSET))(a1, a2);
		}

		static ::System::String* NOOEDJNPFPC_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DLEELFNHHCD_NOOEDJNPFPC_1_OFFSET))(a1, a2);
		}

	};
