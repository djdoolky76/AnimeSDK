#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightFinancing; }

#define DBMFMNKBKMF_CTOR_OFFSET UNITYSDK_OFFSET(0xE232B30)
#define DBMFMNKBKMF_DJKCKOEBPLF_OFFSET UNITYSDK_OFFSET(0xE232B40)
#define DBMFMNKBKMF__GETSPECIALDISPLAYPARAM_B__1_0_OFFSET UNITYSDK_OFFSET(0xE232DF0)

inline static constexpr unsigned int DBMFMNKBKMF_TypeDefinitionIndex = 64972;

	class DBMFMNKBKMF : public ::System::Object
	{
	public:
		::System::UInt32 BNCPBBHOOKB; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBMFMNKBKMF_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 DJKCKOEBPLF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMFMNKBKMF_DJKCKOEBPLF_OFFSET))(this);
		}

		::System::Boolean _GetSpecialDisplayParam_b__1_0(::RPG::Client::GridFightFinancing* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFinancing*))((::PBYTE)hIl2Cpp + DBMFMNKBKMF__GETSPECIALDISPLAYPARAM_B__1_0_OFFSET))(this, a1);
		}

	};
