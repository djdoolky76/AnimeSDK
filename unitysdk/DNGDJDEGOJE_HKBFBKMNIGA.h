#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOCEFINCMMO;
namespace RPG::GameCore { class EventManager; }
namespace System { class Action; }
namespace System { class Object; }

#define DNGDJDEGOJE_HKBFBKMNIGA_CMMHAKEAFAC_OFFSET UNITYSDK_OFFSET(0x1194EC90)
#define DNGDJDEGOJE_HKBFBKMNIGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1194E8D0)
#define DNGDJDEGOJE_HKBFBKMNIGA_DHKPEPMOPMK_OFFSET UNITYSDK_OFFSET(0x1194EB10)
#define DNGDJDEGOJE_HKBFBKMNIGA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1194EA70)
#define DNGDJDEGOJE_HKBFBKMNIGA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1194EC50)

inline static constexpr unsigned int DNGDJDEGOJE_HKBFBKMNIGA_TypeDefinitionIndex = 58868;

	class DNGDJDEGOJE_HKBFBKMNIGA : public ::System::Object
	{
	public:
		::System::Action* BJLJAHMLKIO; // 0x10
		::IOCEFINCMMO* JELPBNHCPCO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_HKBFBKMNIGA_CTOR_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_HKBFBKMNIGA_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void DHKPEPMOPMK(::RPG::GameCore::EventManager* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventManager*, ::System::Action*))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_HKBFBKMNIGA_DHKPEPMOPMK_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_HKBFBKMNIGA_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void CMMHAKEAFAC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_HKBFBKMNIGA_CMMHAKEAFAC_OFFSET))(this, a1);
		}

	};
