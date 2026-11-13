#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::CatGod { class CatGodGetShelfWindow; }

#define IDIMLIFCFGJ_CKCHJDLLNMH_OFFSET UNITYSDK_OFFSET(0x1778E980)
#define IDIMLIFCFGJ_CKDOPIGNOEG_OFFSET UNITYSDK_OFFSET(0x1778E9E0)
#define IDIMLIFCFGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1778EAA0)
#define IDIMLIFCFGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1778E940)

inline static constexpr unsigned int IDIMLIFCFGJ_TypeDefinitionIndex = 84433;

	class IDIMLIFCFGJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIMLIFCFGJ_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIMLIFCFGJ_DISPOSE_OFFSET))(this);
		}

		::System::Void CKCHJDLLNMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIMLIFCFGJ_CKCHJDLLNMH_OFFSET))(this);
		}

		::RPG::Client::CatGod::CatGodGetShelfWindow* CKDOPIGNOEG()
		{
			return ((::RPG::Client::CatGod::CatGodGetShelfWindow*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDIMLIFCFGJ_CKDOPIGNOEG_OFFSET))(this);
		}

	};
