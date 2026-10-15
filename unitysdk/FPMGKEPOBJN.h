#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPMGKEPOBJN;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTeam; }

#define FPMGKEPOBJN_CTOR_OFFSET UNITYSDK_OFFSET(0x15913B90)
#define FPMGKEPOBJN_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x15913B00)
#define FPMGKEPOBJN_IKCJDOFLKCE_OFFSET UNITYSDK_OFFSET(0x15913D80)
#define FPMGKEPOBJN_KAGGCHBEDCN_OFFSET UNITYSDK_OFFSET(0x15913BA0)
#define FPMGKEPOBJN_PEJJODPMBCG_OFFSET UNITYSDK_OFFSET(0x15913E70)
#define FPMGKEPOBJN_PPCBBEALMAO_OFFSET UNITYSDK_OFFSET(0x15913C90)

inline static constexpr unsigned int FPMGKEPOBJN_TypeDefinitionIndex = 65143;

	class FPMGKEPOBJN : public ::System::Object
	{
	public:
		static ::FPMGKEPOBJN** StaticGet_FLMODBLFAGD()
		{
			return (::FPMGKEPOBJN**)UnitySDK::FromName("", "FPMGKEPOBJN")->GetStaticField(0x54F00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMGKEPOBJN_CTOR_OFFSET))(this);
		}

		static ::FPMGKEPOBJN* GGBLHEHJBDO()
		{
			return ((::FPMGKEPOBJN*(*)())((::PBYTE)hIl2Cpp + FPMGKEPOBJN_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void KAGGCHBEDCN(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + FPMGKEPOBJN_KAGGCHBEDCN_OFFSET))(this, a1);
		}

		::System::Void PPCBBEALMAO(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + FPMGKEPOBJN_PPCBBEALMAO_OFFSET))(this, a1);
		}

		::System::Void IKCJDOFLKCE(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + FPMGKEPOBJN_IKCJDOFLKCE_OFFSET))(this, a1);
		}

		::System::Void PEJJODPMBCG(::RPG::Client::GridFightTeam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeam*))((::PBYTE)hIl2Cpp + FPMGKEPOBJN_PEJJODPMBCG_OFFSET))(this, a1);
		}

	};
