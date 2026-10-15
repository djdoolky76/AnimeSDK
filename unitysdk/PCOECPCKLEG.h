#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBuffName.h"
#include "unitysdk/System/Object.h"
class ENDEAPMHAOI;
class IFBFJDCECML;
class PBGNKMMDBGD;
class PCOECPCKLEG;
namespace RPG::GameCore { class CakeRaceBuffConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCOECPCKLEG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C7B9DC0)
#define PCOECPCKLEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7BD460)
#define PCOECPCKLEG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C7BA6F0)
#define PCOECPCKLEG_HKPPLGIMBJF_OFFSET UNITYSDK_OFFSET(0x1C79CCD0)
#define PCOECPCKLEG_IFOOEPKGGAG_OFFSET UNITYSDK_OFFSET(0x1C7BD600)
#define PCOECPCKLEG_JOENLGFDJAM_OFFSET UNITYSDK_OFFSET(0x1C7BDA80)
#define PCOECPCKLEG_LHECDBHFABB_OFFSET UNITYSDK_OFFSET(0x1C7BDB30)
#define PCOECPCKLEG_PIONJPDIBNG_OFFSET UNITYSDK_OFFSET(0x1C7BD550)

inline static constexpr unsigned int PCOECPCKLEG_TypeDefinitionIndex = 37287;

	class PCOECPCKLEG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::ENDEAPMHAOI*>*>* MGLAMPIIONC; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* BJBKBDJFBMB; // 0x18
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::PBGNKMMDBGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + PCOECPCKLEG_CTOR_OFFSET))(this, a1);
		}

		static ::PCOECPCKLEG* BPLPBPMEODA(::PBGNKMMDBGD* a1)
		{
			return ((::PCOECPCKLEG*(*)(::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + PCOECPCKLEG_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOECPCKLEG_DISPOSE_OFFSET))(this);
		}

		::System::Void PIONJPDIBNG(::IFBFJDCECML* a1, ::Il2CppArray<::RPG::GameCore::CakeRaceBuffConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::Il2CppArray<::RPG::GameCore::CakeRaceBuffConfig*>*))((::PBYTE)hIl2Cpp + PCOECPCKLEG_PIONJPDIBNG_OFFSET))(this, a1, a2);
		}

		::System::Void IFOOEPKGGAG(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceBuffConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::RPG::GameCore::CakeRaceBuffConfig*))((::PBYTE)hIl2Cpp + PCOECPCKLEG_IFOOEPKGGAG_OFFSET))(this, a1, a2);
		}

		::System::Void LHECDBHFABB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOECPCKLEG_LHECDBHFABB_OFFSET))(this);
		}

		::System::Void HKPPLGIMBJF(::System::Int32 a1, ::Il2CppArray<::RPG::GameCore::CakeRaceBuffName>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::RPG::GameCore::CakeRaceBuffName>*))((::PBYTE)hIl2Cpp + PCOECPCKLEG_HKPPLGIMBJF_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::ENDEAPMHAOI*>* JOENLGFDJAM(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::ENDEAPMHAOI*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PCOECPCKLEG_JOENLGFDJAM_OFFSET))(this, a1);
		}

	};
