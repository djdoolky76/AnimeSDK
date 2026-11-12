#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }
namespace System { class String; }

#define OAPILBPJKPE_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1DE3B350)
#define OAPILBPJKPE_CONVERT_OFFSET UNITYSDK_OFFSET(0x1DE3B310)
#define OAPILBPJKPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE3B0A0)

inline static constexpr unsigned int OAPILBPJKPE_TypeDefinitionIndex = 44985;

	class OAPILBPJKPE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPILBPJKPE_CTOR_OFFSET))(this);
		}

		::System::String* Convert(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + OAPILBPJKPE_CONVERT_OFFSET))(this, a1);
		}

		::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + OAPILBPJKPE_CONVERTBOXED_OFFSET))(this, a1);
		}

	};
