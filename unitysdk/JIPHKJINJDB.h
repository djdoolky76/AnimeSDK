#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JIPHKJINJDB_CTOR_OFFSET UNITYSDK_OFFSET(0x17428640)
#define JIPHKJINJDB_KEOKEELBKHI_OFFSET UNITYSDK_OFFSET(0x174284C0)
#define JIPHKJINJDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17428540)

inline static constexpr unsigned int JIPHKJINJDB_TypeDefinitionIndex = 60552;

	class JIPHKJINJDB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPHKJINJDB_CTOR_OFFSET))(this);
		}

		::System::Boolean KEOKEELBKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPHKJINJDB_KEOKEELBKHI_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPHKJINJDB_TOSTRING_OFFSET))(this);
		}

	};
