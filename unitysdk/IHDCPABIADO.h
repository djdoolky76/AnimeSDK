#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNIKPHKIOH;
class MGFFCMONLJG;
class MINAKLCBJMO;
class NDPFAOKFLLJ;
class OHOAGMMCAAC;
namespace RPG::Client { class UIController; }

#define IHDCPABIADO_BBGIOHKMIPM_OFFSET UNITYSDK_OFFSET(0x173CCBE0)
#define IHDCPABIADO_CTOR_OFFSET UNITYSDK_OFFSET(0x173CC240)
#define IHDCPABIADO_EDJJEGHFNCA_OFFSET UNITYSDK_OFFSET(0x173CC600)
#define IHDCPABIADO_FAHHAEMLJID_OFFSET UNITYSDK_OFFSET(0x173CC330)
#define IHDCPABIADO_HHKGHKIENHO_OFFSET UNITYSDK_OFFSET(0x173CD220)
#define IHDCPABIADO_MMGKPPAHGKO_OFFSET UNITYSDK_OFFSET(0x173CC410)

inline static constexpr unsigned int IHDCPABIADO_TypeDefinitionIndex = 84863;

	class IHDCPABIADO : public ::System::Object
	{
	public:
		::FHNIKPHKIOH* FPNMIGDJBIE; // 0x10
		::OHOAGMMCAAC* MPFFGNPIDOA; // 0x18
		::MINAKLCBJMO* JDGBDKHIEGG; // 0x20
		::System::Void _ctor(::MINAKLCBJMO* a1, ::FHNIKPHKIOH* a2, ::OHOAGMMCAAC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MINAKLCBJMO*, ::FHNIKPHKIOH*, ::OHOAGMMCAAC*))((::PBYTE)hIl2Cpp + IHDCPABIADO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::UIController* FAHHAEMLJID(::System::Boolean a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHDCPABIADO_FAHHAEMLJID_OFFSET))(this, a1);
		}

		::System::Void HHKGHKIENHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDCPABIADO_HHKGHKIENHO_OFFSET))(this);
		}

		static ::System::UInt32 MMGKPPAHGKO()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + IHDCPABIADO_MMGKPPAHGKO_OFFSET))();
		}

		::MGFFCMONLJG* EDJJEGHFNCA(::System::UInt32 a1)
		{
			return ((::MGFFCMONLJG*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHDCPABIADO_EDJJEGHFNCA_OFFSET))(this, a1);
		}

		::NDPFAOKFLLJ* BBGIOHKMIPM(::System::UInt32 a1)
		{
			return ((::NDPFAOKFLLJ*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHDCPABIADO_BBGIOHKMIPM_OFFSET))(this, a1);
		}

	};
