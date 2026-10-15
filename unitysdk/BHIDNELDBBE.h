#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define BHIDNELDBBE_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC8F270)
#define BHIDNELDBBE_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC8F200)
#define BHIDNELDBBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC8F2F0)

inline static constexpr unsigned int BHIDNELDBBE_TypeDefinitionIndex = 43893;

	class BHIDNELDBBE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIDNELDBBE_CTOR_OFFSET))(this);
		}

		::System::Double Convert(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Double(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + BHIDNELDBBE_CONVERT_OFFSET))(this, a1);
		}

		::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + BHIDNELDBBE_CONVERTBOXED_OFFSET))(this, a1);
		}

	};
