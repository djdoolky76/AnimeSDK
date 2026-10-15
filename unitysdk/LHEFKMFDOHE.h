#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class GamePlayLockTargetFunc; }
namespace RPG::Client { class InputDataController; }
namespace System { class Object; }

#define LHEFKMFDOHE_BKEFNGEGBGA_OFFSET UNITYSDK_OFFSET(0xB6A5C40)
#define LHEFKMFDOHE_BPGMALIBLLD_OFFSET UNITYSDK_OFFSET(0xB6A5880)
#define LHEFKMFDOHE_CTOR_OFFSET UNITYSDK_OFFSET(0xB6A4C80)
#define LHEFKMFDOHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6A6A90)
#define LHEFKMFDOHE_EEFEHCLFBIE_OFFSET UNITYSDK_OFFSET(0xB6A5E90)
#define LHEFKMFDOHE_EJIGKBNNGMP_OFFSET UNITYSDK_OFFSET(0xB6A5490)
#define LHEFKMFDOHE_FEIHGKFLMGL_OFFSET UNITYSDK_OFFSET(0xB6A6B20)
#define LHEFKMFDOHE_HOOKBFGBGEH_OFFSET UNITYSDK_OFFSET(0xB6A65B0)
#define LHEFKMFDOHE_JLABBAOCNHM_OFFSET UNITYSDK_OFFSET(0xB6A6050)
#define LHEFKMFDOHE_KAGGCFEPGAD_OFFSET UNITYSDK_OFFSET(0xB6A6C40)
#define LHEFKMFDOHE_KAOIHHCJFDO_OFFSET UNITYSDK_OFFSET(0xB6A4D10)
#define LHEFKMFDOHE_LIODCNOMOME_OFFSET UNITYSDK_OFFSET(0xB6A6D00)
#define LHEFKMFDOHE_TICK_OFFSET UNITYSDK_OFFSET(0xB6A4E30)

inline static constexpr unsigned int LHEFKMFDOHE_TypeDefinitionIndex = 61312;

	class LHEFKMFDOHE : public ::System::Object
	{
	public:
		::RPG::Client::GamePlayLockTargetFunc* EGCPOEIJPPC; // 0x10
		::RPG::Client::InputDataController* JHGFHAFJLPC; // 0x18
		::RPG::Client::AdventurePhase* DEIEJIOELMO; // 0x20
		::System::UInt32 CJLNNGNNKFL; // 0x28
		::System::UInt32 EGOEPDIGMBH; // 0x2C
		::System::Boolean FPGNCCFKIHA; // 0x30
		::System::Boolean HMOBGJKPHLE; // 0x31
		::System::Boolean HJAAPIOGKIO; // 0x32
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector2 LICNPONDOHP; // 0x34
		// static const ::System::Object AEPEKAMKMKD; // 0x0
		// static const ::System::Object LBJPDFPHCNF; // 0x0
		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + LHEFKMFDOHE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHEFKMFDOHE_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEFKMFDOHE_DISPOSE_OFFSET))(this);
		}

		::System::Void EJIGKBNNGMP(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LHEFKMFDOHE_EJIGKBNNGMP_OFFSET))(this, a1, a2);
		}

		::System::Void BPGMALIBLLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEFKMFDOHE_BPGMALIBLLD_OFFSET))(this);
		}

		::System::Void BKEFNGEGBGA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHEFKMFDOHE_BKEFNGEGBGA_OFFSET))(this, a1);
		}

		::System::Void JLABBAOCNHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEFKMFDOHE_JLABBAOCNHM_OFFSET))(this);
		}

		::System::Void HOOKBFGBGEH(::System::Boolean a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LHEFKMFDOHE_HOOKBFGBGEH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KAOIHHCJFDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEFKMFDOHE_KAOIHHCJFDO_OFFSET))(this);
		}

		::System::Void FEIHGKFLMGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHEFKMFDOHE_FEIHGKFLMGL_OFFSET))(this, a1);
		}

		::System::Void KAGGCFEPGAD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHEFKMFDOHE_KAGGCFEPGAD_OFFSET))(this, a1);
		}

		::System::Void LIODCNOMOME(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHEFKMFDOHE_LIODCNOMOME_OFFSET))(this, a1);
		}

		::System::Boolean EEFEHCLFBIE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEFKMFDOHE_EEFEHCLFBIE_OFFSET))(this);
		}

	};
