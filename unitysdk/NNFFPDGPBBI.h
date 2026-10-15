#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define NNFFPDGPBBI_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC940D0)
#define NNFFPDGPBBI_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC94030)
#define NNFFPDGPBBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC93EE0)

inline static constexpr unsigned int NNFFPDGPBBI_TypeDefinitionIndex = 43900;

	class NNFFPDGPBBI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFFPDGPBBI_CTOR_OFFSET))(this);
		}

		::System::Int32 Convert(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + NNFFPDGPBBI_CONVERT_OFFSET))(this, a1);
		}

		::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + NNFFPDGPBBI_CONVERTBOXED_OFFSET))(this, a1);
		}

	};
