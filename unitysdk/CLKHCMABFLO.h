#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDBOHDAGDHD;
class EANJILGOKBE;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLKHCMABFLO_AEPBGGMMGMK_OFFSET UNITYSDK_OFFSET(0xE3591C0)
#define CLKHCMABFLO_BJCOIKMNDPE_OFFSET UNITYSDK_OFFSET(0xE358B70)
#define CLKHCMABFLO_CTOR_OFFSET UNITYSDK_OFFSET(0xE3580B0)
#define CLKHCMABFLO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE3581F0)
#define CLKHCMABFLO_DLNDFBPLGOP_OFFSET UNITYSDK_OFFSET(0xE359130)
#define CLKHCMABFLO_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0xE358BD0)
#define CLKHCMABFLO_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0xE358630)
#define CLKHCMABFLO_HNHKBFLDBJI_OFFSET UNITYSDK_OFFSET(0xE3582E0)
#define CLKHCMABFLO_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0xE358F00)
#define CLKHCMABFLO_KCIEEJPFOCM_OFFSET UNITYSDK_OFFSET(0xE358480)
#define CLKHCMABFLO_LKBFLOIDENI_OFFSET UNITYSDK_OFFSET(0xE358D70)
#define CLKHCMABFLO_LMLBPPIIMDD_OFFSET UNITYSDK_OFFSET(0xE358160)
#define CLKHCMABFLO_NBKIEIPIEAE_OFFSET UNITYSDK_OFFSET(0xE3587D0)
#define CLKHCMABFLO_PFPBOPFOGPI_OFFSET UNITYSDK_OFFSET(0xE358870)

inline static constexpr unsigned int CLKHCMABFLO_TypeDefinitionIndex = 73421;

	class CLKHCMABFLO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnBasedModifierInstance*, ::EANJILGOKBE*>* IAKCIDOFHCC; // 0x10
		::CDBOHDAGDHD* EEOGCOCEPHC; // 0x18
		::System::Collections::Generic::List_1<::EANJILGOKBE*>* IJILNNAPAHH; // 0x20
		::System::Boolean EMJHNHGEFKP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKHCMABFLO_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::EANJILGOKBE*>* LMLBPPIIMDD()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::EANJILGOKBE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKHCMABFLO_LMLBPPIIMDD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKHCMABFLO_DISPOSE_OFFSET))(this);
		}

		::System::Void KCIEEJPFOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKHCMABFLO_KCIEEJPFOCM_OFFSET))(this);
		}

		::System::Void HNHKBFLDBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKHCMABFLO_HNHKBFLDBJI_OFFSET))(this);
		}

		::System::Void EBPDLMBPLBL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLKHCMABFLO_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void DMAOAKCPNAA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLKHCMABFLO_DMAOAKCPNAA_OFFSET))(this, a1);
		}

		::System::Void LKBFLOIDENI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLKHCMABFLO_LKBFLOIDENI_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLKHCMABFLO_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void AEPBGGMMGMK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLKHCMABFLO_AEPBGGMMGMK_OFFSET))(this, a1);
		}

		::EANJILGOKBE* PFPBOPFOGPI(::RPG::GameCore::TurnBasedModifierInstance* a1, ::System::Boolean a2)
		{
			return ((::EANJILGOKBE*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLKHCMABFLO_PFPBOPFOGPI_OFFSET))(this, a1, a2);
		}

		::System::Boolean NBKIEIPIEAE(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLKHCMABFLO_NBKIEIPIEAE_OFFSET))(this, a1);
		}

		::System::Boolean DLNDFBPLGOP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLKHCMABFLO_DLNDFBPLGOP_OFFSET))(this, a1);
		}

		::System::Void BJCOIKMNDPE(::EANJILGOKBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EANJILGOKBE*))((::PBYTE)hIl2Cpp + CLKHCMABFLO_BJCOIKMNDPE_OFFSET))(this, a1);
		}

	};
