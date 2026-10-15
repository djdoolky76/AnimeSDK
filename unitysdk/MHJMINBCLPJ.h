#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define MHJMINBCLPJ_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC93FA0)
#define MHJMINBCLPJ_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC93F20)
#define MHJMINBCLPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC93EF0)

	class MHJMINBCLPJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJMINBCLPJ_CTOR_OFFSET))(this);
		}

		::System::Single Convert(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + MHJMINBCLPJ_CONVERT_OFFSET))(this, a1);
		}

		::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + MHJMINBCLPJ_CONVERTBOXED_OFFSET))(this, a1);
		}

	};
