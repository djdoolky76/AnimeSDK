#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACGKMEPLIBJ;
class EMKMGGFFECN;
class JFDAODCOGBE;
class OCGOBFOOIAB;
class OELKAFALAFH;
namespace RPG::Client { class MonoInflatableFighter; }

#define IAFFJPHCLFK_CTOR_OFFSET UNITYSDK_OFFSET(0x19418B20)
#define IAFFJPHCLFK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19419170)
#define IAFFJPHCLFK_EPJLFMHONDM_OFFSET UNITYSDK_OFFSET(0x19419250)
#define IAFFJPHCLFK_FILCNMKKJPC_OFFSET UNITYSDK_OFFSET(0x19419240)
#define IAFFJPHCLFK_GBOEOMPLDGP_OFFSET UNITYSDK_OFFSET(0x19419000)
#define IAFFJPHCLFK_GET_ISDODGING_OFFSET UNITYSDK_OFFSET(0x19419220)
#define IAFFJPHCLFK_JFMILGOGGHP_OFFSET UNITYSDK_OFFSET(0x19418B30)
#define IAFFJPHCLFK_JJJOMMGICAM_OFFSET UNITYSDK_OFFSET(0x19418D10)
#define IAFFJPHCLFK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x19418C00)
#define IAFFJPHCLFK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x19418B90)
#define IAFFJPHCLFK_LJBBOIIODGK_OFFSET UNITYSDK_OFFSET(0x194191C0)
#define IAFFJPHCLFK_SET_ISDODGING_OFFSET UNITYSDK_OFFSET(0x19419230)

inline static constexpr unsigned int IAFFJPHCLFK_TypeDefinitionIndex = 70619;

	class IAFFJPHCLFK : public ::System::Object
	{
	public:
		::EMKMGGFFECN* DAGBGPPCEBF; // 0x10
		::OELKAFALAFH* KNNJLPDMAKL; // 0x18
		::OCGOBFOOIAB* CDLBIMKEIID; // 0x20
		::JFDAODCOGBE* EFJAIFDMFJH; // 0x28
		::RPG::Client::MonoInflatableFighter* CEODOONOFBM; // 0x30
		::ACGKMEPLIBJ* CPIIOIPAAKK; // 0x38
		::System::Boolean OFCKBHJDIEC; // 0x40
		::System::Boolean LMCOOJHINDF; // 0x41
		::System::Boolean _IsDodging_k__BackingField; // 0x42
		::System::Byte _padding0[0x1];
		::System::Single MHOOJNHCPHE; // 0x44
		::System::Single IBLCNBNHPII; // 0x48
		::System::Single KNLPGAHLFCN; // 0x4C
		::System::Void _ctor(::RPG::Client::MonoInflatableFighter* a1, ::ACGKMEPLIBJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoInflatableFighter*, ::ACGKMEPLIBJ*))((::PBYTE)hIl2Cpp + IAFFJPHCLFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JFMILGOGGHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFFJPHCLFK_JFMILGOGGHP_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFFJPHCLFK_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + IAFFJPHCLFK_JLANKNHFKCN_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFFJPHCLFK_DISPOSE_OFFSET))(this);
		}

		::System::Void JJJOMMGICAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFFJPHCLFK_JJJOMMGICAM_OFFSET))(this);
		}

		::System::Void GBOEOMPLDGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFFJPHCLFK_GBOEOMPLDGP_OFFSET))(this);
		}

		::System::Boolean LJBBOIIODGK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFFJPHCLFK_LJBBOIIODGK_OFFSET))(this);
		}

		::System::Boolean get_IsDodging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFFJPHCLFK_GET_ISDODGING_OFFSET))(this);
		}

		::System::Void set_IsDodging(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAFFJPHCLFK_SET_ISDODGING_OFFSET))(this, a1);
		}

		::System::Boolean FILCNMKKJPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFFJPHCLFK_FILCNMKKJPC_OFFSET))(this);
		}

		::System::Boolean EPJLFMHONDM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFFJPHCLFK_EPJLFMHONDM_OFFSET))(this);
		}

	};
