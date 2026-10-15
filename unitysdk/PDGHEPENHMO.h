#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJJKNHPLHDI.h"
class ABJPLHAMHGL;
class DPPECCECEAM;
class FCCKDJABHCN;
class FJKLPJPAHBM;
class KMLEFAPALOE;
class LDIMALLCHAF;
class MOJAIJPCMMF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class ISystem; }
namespace Entitas { class Systems; }
namespace RPG::Client { class FiveDimGameInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PDGHEPENHMO_AABMPBGNIMF_OFFSET UNITYSDK_OFFSET(0xC00A180)
#define PDGHEPENHMO_ADD_OFFSET UNITYSDK_OFFSET(0xC009F70)
#define PDGHEPENHMO_BAOIILMBACM_OFFSET UNITYSDK_OFFSET(0xC00AA10)
#define PDGHEPENHMO_CHCGJDCKBDP_OFFSET UNITYSDK_OFFSET(0xC00A650)
#define PDGHEPENHMO_CTOR_OFFSET UNITYSDK_OFFSET(0xC00AC40)
#define PDGHEPENHMO_FCDHAOFHHPA_OFFSET UNITYSDK_OFFSET(0xC009AA0)
#define PDGHEPENHMO_HHGCODLKHCN_OFFSET UNITYSDK_OFFSET(0xC00A970)

inline static constexpr unsigned int PDGHEPENHMO_TypeDefinitionIndex = 76923;

	class PDGHEPENHMO : public ::DJJKNHPLHDI
	{
	public:
		::DPPECCECEAM* EOEBCMKBHEI; // 0x30
		::MOJAIJPCMMF* PBDCDIJLCNN; // 0x38
		::FJKLPJPAHBM* PFOBCJOOMAD; // 0x40
		::FCCKDJABHCN* FGAMCDANBPI; // 0x48
		::KMLEFAPALOE* OKLJHINJMOO; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* JEBEHBGJKNA; // 0x58
		::System::Collections::Generic::List_1<::LDIMALLCHAF*>* LBGDAIGJNNI; // 0x60
		::ABJPLHAMHGL* IHNPLBIJJDA; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGHEPENHMO_CTOR_OFFSET))(this);
		}

		::System::Void FCDHAOFHHPA(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2, ::RPG::Client::FiveDimGameInstance* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + PDGHEPENHMO_FCDHAOFHHPA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BAOIILMBACM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGHEPENHMO_BAOIILMBACM_OFFSET))(this);
		}

		::Entitas::Systems* Add(::Entitas::ISystem* a1)
		{
			return ((::Entitas::Systems*(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + PDGHEPENHMO_ADD_OFFSET))(this, a1);
		}

		::System::Void AABMPBGNIMF(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + PDGHEPENHMO_AABMPBGNIMF_OFFSET))(this, a1, a2);
		}

		::System::Void HHGCODLKHCN(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + PDGHEPENHMO_HHGCODLKHCN_OFFSET))(this, a1, a2);
		}

		::System::Void CHCGJDCKBDP(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2, ::RPG::Client::FiveDimGameInstance* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + PDGHEPENHMO_CHCGJDCKBDP_OFFSET))(this, a1, a2, a3);
		}

	};
