#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectSlotGroup.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LDMIMCIHMFL.h"
class IMEFEGGEMIJ;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JEBBCFENCCH_BOKNBCGMCKK_OFFSET UNITYSDK_OFFSET(0x16617AD0)
#define JEBBCFENCCH_CTOR_OFFSET UNITYSDK_OFFSET(0x16617240)
#define JEBBCFENCCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16617300)
#define JEBBCFENCCH_FEDMEGGPCJB_OFFSET UNITYSDK_OFFSET(0x16617DF0)
#define JEBBCFENCCH_GJIIODKMJPK_OFFSET UNITYSDK_OFFSET(0x166174E0)
#define JEBBCFENCCH_JKFLDFPIJON_OFFSET UNITYSDK_OFFSET(0x16617400)
#define JEBBCFENCCH_JMNJBFJDJML_OFFSET UNITYSDK_OFFSET(0x16617820)
#define JEBBCFENCCH_LBJIPOLKJAB_OFFSET UNITYSDK_OFFSET(0x16617FB0)
#define JEBBCFENCCH_OCHKPLDKCNF_OFFSET UNITYSDK_OFFSET(0x16617B60)
#define JEBBCFENCCH_OMJPHOGEDNK_OFFSET UNITYSDK_OFFSET(0x16617570)
#define JEBBCFENCCH_PCAEBEDMLNE_OFFSET UNITYSDK_OFFSET(0x166178D0)

	class JEBBCFENCCH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IMEFEGGEMIJ*>* LKNHKKKELKJ; // 0x10
		::System::Collections::Generic::List_1<::IMEFEGGEMIJ*>* PBFNEKNAGKI; // 0x18
		static ::System::UInt32* StaticGet_FABJHECANMK()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "JEBBCFENCCH")->GetStaticField(0x8C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBBCFENCCH_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBBCFENCCH_DISPOSE_OFFSET))(this);
		}

		::System::Void JKFLDFPIJON(::IMEFEGGEMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMEFEGGEMIJ*))((::PBYTE)hIl2Cpp + JEBBCFENCCH_JKFLDFPIJON_OFFSET))(this, a1);
		}

		::System::Void GJIIODKMJPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEBBCFENCCH_GJIIODKMJPK_OFFSET))(this, a1);
		}

		::System::Boolean OMJPHOGEDNK(::LDMIMCIHMFL a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDMIMCIHMFL, ::System::Object*))((::PBYTE)hIl2Cpp + JEBBCFENCCH_OMJPHOGEDNK_OFFSET))(this, a1, a2);
		}

		::IMEFEGGEMIJ* JMNJBFJDJML(::System::UInt32 a1)
		{
			return ((::IMEFEGGEMIJ*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEBBCFENCCH_JMNJBFJDJML_OFFSET))(this, a1);
		}

		::IMEFEGGEMIJ* PCAEBEDMLNE(::LDMIMCIHMFL a1)
		{
			return ((::IMEFEGGEMIJ*(*)(::PVOID, ::LDMIMCIHMFL))((::PBYTE)hIl2Cpp + JEBBCFENCCH_PCAEBEDMLNE_OFFSET))(this, a1);
		}

		::IMEFEGGEMIJ* BOKNBCGMCKK(::LDMIMCIHMFL a1, ::System::Int32 a2)
		{
			return ((::IMEFEGGEMIJ*(*)(::PVOID, ::LDMIMCIHMFL, ::System::Int32))((::PBYTE)hIl2Cpp + JEBBCFENCCH_BOKNBCGMCKK_OFFSET))(this, a1, a2);
		}

		::IMEFEGGEMIJ* OCHKPLDKCNF(::LDMIMCIHMFL a1, ::System::Int32 a2)
		{
			return ((::IMEFEGGEMIJ*(*)(::PVOID, ::LDMIMCIHMFL, ::System::Int32))((::PBYTE)hIl2Cpp + JEBBCFENCCH_OCHKPLDKCNF_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 FEDMEGGPCJB(::IMEFEGGEMIJ* a1, ::RPG::GameCore::LittleGameSmartObjectSlotGroup a2, ::RPG::GameCore::LittleGameEntityType a3)
		{
			return ((::System::Int32(*)(::IMEFEGGEMIJ*, ::RPG::GameCore::LittleGameSmartObjectSlotGroup, ::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + JEBBCFENCCH_FEDMEGGPCJB_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 LBJIPOLKJAB(::IMEFEGGEMIJ* a1, ::RPG::GameCore::LittleGameSmartObjectSlotGroup a2, ::RPG::GameCore::LittleGameEntityType a3)
		{
			return ((::System::Int32(*)(::IMEFEGGEMIJ*, ::RPG::GameCore::LittleGameSmartObjectSlotGroup, ::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + JEBBCFENCCH_LBJIPOLKJAB_OFFSET))(a1, a2, a3);
		}

	};
