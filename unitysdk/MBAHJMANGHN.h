#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirContainerType.h"
#include "unitysdk/System/Object.h"
class MBAHJMANGHN;
namespace RPG::Client::PixAir { class PixAirBag; }
namespace RPG::Client::PixAir { class PixAirEquipBar; }
namespace RPG::Client::PixAir { class PixAirSlot; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MBAHJMANGHN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB858650)
#define MBAHJMANGHN_CDCOEHOLPBH_OFFSET UNITYSDK_OFFSET(0xB858430)
#define MBAHJMANGHN_CIMCIEACGFP_OFFSET UNITYSDK_OFFSET(0xB8582F0)
#define MBAHJMANGHN_COINIMNIMFB_OFFSET UNITYSDK_OFFSET(0xB858730)
#define MBAHJMANGHN_CTOR_OFFSET UNITYSDK_OFFSET(0xB858720)
#define MBAHJMANGHN_DELAGBBPDDE_OFFSET UNITYSDK_OFFSET(0xB858560)
#define MBAHJMANGHN_GET_BAG_OFFSET UNITYSDK_OFFSET(0xB8582D0)
#define MBAHJMANGHN_GET_EQUIPBAR_OFFSET UNITYSDK_OFFSET(0xB8582B0)
#define MBAHJMANGHN_GET_LEFT_OFFSET UNITYSDK_OFFSET(0xB858270)
#define MBAHJMANGHN_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0xB858290)
#define MBAHJMANGHN_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xB858230)
#define MBAHJMANGHN_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xB858250)
#define MBAHJMANGHN_GPFABBGLGKC_OFFSET UNITYSDK_OFFSET(0xB858510)
#define MBAHJMANGHN_INHHBHEHPIJ_OFFSET UNITYSDK_OFFSET(0xB858940)
#define MBAHJMANGHN_KCMBIGOIIOC_OFFSET UNITYSDK_OFFSET(0xB858D00)
#define MBAHJMANGHN_MJEPMBGIBNO_OFFSET UNITYSDK_OFFSET(0xB858CA0)
#define MBAHJMANGHN_NCHHECCKLGA_OFFSET UNITYSDK_OFFSET(0xB8585C0)
#define MBAHJMANGHN_PJEMGKGLDOK_OFFSET UNITYSDK_OFFSET(0xB858360)
#define MBAHJMANGHN_SET_BAG_OFFSET UNITYSDK_OFFSET(0xB8582E0)
#define MBAHJMANGHN_SET_EQUIPBAR_OFFSET UNITYSDK_OFFSET(0xB8582C0)
#define MBAHJMANGHN_SET_LEFT_OFFSET UNITYSDK_OFFSET(0xB858280)
#define MBAHJMANGHN_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0xB8582A0)
#define MBAHJMANGHN_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0xB858240)
#define MBAHJMANGHN_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xB858260)

inline static constexpr unsigned int MBAHJMANGHN_TypeDefinitionIndex = 79338;

	class MBAHJMANGHN : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirBag* _Bag_k__BackingField; // 0x10
		::RPG::Client::PixAir::PixAirSlot* _Right_k__BackingField; // 0x18
		::RPG::Client::PixAir::PixAirSlot* _Target_k__BackingField; // 0x20
		::RPG::Client::PixAir::PixAirSlot* _Source_k__BackingField; // 0x28
		::RPG::Client::PixAir::PixAirEquipBar* _EquipBar_k__BackingField; // 0x30
		::RPG::Client::PixAir::PixAirSlot* _Left_k__BackingField; // 0x38
		// static const ::System::Object MFMNLEOGPOK; // 0x0
		// static const ::System::Object NAHBDEAIAHE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHJMANGHN_CTOR_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirSlot* get_Source()
		{
			return ((::RPG::Client::PixAir::PixAirSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHJMANGHN_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::RPG::Client::PixAir::PixAirSlot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + MBAHJMANGHN_SET_SOURCE_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirSlot* get_Target()
		{
			return ((::RPG::Client::PixAir::PixAirSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHJMANGHN_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::RPG::Client::PixAir::PixAirSlot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + MBAHJMANGHN_SET_TARGET_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirSlot* get_Left()
		{
			return ((::RPG::Client::PixAir::PixAirSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHJMANGHN_GET_LEFT_OFFSET))(this);
		}

		::System::Void set_Left(::RPG::Client::PixAir::PixAirSlot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + MBAHJMANGHN_SET_LEFT_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirSlot* get_Right()
		{
			return ((::RPG::Client::PixAir::PixAirSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHJMANGHN_GET_RIGHT_OFFSET))(this);
		}

		::System::Void set_Right(::RPG::Client::PixAir::PixAirSlot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + MBAHJMANGHN_SET_RIGHT_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipBar* get_EquipBar()
		{
			return ((::RPG::Client::PixAir::PixAirEquipBar*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHJMANGHN_GET_EQUIPBAR_OFFSET))(this);
		}

		::System::Void set_EquipBar(::RPG::Client::PixAir::PixAirEquipBar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipBar*))((::PBYTE)hIl2Cpp + MBAHJMANGHN_SET_EQUIPBAR_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirBag* get_Bag()
		{
			return ((::RPG::Client::PixAir::PixAirBag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHJMANGHN_GET_BAG_OFFSET))(this);
		}

		::System::Void set_Bag(::RPG::Client::PixAir::PixAirBag* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirBag*))((::PBYTE)hIl2Cpp + MBAHJMANGHN_SET_BAG_OFFSET))(this, a1);
		}

		::System::Boolean CIMCIEACGFP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHJMANGHN_CIMCIEACGFP_OFFSET))(this);
		}

		::System::Int32 PJEMGKGLDOK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHJMANGHN_PJEMGKGLDOK_OFFSET))(this);
		}

		::System::Int32 CDCOEHOLPBH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHJMANGHN_CDCOEHOLPBH_OFFSET))(this);
		}

		::System::Int32 GPFABBGLGKC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHJMANGHN_GPFABBGLGKC_OFFSET))(this);
		}

		::System::Boolean DELAGBBPDDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHJMANGHN_DELAGBBPDDE_OFFSET))(this);
		}

		::System::Boolean NCHHECCKLGA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHJMANGHN_NCHHECCKLGA_OFFSET))(this);
		}

		static ::MBAHJMANGHN* BPLPBPMEODA(::RPG::Client::PixAir::PixAirSlot* a1, ::RPG::Client::PixAir::PixAirSlot* a2, ::RPG::Client::PixAir::PixAirEquipBar* a3, ::RPG::Client::PixAir::PixAirBag* a4)
		{
			return ((::MBAHJMANGHN*(*)(::RPG::Client::PixAir::PixAirSlot*, ::RPG::Client::PixAir::PixAirSlot*, ::RPG::Client::PixAir::PixAirEquipBar*, ::RPG::Client::PixAir::PixAirBag*))((::PBYTE)hIl2Cpp + MBAHJMANGHN_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirSlot*>* COINIMNIMFB(::RPG::Client::PixAir::PixAirContainerType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirSlot*>*(*)(::PVOID, ::RPG::Client::PixAir::PixAirContainerType))((::PBYTE)hIl2Cpp + MBAHJMANGHN_COINIMNIMFB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirSlot*>* INHHBHEHPIJ(::RPG::Client::PixAir::PixAirContainerType a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirSlot*>*(*)(::PVOID, ::RPG::Client::PixAir::PixAirContainerType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MBAHJMANGHN_INHHBHEHPIJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 MJEPMBGIBNO(::System::Int32 a1, ::RPG::Client::PixAir::PixAirContainerType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::RPG::Client::PixAir::PixAirContainerType))((::PBYTE)hIl2Cpp + MBAHJMANGHN_MJEPMBGIBNO_OFFSET))(this, a1, a2);
		}

		::System::Boolean KCMBIGOIIOC(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::PixAir::PixAirContainerType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::PixAir::PixAirContainerType))((::PBYTE)hIl2Cpp + MBAHJMANGHN_KCMBIGOIIOC_OFFSET))(this, a1, a2, a3);
		}

	};
