#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNALLJBLNEI.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MPGNKFAPNME_CLEAR_OFFSET UNITYSDK_OFFSET(0xBA3DFD0)
#define MPGNKFAPNME_CTOR_OFFSET UNITYSDK_OFFSET(0xBA3E2A0)
#define MPGNKFAPNME_EGNOMFBOLKG_OFFSET UNITYSDK_OFFSET(0xBA3E050)
#define MPGNKFAPNME_FNFHICICHND_OFFSET UNITYSDK_OFFSET(0xBA3E170)

inline static constexpr unsigned int MPGNKFAPNME_TypeDefinitionIndex = 55644;

	class MPGNKFAPNME : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x10
		::System::Collections::Generic::List_1<::FNALLJBLNEI>* MHCBGFNFKNE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGNKFAPNME_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGNKFAPNME_CLEAR_OFFSET))(this);
		}

		::System::Boolean EGNOMFBOLKG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MPGNKFAPNME_EGNOMFBOLKG_OFFSET))(this, a1);
		}

		::System::Boolean FNFHICICHND(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MPGNKFAPNME_FNFHICICHND_OFFSET))(this, a1);
		}

	};
