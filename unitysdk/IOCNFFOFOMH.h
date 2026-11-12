#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define IOCNFFOFOMH_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1DE3A1C0)
#define IOCNFFOFOMH_CONVERT_OFFSET UNITYSDK_OFFSET(0x1DE3A1B0)
#define IOCNFFOFOMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE3A1D0)

inline static constexpr unsigned int IOCNFFOFOMH_TypeDefinitionIndex = 44983;

	class IOCNFFOFOMH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCNFFOFOMH_CTOR_OFFSET))(this);
		}

		::System::Object* Convert(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + IOCNFFOFOMH_CONVERT_OFFSET))(this, a1);
		}

		::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + IOCNFFOFOMH_CONVERTBOXED_OFFSET))(this, a1);
		}

	};
