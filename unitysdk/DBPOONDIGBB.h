#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define DBPOONDIGBB_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x20933ED0)
#define DBPOONDIGBB_CONVERT_OFFSET UNITYSDK_OFFSET(0x20933E50)
#define DBPOONDIGBB_CTOR_OFFSET UNITYSDK_OFFSET(0x20933F60)

inline static constexpr unsigned int DBPOONDIGBB_TypeDefinitionIndex = 44976;

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
