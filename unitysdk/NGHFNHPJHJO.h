#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactBeginTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactEndTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorBeginTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorEndTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldDef.h"
class BLLCHHIMKCJ;
class CAHLPKGIABH;
class EDPAHELFOKO;
class FDHAMJODAAN;
class MDHODFHBAAO;
class NDPPHPJKOLN;
class NGHFNHPJHJO_CLEGAIALJMO;
class NGHFNHPJHJO_KEBOFLGJPIN;
class PKBGGJPKDKM;
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NGHFNHPJHJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C795A60)
#define NGHFNHPJHJO_DBJJEAMDDGA_OFFSET UNITYSDK_OFFSET(0x1C794CC0)
#define NGHFNHPJHJO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C794590)
#define NGHFNHPJHJO_ELPLIEIMKLP_OFFSET UNITYSDK_OFFSET(0x1C7946F0)
#define NGHFNHPJHJO_EMGHKGONAOG_1_OFFSET UNITYSDK_OFFSET(0x1C7950E0)
#define NGHFNHPJHJO_EMGHKGONAOG_OFFSET UNITYSDK_OFFSET(0x1C795040)
#define NGHFNHPJHJO_FPGIAIBIPPG_OFFSET UNITYSDK_OFFSET(0x1C7947D0)
#define NGHFNHPJHJO_GANKDAICOEL_OFFSET UNITYSDK_OFFSET(0x1C794B60)
#define NGHFNHPJHJO_HHLIJNJIKKG_OFFSET UNITYSDK_OFFSET(0x1C7944C0)
#define NGHFNHPJHJO_IPFIBIFKLJB_OFFSET UNITYSDK_OFFSET(0x1C7941F0)
#define NGHFNHPJHJO_LMINGHNKMCC_1_OFFSET UNITYSDK_OFFSET(0x1C794F90)
#define NGHFNHPJHJO_LMINGHNKMCC_OFFSET UNITYSDK_OFFSET(0x1C794EE0)
#define NGHFNHPJHJO_PEMIKBNHOEI_OFFSET UNITYSDK_OFFSET(0x1C794440)

	class NGHFNHPJHJO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NDPPHPJKOLN*>* OCDPAMHBHCO; // 0x10
		::NGHFNHPJHJO_CLEGAIALJMO* ADFPMLFAPPA; // 0x18
		::System::Collections::Generic::List_1<::CAHLPKGIABH*>* NLDANKHFLGA; // 0x20
		::NGHFNHPJHJO_KEBOFLGJPIN* LGPJIHPHLIB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_CTOR_OFFSET))(this);
		}

		::MDHODFHBAAO* IPFIBIFKLJB(::BLLCHHIMKCJ* a1)
		{
			return ((::MDHODFHBAAO*(*)(::PVOID, ::BLLCHHIMKCJ*))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_IPFIBIFKLJB_OFFSET))(this, a1);
		}

		::System::Void HHLIJNJIKKG(::MDHODFHBAAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDHODFHBAAO*))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_HHLIJNJIKKG_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_DISPOSE_OFFSET))(this);
		}

		::System::Void ELPLIEIMKLP(::MDHODFHBAAO* a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MDHODFHBAAO*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_ELPLIEIMKLP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GANKDAICOEL(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_GANKDAICOEL_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IList_1<::CAHLPKGIABH*>* DBJJEAMDDGA(::MDHODFHBAAO* a1)
		{
			return ((::System::Collections::Generic::IList_1<::CAHLPKGIABH*>*(*)(::PVOID, ::MDHODFHBAAO*))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_DBJJEAMDDGA_OFFSET))(this, a1);
		}

		::System::Void PEMIKBNHOEI(::BLLCHHIMKCJ* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldDef a2)
		{
			return ((::System::Void(*)(::PVOID, ::BLLCHHIMKCJ*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldDef))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_PEMIKBNHOEI_OFFSET))(this, a1, a2);
		}

		::System::Void FPGIAIBIPPG(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::FDHAMJODAAN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::FDHAMJODAAN*))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_FPGIAIBIPPG_OFFSET))(this, a1, a2);
		}

		::System::Boolean LMINGHNKMCC(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactBeginTouchEvent a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2, ::EDPAHELFOKO* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactBeginTouchEvent, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::EDPAHELFOKO*))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_LMINGHNKMCC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EMGHKGONAOG(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorBeginTouchEvent a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2, ::PKBGGJPKDKM* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorBeginTouchEvent, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::PKBGGJPKDKM*))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_EMGHKGONAOG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean LMINGHNKMCC_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactEndTouchEvent a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2, ::EDPAHELFOKO* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactEndTouchEvent, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::EDPAHELFOKO*))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_LMINGHNKMCC_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EMGHKGONAOG_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorEndTouchEvent a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a2, ::PKBGGJPKDKM* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorEndTouchEvent, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::PKBGGJPKDKM*))((::PBYTE)hIl2Cpp + NGHFNHPJHJO_EMGHKGONAOG_1_OFFSET))(this, a1, a2, a3);
		}

	};
