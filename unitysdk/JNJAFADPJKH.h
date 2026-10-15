#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNJAFADPJKH;
namespace RPG::Client { class GridFightGameTrait; }
namespace RPG::Client { class GridFightTeam; }
namespace RPG::Client { class IGridFightTraitShowEffect; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JNJAFADPJKH_BIHLHLDJOGG_OFFSET UNITYSDK_OFFSET(0xB285F90)
#define JNJAFADPJKH_BKOEHLMMGLP_OFFSET UNITYSDK_OFFSET(0xB2849F0)
#define JNJAFADPJKH_CTOR_OFFSET UNITYSDK_OFFSET(0xB2831D0)
#define JNJAFADPJKH_DAIOGJNMBCO_OFFSET UNITYSDK_OFFSET(0xB283260)
#define JNJAFADPJKH_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xB2830A0)
#define JNJAFADPJKH_MNKBANHFBND_OFFSET UNITYSDK_OFFSET(0xB285490)
#define JNJAFADPJKH_PPDFNIHBFOG_OFFSET UNITYSDK_OFFSET(0xB283D40)

inline static constexpr unsigned int JNJAFADPJKH_TypeDefinitionIndex = 65133;

	class JNJAFADPJKH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*>* CBHLKGEDNCN; // 0x10
		static ::JNJAFADPJKH** StaticGet_FLMODBLFAGD()
		{
			return (::JNJAFADPJKH**)UnitySDK::FromName("", "JNJAFADPJKH")->GetStaticField(0x22B70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJAFADPJKH_CTOR_OFFSET))(this);
		}

		static ::JNJAFADPJKH* GGBLHEHJBDO()
		{
			return ((::JNJAFADPJKH*(*)())((::PBYTE)hIl2Cpp + JNJAFADPJKH_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void DAIOGJNMBCO(::RPG::Client::GridFightTeam* a1, ::RPG::Client::GridFightGameTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeam*, ::RPG::Client::GridFightGameTrait*))((::PBYTE)hIl2Cpp + JNJAFADPJKH_DAIOGJNMBCO_OFFSET))(this, a1, a2);
		}

		::System::Void MNKBANHFBND(::RPG::Client::GridFightTeam* a1, ::RPG::Client::GridFightGameTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeam*, ::RPG::Client::GridFightGameTrait*))((::PBYTE)hIl2Cpp + JNJAFADPJKH_MNKBANHFBND_OFFSET))(this, a1, a2);
		}

		::System::Void PPDFNIHBFOG(::RPG::Client::GridFightGameTrait* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameTrait*))((::PBYTE)hIl2Cpp + JNJAFADPJKH_PPDFNIHBFOG_OFFSET))(this, a1);
		}

		::System::Void BKOEHLMMGLP(::RPG::Client::GridFightTeam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeam*))((::PBYTE)hIl2Cpp + JNJAFADPJKH_BKOEHLMMGLP_OFFSET))(this, a1);
		}

		::System::Void BIHLHLDJOGG(::System::UInt32 a1, ::RPG::Client::IGridFightTraitShowEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::IGridFightTraitShowEffect*))((::PBYTE)hIl2Cpp + JNJAFADPJKH_BIHLHLDJOGG_OFFSET))(this, a1, a2);
		}

	};
