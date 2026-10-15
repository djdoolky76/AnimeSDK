#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define HCEDEHAEPHP_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC64B80)
#define HCEDEHAEPHP_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC64B20)
#define HCEDEHAEPHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC64BF0)

inline static constexpr unsigned int HCEDEHAEPHP_TypeDefinitionIndex = 43902;

	class HCEDEHAEPHP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCEDEHAEPHP_CTOR_OFFSET))(this);
		}

		::System::Int64 Convert(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + HCEDEHAEPHP_CONVERT_OFFSET))(this, a1);
		}

		::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + HCEDEHAEPHP_CONVERTBOXED_OFFSET))(this, a1);
		}

	};
