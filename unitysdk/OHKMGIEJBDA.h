#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class RspHandler; }
namespace RPG::GameCore { class InteractRow; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropReqInteract; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define OHKMGIEJBDA_ACPMIDPAPDG_OFFSET UNITYSDK_OFFSET(0x18E1AE90)
#define OHKMGIEJBDA_BKGCGEEDHDI_OFFSET UNITYSDK_OFFSET(0x18E1B780)
#define OHKMGIEJBDA_BOJELPJBCAI_OFFSET UNITYSDK_OFFSET(0x18E1A420)
#define OHKMGIEJBDA_BOLJDDJDNII_OFFSET UNITYSDK_OFFSET(0x18E19CC0)
#define OHKMGIEJBDA_CTOR_OFFSET UNITYSDK_OFFSET(0x18E19AA0)
#define OHKMGIEJBDA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E19AB0)
#define OHKMGIEJBDA_DMKKIIHDPOB_OFFSET UNITYSDK_OFFSET(0x18E1AF40)
#define OHKMGIEJBDA_FFIPPBBDFIK_OFFSET UNITYSDK_OFFSET(0x18E1B640)
#define OHKMGIEJBDA_GMJIEDEJEEN_OFFSET UNITYSDK_OFFSET(0x18E1A850)
#define OHKMGIEJBDA_IOHGLPGAPOP_OFFSET UNITYSDK_OFFSET(0x18E1A620)
#define OHKMGIEJBDA_MIFIPPJIJMP_OFFSET UNITYSDK_OFFSET(0x18E1AD10)
#define OHKMGIEJBDA_NGOJPIFNMMO_OFFSET UNITYSDK_OFFSET(0x18E1B850)
#define OHKMGIEJBDA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E1B170)
#define OHKMGIEJBDA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18E1B410)
#define OHKMGIEJBDA_PADKDHDJDKA_OFFSET UNITYSDK_OFFSET(0x18E19ED0)
#define OHKMGIEJBDA_TICK_OFFSET UNITYSDK_OFFSET(0x18E1B460)

inline static constexpr unsigned int OHKMGIEJBDA_TypeDefinitionIndex = 54342;

	class OHKMGIEJBDA : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::RspHandler* CLKKFICMNDI; // 0x18
		::RPG::GameCore::PropComponent* NKILIBDMOMC; // 0x20
		::RPG::GameCore::PropReqInteract* OFKGLJOAMLD; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::GELIALJDFBL* MEAIKNNPKPI; // 0x38
		::RPG::Client::NotifyHandler* GHCGCOFNFHI; // 0x40
		::GELIALJDFBL* OLJHOFCBCMN; // 0x48
		::System::UInt32 ECJHBGCDFHE; // 0x50
		::System::UInt32 IDOEBJDGHBF; // 0x54
		// static const ::System::String* HKBOGHBKDCN; // 0x0
		// static const ::System::String* LBGEBJOFEJH; // 0x0
		// static const ::System::String* HMHCLNDLJLJ; // 0x0
		// static const ::System::String* NAHLDAAJNCP; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropReqInteract* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropReqInteract*))((::PBYTE)hIl2Cpp + OHKMGIEJBDA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKMGIEJBDA_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::PropComponent* BOLJDDJDNII()
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKMGIEJBDA_BOLJDDJDNII_OFFSET))(this);
		}

		::System::Void PADKDHDJDKA(::RPG::GameCore::InteractRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InteractRow*))((::PBYTE)hIl2Cpp + OHKMGIEJBDA_PADKDHDJDKA_OFFSET))(this, a1);
		}

		::System::Void BOJELPJBCAI(::RPG::GameCore::InteractRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InteractRow*))((::PBYTE)hIl2Cpp + OHKMGIEJBDA_BOJELPJBCAI_OFFSET))(this, a1);
		}

		::System::Void IOHGLPGAPOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKMGIEJBDA_IOHGLPGAPOP_OFFSET))(this);
		}

		::System::Void GMJIEDEJEEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKMGIEJBDA_GMJIEDEJEEN_OFFSET))(this);
		}

		::System::Boolean MIFIPPJIJMP(::RPG::GameCore::InteractRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::InteractRow*))((::PBYTE)hIl2Cpp + OHKMGIEJBDA_MIFIPPJIJMP_OFFSET))(this, a1);
		}

		::System::Void ACPMIDPAPDG(::RPG::GameCore::InteractRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InteractRow*))((::PBYTE)hIl2Cpp + OHKMGIEJBDA_ACPMIDPAPDG_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKMGIEJBDA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKMGIEJBDA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OHKMGIEJBDA_TICK_OFFSET))(this, a1);
		}

		::System::Void FFIPPBBDFIK(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + OHKMGIEJBDA_FFIPPBBDFIK_OFFSET))(this, a1, a2);
		}

		::System::Void BKGCGEEDHDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHKMGIEJBDA_BKGCGEEDHDI_OFFSET))(this, a1);
		}

		::System::Void NGOJPIFNMMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKMGIEJBDA_NGOJPIFNMMO_OFFSET))(this);
		}

		::System::Void DMKKIIHDPOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKMGIEJBDA_DMKKIIHDPOB_OFFSET))(this);
		}

	};
