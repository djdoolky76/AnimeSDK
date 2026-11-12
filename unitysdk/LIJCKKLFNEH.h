#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LuaSystem; }
namespace System { class String; }

#define LIJCKKLFNEH_BJANGKANEGD_OFFSET UNITYSDK_OFFSET(0xBF6D590)
#define LIJCKKLFNEH_CTOR_OFFSET UNITYSDK_OFFSET(0xBF6D540)
#define LIJCKKLFNEH_GMHLBOJBALB_OFFSET UNITYSDK_OFFSET(0xBF6D6A0)
#define LIJCKKLFNEH_IOMJIGEGLLE_OFFSET UNITYSDK_OFFSET(0xBF6D660)

inline static constexpr unsigned int LIJCKKLFNEH_TypeDefinitionIndex = 60698;

	class LIJCKKLFNEH : public ::System::Object
	{
	public:
		::RPG::Client::LuaSystem* AMHOLKLMDKL; // 0x10
		// static const ::System::String* AEBFIALOFOL; // 0x0
		::System::Void _ctor(::RPG::Client::LuaSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaSystem*))((::PBYTE)hIl2Cpp + LIJCKKLFNEH_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean BJANGKANEGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJCKKLFNEH_BJANGKANEGD_OFFSET))(this);
		}

		::System::String* GMHLBOJBALB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJCKKLFNEH_GMHLBOJBALB_OFFSET))(this);
		}

		static ::System::Boolean IOMJIGEGLLE()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIJCKKLFNEH_IOMJIGEGLLE_OFFSET))();
		}

	};
