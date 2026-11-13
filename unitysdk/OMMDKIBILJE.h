#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define OMMDKIBILJE_BKDBDFGDBLE_OFFSET UNITYSDK_OFFSET(0x17D59D60)
#define OMMDKIBILJE_CBDLIGEAGDB_OFFSET UNITYSDK_OFFSET(0x17D59AB0)
#define OMMDKIBILJE_CTOR_OFFSET UNITYSDK_OFFSET(0x17D59D70)
#define OMMDKIBILJE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D59640)
#define OMMDKIBILJE_FALGOMLIJPD_OFFSET UNITYSDK_OFFSET(0x17D59710)
#define OMMDKIBILJE_HDJNPKECCBA_OFFSET UNITYSDK_OFFSET(0x17D59690)
#define OMMDKIBILJE_ILOLOFNOGCF_OFFSET UNITYSDK_OFFSET(0x17D59B00)
#define OMMDKIBILJE_KBGENAFOKPP_OFFSET UNITYSDK_OFFSET(0x17D59BA0)
#define OMMDKIBILJE_KLGKGCEDHFD_OFFSET UNITYSDK_OFFSET(0x17D59B50)
#define OMMDKIBILJE_MAHAKPKKMKI_OFFSET UNITYSDK_OFFSET(0x17D59980)
#define OMMDKIBILJE_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x17D59A60)
#define OMMDKIBILJE_NIFIPONFFJE_OFFSET UNITYSDK_OFFSET(0x17D59C80)

inline static constexpr unsigned int OMMDKIBILJE_TypeDefinitionIndex = 54708;

	class OMMDKIBILJE : public ::System::Object
	{
	public:
		::System::Action* HKLDBNHJLEN; // 0x10
		::System::Single AIKAPJELHNK; // 0x18
		::System::Single FCNHHFDCBPH; // 0x1C
		::System::Single GMIGKJLFGGI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMDKIBILJE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMDKIBILJE_DISPOSE_OFFSET))(this);
		}

		::System::Void HDJNPKECCBA(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OMMDKIBILJE_HDJNPKECCBA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FALGOMLIJPD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMMDKIBILJE_FALGOMLIJPD_OFFSET))(this, a1);
		}

		::System::Single MNGGAOFNGIP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMDKIBILJE_MNGGAOFNGIP_OFFSET))(this);
		}

		::System::Void CBDLIGEAGDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMDKIBILJE_CBDLIGEAGDB_OFFSET))(this);
		}

		::System::Void ILOLOFNOGCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMDKIBILJE_ILOLOFNOGCF_OFFSET))(this);
		}

		::System::Single KLGKGCEDHFD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMDKIBILJE_KLGKGCEDHFD_OFFSET))(this);
		}

		::System::Boolean MAHAKPKKMKI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMDKIBILJE_MAHAKPKKMKI_OFFSET))(this);
		}

		::System::Boolean KBGENAFOKPP(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMMDKIBILJE_KBGENAFOKPP_OFFSET))(this, a1);
		}

		::System::Boolean NIFIPONFFJE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMDKIBILJE_NIFIPONFFJE_OFFSET))(this);
		}

		::System::Single BKDBDFGDBLE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMDKIBILJE_BKDBDFGDBLE_OFFSET))(this);
		}

	};
