#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class String; }

#define DPJACHFEMBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBF3F70)

inline static constexpr unsigned int DPJACHFEMBK_TypeDefinitionIndex = 44730;

	class DPJACHFEMBK : public ::System::Object
	{
	public:
		::System::String* JDIGAGMMKMG; // 0x10
		::System::UInt32 BGFILLIGHFA; // 0x18
		::System::UInt32 KHNINHBIKLE; // 0x1C
		::System::Int32 JFLMDBHNLOK; // 0x20
		::System::Boolean KKNJMPMIDPD; // 0x24
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 DCPCCPICEKC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJACHFEMBK_CTOR_OFFSET))(this);
		}

	};
