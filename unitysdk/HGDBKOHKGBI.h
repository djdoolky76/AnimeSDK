#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Tween/Ease.h"
#include "unitysdk/System/Object.h"
class MNCLEOJGFEO;
class NJFANBADGMB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HGDBKOHKGBI_AHOAJFILKBE_OFFSET UNITYSDK_OFFSET(0x15C87080)
#define HGDBKOHKGBI_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x15C87040)
#define HGDBKOHKGBI_CTOR_OFFSET UNITYSDK_OFFSET(0x15C862F0)
#define HGDBKOHKGBI_DJMNIKGBLOA_OFFSET UNITYSDK_OFFSET(0x15C86ED0)
#define HGDBKOHKGBI_KBEPPNDJDIH_OFFSET UNITYSDK_OFFSET(0x15C86E50)
#define HGDBKOHKGBI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15C86300)

inline static constexpr unsigned int HGDBKOHKGBI_TypeDefinitionIndex = 73481;

	class HGDBKOHKGBI : public ::System::Object
	{
	public:
		::NJFANBADGMB* PLBDKMBLAEE; // 0x10
		::MNCLEOJGFEO* KEFLIEMLGJM; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Tween::Ease>* KJECEFGALAC; // 0x20
		::System::Boolean GBKLKFDBLDH; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDBKOHKGBI_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDBKOHKGBI_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDBKOHKGBI_BJMNKLGEMPM_OFFSET))(this);
		}

		::MNCLEOJGFEO* KBEPPNDJDIH(::System::String* a1)
		{
			return ((::MNCLEOJGFEO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HGDBKOHKGBI_KBEPPNDJDIH_OFFSET))(this, a1);
		}

		::NJFANBADGMB* DJMNIKGBLOA(::System::String* a1)
		{
			return ((::NJFANBADGMB*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HGDBKOHKGBI_DJMNIKGBLOA_OFFSET))(this, a1);
		}

		::MNCLEOJGFEO* AHOAJFILKBE(::System::String* a1)
		{
			return ((::MNCLEOJGFEO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HGDBKOHKGBI_AHOAJFILKBE_OFFSET))(this, a1);
		}

	};
