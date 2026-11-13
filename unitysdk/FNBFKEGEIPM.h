#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define FNBFKEGEIPM_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x209375F0)
#define FNBFKEGEIPM_CONVERT_OFFSET UNITYSDK_OFFSET(0x20937550)
#define FNBFKEGEIPM_CTOR_OFFSET UNITYSDK_OFFSET(0x209376A0)

inline static constexpr unsigned int FNBFKEGEIPM_TypeDefinitionIndex = 44973;

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
