#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IGroup; }

#define FHACOAFALLG_CANBEGBMLHM_OFFSET UNITYSDK_OFFSET(0x1576FD50)
#define FHACOAFALLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1576FC20)
#define FHACOAFALLG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1576FD00)
#define FHACOAFALLG_GOGEPMGOENF_OFFSET UNITYSDK_OFFSET(0x15770240)
#define FHACOAFALLG_HHFHLCHIFFC_OFFSET UNITYSDK_OFFSET(0x15770AC0)
#define FHACOAFALLG_IMBFIHMDJPL_OFFSET UNITYSDK_OFFSET(0x15770740)
#define FHACOAFALLG_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1576FCC0)
#define FHACOAFALLG_INPLOLCCJHM_OFFSET UNITYSDK_OFFSET(0x1576FF00)
#define FHACOAFALLG_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1576FEC0)

	class FHACOAFALLG : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::Entitas::IGroup* DBNKLDNNGCK; // 0x20
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + FHACOAFALLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHACOAFALLG_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHACOAFALLG_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHACOAFALLG_TEARDOWN_OFFSET))(this);
		}

		::System::Void CANBEGBMLHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHACOAFALLG_CANBEGBMLHM_OFFSET))(this);
		}

		::System::Void INPLOLCCJHM(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FHACOAFALLG_INPLOLCCJHM_OFFSET))(this, a1);
		}

		::System::Void GOGEPMGOENF(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FHACOAFALLG_GOGEPMGOENF_OFFSET))(this, a1);
		}

		::System::Void IMBFIHMDJPL(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FHACOAFALLG_IMBFIHMDJPL_OFFSET))(this, a1);
		}

		::System::Void HHFHLCHIFFC(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FHACOAFALLG_HHFHLCHIFFC_OFFSET))(this, a1);
		}

	};
