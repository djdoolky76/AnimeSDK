#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define BPAICANEHBO_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC8F420)
#define BPAICANEHBO_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC8F300)
#define BPAICANEHBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC8F450)

inline static constexpr unsigned int BPAICANEHBO_TypeDefinitionIndex = 43911;

	class BPAICANEHBO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAICANEHBO_CTOR_OFFSET))(this);
		}

		::System::Char Convert(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Char(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + BPAICANEHBO_CONVERT_OFFSET))(this, a1);
		}

		::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + BPAICANEHBO_CONVERTBOXED_OFFSET))(this, a1);
		}

	};
