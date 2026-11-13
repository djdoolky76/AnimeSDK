#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define MHJMINBCLPJ_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x20938920)
#define MHJMINBCLPJ_CONVERT_OFFSET UNITYSDK_OFFSET(0x209388A0)
#define MHJMINBCLPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x20938870)

inline static constexpr unsigned int MHJMINBCLPJ_TypeDefinitionIndex = 44967;

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
