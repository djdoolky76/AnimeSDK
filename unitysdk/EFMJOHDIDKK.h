#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLGICBNPGOO.h"
class EFMJOHDIDKK;
namespace RPG::GameCore { class BillboardIconConfigRow; }

#define EFMJOHDIDKK_COMPARE_OFFSET UNITYSDK_OFFSET(0x13A5DC80)
#define EFMJOHDIDKK_CTOR_OFFSET UNITYSDK_OFFSET(0x13A5DE60)
#define EFMJOHDIDKK_EKDIGFGDHOO_OFFSET UNITYSDK_OFFSET(0x13A5DD50)
#define EFMJOHDIDKK_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x13A5DDF0)

inline static constexpr unsigned int EFMJOHDIDKK_TypeDefinitionIndex = 57161;

	class EFMJOHDIDKK
	{
	public:
		static ::EFMJOHDIDKK** StaticGet_FLMODBLFAGD()
		{
			return (::EFMJOHDIDKK**)UnitySDK::FromName("", "EFMJOHDIDKK")->GetStaticField(0x6FFE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMJOHDIDKK_CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::HLGICBNPGOO a1, ::HLGICBNPGOO a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HLGICBNPGOO, ::HLGICBNPGOO))((::PBYTE)hIl2Cpp + EFMJOHDIDKK_COMPARE_OFFSET))(this, a1, a2);
		}

		static ::EFMJOHDIDKK* GGBLHEHJBDO()
		{
			return ((::EFMJOHDIDKK*(*)())((::PBYTE)hIl2Cpp + EFMJOHDIDKK_GGBLHEHJBDO_OFFSET))();
		}

		::RPG::GameCore::BillboardIconConfigRow* EKDIGFGDHOO(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BillboardIconConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EFMJOHDIDKK_EKDIGFGDHOO_OFFSET))(this, a1);
		}

	};
