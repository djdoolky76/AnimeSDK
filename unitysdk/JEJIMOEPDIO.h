#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMCOCABFEPG_AttributeState.h"
#include "unitysdk/System/Object.h"
class HEKHCLACHJE;
class PMCOCABFEPG;

#define JEJIMOEPDIO_BIDEPOLBMDK_OFFSET UNITYSDK_OFFSET(0x1662D7C0)
#define JEJIMOEPDIO_DJJBEJLLAEO_OFFSET UNITYSDK_OFFSET(0x1662D390)
#define JEJIMOEPDIO_EDJGMLNLGNJ_OFFSET UNITYSDK_OFFSET(0x1662D860)
#define JEJIMOEPDIO_GNAKGNHLCPF_OFFSET UNITYSDK_OFFSET(0x1662D8E0)
#define JEJIMOEPDIO_IEKLHHEOKLC_OFFSET UNITYSDK_OFFSET(0x1662DEA0)
#define JEJIMOEPDIO_KABAPEPIGGI_OFFSET UNITYSDK_OFFSET(0x1662DD00)

	class JEJIMOEPDIO : public ::System::Object
	{
	public:
		static ::System::Boolean DJJBEJLLAEO(::PMCOCABFEPG* a1, ::HEKHCLACHJE* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PMCOCABFEPG*, ::HEKHCLACHJE*, ::System::Int32))((::PBYTE)hIl2Cpp + JEJIMOEPDIO_DJJBEJLLAEO_OFFSET))(a1, a2, a3);
		}

		static ::PMCOCABFEPG_AttributeState BIDEPOLBMDK(::PMCOCABFEPG* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::PMCOCABFEPG_AttributeState(*)(::PMCOCABFEPG*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JEJIMOEPDIO_BIDEPOLBMDK_OFFSET))(a1, a2, a3);
		}

		static ::PMCOCABFEPG_AttributeState EDJGMLNLGNJ(::PMCOCABFEPG* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::PMCOCABFEPG_AttributeState(*)(::PMCOCABFEPG*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JEJIMOEPDIO_EDJGMLNLGNJ_OFFSET))(a1, a2, a3);
		}

		static ::PMCOCABFEPG_AttributeState IEKLHHEOKLC(::PMCOCABFEPG* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::PMCOCABFEPG_AttributeState(*)(::PMCOCABFEPG*, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + JEJIMOEPDIO_IEKLHHEOKLC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean KABAPEPIGGI(::PMCOCABFEPG* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PMCOCABFEPG*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JEJIMOEPDIO_KABAPEPIGGI_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GNAKGNHLCPF(::PMCOCABFEPG* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PMCOCABFEPG*, ::System::Int32))((::PBYTE)hIl2Cpp + JEJIMOEPDIO_GNAKGNHLCPF_OFFSET))(a1, a2);
		}

	};
