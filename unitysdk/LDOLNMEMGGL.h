#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHMEPILLHL.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueMiracle; }
namespace System { class String; }

#define LDOLNMEMGGL_CTOR_OFFSET UNITYSDK_OFFSET(0xBEDA920)
#define LDOLNMEMGGL_GET_MIRACLE_OFFSET UNITYSDK_OFFSET(0xBEDAA80)
#define LDOLNMEMGGL_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xBEDAA90)
#define LDOLNMEMGGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBEDA930)
#define LDOLNMEMGGL_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xBEDA9D0)

inline static constexpr unsigned int LDOLNMEMGGL_TypeDefinitionIndex = 68961;

	class LDOLNMEMGGL : public ::System::Object
	{
	public:
		::RPG::Client::IRogueMiracle* _Miracle_k__BackingField; // 0x10
		::NHHMEPILLHL _Source_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::IRogueMiracle* a1, ::NHHMEPILLHL a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueMiracle*, ::NHHMEPILLHL))((::PBYTE)hIl2Cpp + LDOLNMEMGGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOLNMEMGGL_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOLNMEMGGL_TRIGGERACTION_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracle* get_Miracle()
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOLNMEMGGL_GET_MIRACLE_OFFSET))(this);
		}

		::NHHMEPILLHL get_Source()
		{
			return ((::NHHMEPILLHL(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOLNMEMGGL_GET_SOURCE_OFFSET))(this);
		}

	};
