#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"
class FLKGLAHINMI;
class GNCIMMMAGLO;
class LGNJPFPACGH;
class PLLPNJOEDHF;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client::ActivityIdleLive { class PendingEquipData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }
namespace System { class Object; }

#define GNCIMMMAGLO_AEPNFCKLDFK_OFFSET UNITYSDK_OFFSET(0x15AF1E90)
#define GNCIMMMAGLO_AHMDGKINKML_OFFSET UNITYSDK_OFFSET(0x15AF1D70)
#define GNCIMMMAGLO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15AF16B0)
#define GNCIMMMAGLO_CTOR_OFFSET UNITYSDK_OFFSET(0x15AF15E0)
#define GNCIMMMAGLO_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x15AF1820)
#define GNCIMMMAGLO_EEKAJOLHJHE_OFFSET UNITYSDK_OFFSET(0x15AF1EE0)
#define GNCIMMMAGLO_EIODGIHAOOP_OFFSET UNITYSDK_OFFSET(0x15AF1AC0)
#define GNCIMMMAGLO_GGOEALCLNCI_OFFSET UNITYSDK_OFFSET(0x15AF19B0)
#define GNCIMMMAGLO_IOKPBOJAOCI_OFFSET UNITYSDK_OFFSET(0x15AF1D10)
#define GNCIMMMAGLO_OPFGDLCEMGI_OFFSET UNITYSDK_OFFSET(0x15AF1E40)
#define GNCIMMMAGLO_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x15AF1DD0)
#define GNCIMMMAGLO__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x15AF2030)
#define GNCIMMMAGLO__TRYFETCHEQUIPTOSELECT_B__8_0_OFFSET UNITYSDK_OFFSET(0x15AF2120)
#define GNCIMMMAGLO__TRYFETCHEQUIPTOSELECT_B__8_1_OFFSET UNITYSDK_OFFSET(0x15AF2370)
#define GNCIMMMAGLO___REQUESTGETPENDINGEQUIP_B__14_0_OFFSET UNITYSDK_OFFSET(0x15AF23D0)

inline static constexpr unsigned int GNCIMMMAGLO_TypeDefinitionIndex = 75289;

	class GNCIMMMAGLO : public ::RPG::Client::BaseGameFlowContext
	{
	public:
		::PLLPNJOEDHF* HEMMHLHDGBO; // 0x20
		::RPG::Client::Promises::Promise_1<::LGNJPFPACGH*>* EHDMEHABELJ; // 0x28
		::RPG::Client::Promises::Promise* BBEFPKDHLBK; // 0x30
		::FLKGLAHINMI* EPAAHFFBKFG; // 0x38
		::System::Boolean DMIHAJMPOOG; // 0x40
		::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + GNCIMMMAGLO_CTOR_OFFSET))(this, a1);
		}

		static ::GNCIMMMAGLO* BPLPBPMEODA(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::GNCIMMMAGLO*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + GNCIMMMAGLO_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCIMMMAGLO_DIOEAJEHHND_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* GGOEALCLNCI()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCIMMMAGLO_GGOEALCLNCI_OFFSET))(this);
		}

		::System::Void IOKPBOJAOCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCIMMMAGLO_IOKPBOJAOCI_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* AHMDGKINKML(::RPG::Client::ActivityIdleLive::PendingEquipData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::PendingEquipData*))((::PBYTE)hIl2Cpp + GNCIMMMAGLO_AHMDGKINKML_OFFSET))(this, a1);
		}

		::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + GNCIMMMAGLO_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void OPFGDLCEMGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCIMMMAGLO_OPFGDLCEMGI_OFFSET))(this);
		}

		::System::Void AEPNFCKLDFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCIMMMAGLO_AEPNFCKLDFK_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::LGNJPFPACGH*>* EIODGIHAOOP()
		{
			return ((::RPG::Client::Promises::Promise_1<::LGNJPFPACGH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCIMMMAGLO_EIODGIHAOOP_OFFSET))(this);
		}

		::System::Void EEKAJOLHJHE(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + GNCIMMMAGLO_EEKAJOLHJHE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCIMMMAGLO__ONDESTROYED_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryFetchEquipToSelect_b__8_0(::LGNJPFPACGH* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::LGNJPFPACGH*))((::PBYTE)hIl2Cpp + GNCIMMMAGLO__TRYFETCHEQUIPTOSELECT_B__8_0_OFFSET))(this, a1);
		}

		::System::Void _TryFetchEquipToSelect_b__8_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + GNCIMMMAGLO__TRYFETCHEQUIPTOSELECT_B__8_1_OFFSET))(this, a1);
		}

		::System::Void __RequestGetPendingEquip_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCIMMMAGLO___REQUESTGETPENDINGEQUIP_B__14_0_OFFSET))(this);
		}

	};
