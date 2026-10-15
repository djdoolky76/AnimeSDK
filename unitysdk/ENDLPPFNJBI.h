#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENDLPPFNJBI;
namespace RPG::Client { class IRogueTournDifficulty; }

#define ENDLPPFNJBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x155A7760)
#define ENDLPPFNJBI_COMPARE_OFFSET UNITYSDK_OFFSET(0x155A7330)
#define ENDLPPFNJBI_CTOR_OFFSET UNITYSDK_OFFSET(0x155A7750)
#define ENDLPPFNJBI_EAAMDCHNHOC_OFFSET UNITYSDK_OFFSET(0x155A7420)
#define ENDLPPFNJBI_PKMJFHMCEED_OFFSET UNITYSDK_OFFSET(0x155A7520)

inline static constexpr unsigned int ENDLPPFNJBI_TypeDefinitionIndex = 67587;

	class ENDLPPFNJBI : public ::System::Object
	{
	public:
		static ::ENDLPPFNJBI** StaticGet_FMJPMFEDIJL()
		{
			return (::ENDLPPFNJBI**)UnitySDK::FromName("", "ENDLPPFNJBI")->GetStaticField(0x505B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDLPPFNJBI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENDLPPFNJBI_CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::RPG::Client::IRogueTournDifficulty* a1, ::RPG::Client::IRogueTournDifficulty* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + ENDLPPFNJBI_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Int32 EAAMDCHNHOC(::RPG::Client::IRogueTournDifficulty* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + ENDLPPFNJBI_EAAMDCHNHOC_OFFSET))(this, a1);
		}

		::System::Int32 PKMJFHMCEED(::RPG::Client::IRogueTournDifficulty* a1, ::RPG::Client::IRogueTournDifficulty* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + ENDLPPFNJBI_PKMJFHMCEED_OFFSET))(this, a1, a2);
		}

	};
