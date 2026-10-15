#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class EJHONGHJCNB;
namespace System { class Nullable; }
namespace System { class String; }

#define JJPNMFDELJH_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0xB20C520)
#define JJPNMFDELJH_CTOR_OFFSET UNITYSDK_OFFSET(0xB20C5C0)
#define JJPNMFDELJH_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xB20C4A0)
#define JJPNMFDELJH_LMCPNFFGMCO_OFFSET UNITYSDK_OFFSET(0xB20C450)
#define JJPNMFDELJH_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB20C5D0)

	class JJPNMFDELJH : public ::System::Object
	{
	public:
		::EJHONGHJCNB* IBPBJBOKKMF; // 0x10
		::System::Nullable* MIFKHBDOGLN; // 0x18
		::System::Void _ctor(::EJHONGHJCNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJHONGHJCNB*))((::PBYTE)hIl2Cpp + JJPNMFDELJH_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 LMCPNFFGMCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPNMFDELJH_LMCPNFFGMCO_OFFSET))(this);
		}

		::UnityEngine::Vector2Int HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPNMFDELJH_HHMFILFAMNA_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftRotationType CECMCADBMDE()
		{
			return ((::RPG::Client::MechCraft::MechCraftRotationType(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPNMFDELJH_CECMCADBMDE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPNMFDELJH_TOSTRING_OFFSET))(this);
		}

	};
