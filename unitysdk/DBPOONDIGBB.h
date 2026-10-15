#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define DBPOONDIGBB_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1CC8F550)
#define DBPOONDIGBB_CONVERT_OFFSET UNITYSDK_OFFSET(0x1CC8F4D0)
#define DBPOONDIGBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC8F5E0)

	class DBPOONDIGBB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPOONDIGBB_CTOR_OFFSET))(this);
		}

		::System::UInt32 Convert(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + DBPOONDIGBB_CONVERT_OFFSET))(this, a1);
		}

		::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + DBPOONDIGBB_CONVERTBOXED_OFFSET))(this, a1);
		}

	};
