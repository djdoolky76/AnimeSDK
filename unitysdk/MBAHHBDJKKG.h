#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BMAIAAKIGGD.h"
#include "unitysdk/LDKPLFCLHFF.h"
#include "unitysdk/OBPDPGDFKGA.h"
class MDJBBILMHLC;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MBAHHBDJKKG_AGKJHPIKIED_OFFSET UNITYSDK_OFFSET(0xC0B90A0)
#define MBAHHBDJKKG_CGAEMMLOANP_OFFSET UNITYSDK_OFFSET(0xC0B93D0)
#define MBAHHBDJKKG_CTOR_OFFSET UNITYSDK_OFFSET(0xC0BA930)
#define MBAHHBDJKKG_EAPAELCJODF_OFFSET UNITYSDK_OFFSET(0xC0B9690)
#define MBAHHBDJKKG_EDGPEMKPINB_OFFSET UNITYSDK_OFFSET(0xC0B9090)
#define MBAHHBDJKKG_ENJBOPDFOGK_OFFSET UNITYSDK_OFFSET(0xC0B9080)
#define MBAHHBDJKKG_GNOMNKFIJMC_OFFSET UNITYSDK_OFFSET(0xC0B91C0)
#define MBAHHBDJKKG_HOOFLJNALCA_OFFSET UNITYSDK_OFFSET(0xC0BA0F0)
#define MBAHHBDJKKG_JAKLNEGOBOC_OFFSET UNITYSDK_OFFSET(0xC0B9A20)
#define MBAHHBDJKKG_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0xC0B8F90)
#define MBAHHBDJKKG_JKIIEKLBAOM_OFFSET UNITYSDK_OFFSET(0xC0B91D0)
#define MBAHHBDJKKG_NLNMIFGHMPK_OFFSET UNITYSDK_OFFSET(0xC0BA6A0)
#define MBAHHBDJKKG_OMJLNCKGJOK_OFFSET UNITYSDK_OFFSET(0xC0B9AD0)
#define MBAHHBDJKKG_PGBFIGJLGCO_OFFSET UNITYSDK_OFFSET(0xC0B9DC0)

inline static constexpr unsigned int MBAHHBDJKKG_TypeDefinitionIndex = 60980;

	class MBAHHBDJKKG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHHBDJKKG_CTOR_OFFSET))(this);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHHBDJKKG_JKEONEEPIHH_OFFSET))(this);
		}

		::RPG::GameCore::StageType ENJBOPDFOGK()
		{
			return ((::RPG::GameCore::StageType(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHHBDJKKG_ENJBOPDFOGK_OFFSET))(this);
		}

		::System::String* EDGPEMKPINB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHHBDJKKG_EDGPEMKPINB_OFFSET))(this);
		}

		::System::String* AGKJHPIKIED()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHHBDJKKG_AGKJHPIKIED_OFFSET))(this);
		}

		::System::Boolean GNOMNKFIJMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHHBDJKKG_GNOMNKFIJMC_OFFSET))(this);
		}

		::System::Void JKIIEKLBAOM(::System::Collections::Generic::List_1<::OBPDPGDFKGA>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::OBPDPGDFKGA>*))((::PBYTE)hIl2Cpp + MBAHHBDJKKG_JKIIEKLBAOM_OFFSET))(this, a1);
		}

		::System::Void CGAEMMLOANP(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + MBAHHBDJKKG_CGAEMMLOANP_OFFSET))(this, a1, a2);
		}

		::System::Void EAPAELCJODF(::System::Collections::Generic::List_1<::BMAIAAKIGGD>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BMAIAAKIGGD>*))((::PBYTE)hIl2Cpp + MBAHHBDJKKG_EAPAELCJODF_OFFSET))(this, a1);
		}

		::System::Void OMJLNCKGJOK(::System::Collections::Generic::List_1<::LDKPLFCLHFF>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LDKPLFCLHFF>*))((::PBYTE)hIl2Cpp + MBAHHBDJKKG_OMJLNCKGJOK_OFFSET))(this, a1);
		}

		::System::Void PGBFIGJLGCO(::MDJBBILMHLC* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MDJBBILMHLC*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MBAHHBDJKKG_PGBFIGJLGCO_OFFSET))(this, a1, a2);
		}

		::System::Void HOOFLJNALCA(::MDJBBILMHLC* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MDJBBILMHLC*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MBAHHBDJKKG_HOOFLJNALCA_OFFSET))(this, a1, a2);
		}

		::System::Boolean JAKLNEGOBOC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MBAHHBDJKKG_JAKLNEGOBOC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NLNMIFGHMPK(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MBAHHBDJKKG_NLNMIFGHMPK_OFFSET))(this, a1, a2, a3, a4);
		}

	};
