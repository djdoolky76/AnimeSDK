#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class AvatarPropertyValue; }

#define JGGNIOIBDBC_AMLOLAENOCK_OFFSET UNITYSDK_OFFSET(0xB199B50)
#define JGGNIOIBDBC_CTOR_OFFSET UNITYSDK_OFFSET(0xB199DB0)
#define JGGNIOIBDBC_DCBIIDPFHHP_OFFSET UNITYSDK_OFFSET(0xB199A70)
#define JGGNIOIBDBC_GFCHPAIEDGJ_OFFSET UNITYSDK_OFFSET(0xB199AE0)
#define JGGNIOIBDBC_GLKIHNPBDGD_OFFSET UNITYSDK_OFFSET(0xB199CC0)
#define JGGNIOIBDBC_JAGLELILLMI_OFFSET UNITYSDK_OFFSET(0xB199BC0)
#define JGGNIOIBDBC_LPPJNMBMCKC_OFFSET UNITYSDK_OFFSET(0xB199C40)

	class JGGNIOIBDBC : public ::System::Object
	{
	public:
		::System::UInt32 GBJLLAJJEOL; // 0x10
		::System::UInt32 AAGKEBFHLMC; // 0x14
		::System::UInt32 KEDEOHMDAEL; // 0x18
		::System::UInt32 KPAHFGEFKEB; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGNIOIBDBC_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint DCBIIDPFHHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGNIOIBDBC_DCBIIDPFHHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GFCHPAIEDGJ()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGNIOIBDBC_GFCHPAIEDGJ_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint AMLOLAENOCK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGNIOIBDBC_AMLOLAENOCK_OFFSET))(this);
		}

		::System::UInt32 JAGLELILLMI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGNIOIBDBC_JAGLELILLMI_OFFSET))(this);
		}

		::RPG::GameCore::AvatarBaseType LPPJNMBMCKC()
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGNIOIBDBC_LPPJNMBMCKC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* GLKIHNPBDGD()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGNIOIBDBC_GLKIHNPBDGD_OFFSET))(this);
		}

	};
