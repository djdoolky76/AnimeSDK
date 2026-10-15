#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define FNBFKEGEIPM_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC92C70)
#define FNBFKEGEIPM_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC92BD0)
#define FNBFKEGEIPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC92D20)

inline static constexpr unsigned int FNBFKEGEIPM_TypeDefinitionIndex = 43898;

	class FNBFKEGEIPM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBFKEGEIPM_CTOR_OFFSET))(this);
		}

		::System::Int16 Convert(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Int16(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + FNBFKEGEIPM_CONVERT_OFFSET))(this, a1);
		}

		::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + FNBFKEGEIPM_CONVERTBOXED_OFFSET))(this, a1);
		}

	};
