#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Tween/Ease.h"
#include "unitysdk/System/Object.h"
class MNCLEOJGFEO;
class NJFANBADGMB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HGDBKOHKGBI_AHOAJFILKBE_OFFSET UNITYSDK_OFFSET(0x15C93A00)
#define HGDBKOHKGBI_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x15C939C0)
#define HGDBKOHKGBI_CTOR_OFFSET UNITYSDK_OFFSET(0x15C92C70)
#define HGDBKOHKGBI_DJMNIKGBLOA_OFFSET UNITYSDK_OFFSET(0x15C93850)
#define HGDBKOHKGBI_KBEPPNDJDIH_OFFSET UNITYSDK_OFFSET(0x15C937D0)
#define HGDBKOHKGBI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15C92C80)

inline static constexpr unsigned int HGDBKOHKGBI_TypeDefinitionIndex = 73482;

	class HGDBKOHKGBI : public ::System::Object
	{
	public:
		::MNCLEOJGFEO* KEFLIEMLGJM; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Tween::Ease>* KJECEFGALAC; // 0x18
		::NJFANBADGMB* PLBDKMBLAEE; // 0x20
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
