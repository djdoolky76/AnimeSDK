#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define KBCMPOHOIDL_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC93290)
#define KBCMPOHOIDL_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC93280)
#define KBCMPOHOIDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC932A0)

	class KBCMPOHOIDL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCMPOHOIDL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::DynamicValue* Convert(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::RPG::GameCore::DynamicValue*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + KBCMPOHOIDL_CONVERT_OFFSET))(this, a1);
		}

		::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + KBCMPOHOIDL_CONVERTBOXED_OFFSET))(this, a1);
		}

	};
