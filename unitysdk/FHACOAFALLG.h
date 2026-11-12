#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class IGroup_1; }

#define FHACOAFALLG_CANBEGBMLHM_OFFSET UNITYSDK_OFFSET(0x166909A0)
#define FHACOAFALLG_CTOR_OFFSET UNITYSDK_OFFSET(0x16690870)
#define FHACOAFALLG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16690950)
#define FHACOAFALLG_GOGEPMGOENF_OFFSET UNITYSDK_OFFSET(0x16690E90)
#define FHACOAFALLG_HHFHLCHIFFC_OFFSET UNITYSDK_OFFSET(0x16691710)
#define FHACOAFALLG_IMBFIHMDJPL_OFFSET UNITYSDK_OFFSET(0x16691390)
#define FHACOAFALLG_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x16690910)
#define FHACOAFALLG_INPLOLCCJHM_OFFSET UNITYSDK_OFFSET(0x16690B50)
#define FHACOAFALLG_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x16690B10)

inline static constexpr unsigned int FHACOAFALLG_TypeDefinitionIndex = 79441;

	class FHACOAFALLG : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::Entitas::IGroup_1<::HIOEAKHGILF*>* DBNKLDNNGCK; // 0x20
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
