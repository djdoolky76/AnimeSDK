#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define EONDKJGOGPO_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC64670)
#define EONDKJGOGPO_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC645E0)
#define EONDKJGOGPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC64700)

inline static constexpr unsigned int EONDKJGOGPO_TypeDefinitionIndex = 43903;

	class EONDKJGOGPO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EONDKJGOGPO_CTOR_OFFSET))(this);
		}

		::System::UInt64 Convert(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + EONDKJGOGPO_CONVERT_OFFSET))(this, a1);
		}

		::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + EONDKJGOGPO_CONVERTBOXED_OFFSET))(this, a1);
		}

	};
