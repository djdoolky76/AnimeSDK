#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define JHJPKHPBJHP_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC931C0)
#define JHJPKHPBJHP_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC93120)
#define JHJPKHPBJHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC93270)

inline static constexpr unsigned int JHJPKHPBJHP_TypeDefinitionIndex = 43899;

	class JHJPKHPBJHP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJPKHPBJHP_CTOR_OFFSET))(this);
		}

		::System::UInt16 Convert(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt16(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + JHJPKHPBJHP_CONVERT_OFFSET))(this, a1);
		}

		::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + JHJPKHPBJHP_CONVERTBOXED_OFFSET))(this, a1);
		}

	};
