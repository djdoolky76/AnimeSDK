#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define IOCNFFOFOMH_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC93030)
#define IOCNFFOFOMH_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC93020)
#define IOCNFFOFOMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC93040)

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
