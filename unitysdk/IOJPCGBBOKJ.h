#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class IOJPCGBBOKJ;
namespace RPG::Client { class SimulateSpeedController; }
namespace RPG::Client { class SystemOpenModule; }
namespace RPG::Client::Promises { class IPromise; }

#define IOJPCGBBOKJ_BNEKHIKBEND_OFFSET UNITYSDK_OFFSET(0x192E3460)
#define IOJPCGBBOKJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x192E2FE0)
#define IOJPCGBBOKJ_CFMPJEPNGFI_OFFSET UNITYSDK_OFFSET(0x192E38A0)
#define IOJPCGBBOKJ_COKKBHFCADP_OFFSET UNITYSDK_OFFSET(0x192E3620)
#define IOJPCGBBOKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x192E3050)
#define IOJPCGBBOKJ_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x192E3060)
#define IOJPCGBBOKJ_DNLMOPCHFLN_OFFSET UNITYSDK_OFFSET(0x192E3930)
#define IOJPCGBBOKJ_DOPLDBAODFA_OFFSET UNITYSDK_OFFSET(0x192E3B90)
#define IOJPCGBBOKJ_EBKJGPEKDON_OFFSET UNITYSDK_OFFSET(0x192E32A0)
#define IOJPCGBBOKJ_IBDIMBNFLHN_OFFSET UNITYSDK_OFFSET(0x192E34C0)
#define IOJPCGBBOKJ_IFMCFCACLKA_OFFSET UNITYSDK_OFFSET(0x192E30F0)
#define IOJPCGBBOKJ_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x192E36C0)
#define IOJPCGBBOKJ_LFMBODEJMGO_OFFSET UNITYSDK_OFFSET(0x192E3210)
#define IOJPCGBBOKJ_MKOFMFBGDKL_OFFSET UNITYSDK_OFFSET(0x192E3590)
#define IOJPCGBBOKJ_PNNHMOIACLL_OFFSET UNITYSDK_OFFSET(0x192E39B0)

inline static constexpr unsigned int IOJPCGBBOKJ_TypeDefinitionIndex = 74053;

	class IOJPCGBBOKJ : public ::System::Object
	{
	public:
		// static const ::System::Object HHEBAOGKFMG; // 0x0
		// static const ::System::Object OMJFAJPHNBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJPCGBBOKJ_CTOR_OFFSET))(this);
		}

		static ::IOJPCGBBOKJ* BPLPBPMEODA(::System::Boolean a1)
		{
			return ((::IOJPCGBBOKJ*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + IOJPCGBBOKJ_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void IFMCFCACLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJPCGBBOKJ_IFMCFCACLKA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* IBDIMBNFLHN()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJPCGBBOKJ_IBDIMBNFLHN_OFFSET))(this);
		}

		::System::Boolean EBKJGPEKDON(::System::Nullable_1<::System::Boolean> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + IOJPCGBBOKJ_EBKJGPEKDON_OFFSET))(this, a1);
		}

		::System::Boolean LFMBODEJMGO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJPCGBBOKJ_LFMBODEJMGO_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IOJPCGBBOKJ_DIOEAJEHHND_OFFSET))(this, a1);
		}

		::System::Void BNEKHIKBEND(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IOJPCGBBOKJ_BNEKHIKBEND_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::System::Nullable_1<::System::Boolean> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + IOJPCGBBOKJ_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void PNNHMOIACLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJPCGBBOKJ_PNNHMOIACLL_OFFSET))(this);
		}

		::System::Boolean COKKBHFCADP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJPCGBBOKJ_COKKBHFCADP_OFFSET))(this);
		}

		::System::Void DOPLDBAODFA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IOJPCGBBOKJ_DOPLDBAODFA_OFFSET))(this, a1);
		}

		::System::Single CFMPJEPNGFI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJPCGBBOKJ_CFMPJEPNGFI_OFFSET))(this);
		}

		::RPG::Client::SystemOpenModule* MKOFMFBGDKL()
		{
			return ((::RPG::Client::SystemOpenModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJPCGBBOKJ_MKOFMFBGDKL_OFFSET))(this);
		}

		::RPG::Client::SimulateSpeedController* DNLMOPCHFLN()
		{
			return ((::RPG::Client::SimulateSpeedController*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJPCGBBOKJ_DNLMOPCHFLN_OFFSET))(this);
		}

	};
