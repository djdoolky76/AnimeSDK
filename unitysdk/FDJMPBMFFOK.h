#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define FDJMPBMFFOK_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC92A90)
#define FDJMPBMFFOK_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC92970)
#define FDJMPBMFFOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC92BC0)

	class FDJMPBMFFOK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJMPBMFFOK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint Convert(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + FDJMPBMFFOK_CONVERT_OFFSET))(this, a1);
		}

		::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + FDJMPBMFFOK_CONVERTBOXED_OFFSET))(this, a1);
		}

	};
