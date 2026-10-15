#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPIDBGLEBEM;
class PFJNGFLBJFO;
class SceneLightVolume;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OINCJFFGHGG_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xBEA1DA0)
#define OINCJFFGHGG_CNBOPGLFKBP_OFFSET UNITYSDK_OFFSET(0xBEA17B0)
#define OINCJFFGHGG_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA1570)
#define OINCJFFGHGG_EKEMIJMLAKM_OFFSET UNITYSDK_OFFSET(0xBEA15C0)
#define OINCJFFGHGG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBEA1D60)
#define OINCJFFGHGG_JLJECJKMEIP_OFFSET UNITYSDK_OFFSET(0xBEA2470)
#define OINCJFFGHGG_KDCBKBJKGOP_OFFSET UNITYSDK_OFFSET(0xBEA23D0)
#define OINCJFFGHGG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBEA1DE0)
#define OINCJFFGHGG_NMOBNBJNEFF_OFFSET UNITYSDK_OFFSET(0xBEA1800)

	class OINCJFFGHGG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DPIDBGLEBEM*>* DNNOCCGHIJC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINCJFFGHGG_CTOR_OFFSET))(this);
		}

		::System::Void EKEMIJMLAKM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OINCJFFGHGG_EKEMIJMLAKM_OFFSET))(this, a1);
		}

		::System::Void CNBOPGLFKBP(::PFJNGFLBJFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFJNGFLBJFO*))((::PBYTE)hIl2Cpp + OINCJFFGHGG_CNBOPGLFKBP_OFFSET))(this, a1);
		}

		::System::Void NMOBNBJNEFF(::SceneLightVolume* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + OINCJFFGHGG_NMOBNBJNEFF_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINCJFFGHGG_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINCJFFGHGG_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OINCJFFGHGG_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void KDCBKBJKGOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINCJFFGHGG_KDCBKBJKGOP_OFFSET))(this);
		}

		::System::Void JLJECJKMEIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OINCJFFGHGG_JLJECJKMEIP_OFFSET))(this, a1);
		}

	};
