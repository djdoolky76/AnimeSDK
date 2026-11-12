#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
class ODCELNBAEIB;

#define GMAOEPIDIKC_CTOR_OFFSET UNITYSDK_OFFSET(0x16A4CA50)
#define GMAOEPIDIKC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x16A4CBC0)
#define GMAOEPIDIKC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16A4CC00)
#define GMAOEPIDIKC_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0x16A4CC60)
#define GMAOEPIDIKC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x16A4CA60)
#define GMAOEPIDIKC_ONCPBPEOIOH_OFFSET UNITYSDK_OFFSET(0x16A4CCA0)

inline static constexpr unsigned int GMAOEPIDIKC_TypeDefinitionIndex = 81872;

	class GMAOEPIDIKC : public ::System::Object
	{
	public:
		::RPG::MVector2 IEKOLFOMFAI; // 0x10
		::System::UInt32 BOHKGIMLCNH; // 0x18
		::System::Boolean PIPLLENMLIM; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 DKKBCEMONAJ; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMAOEPIDIKC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPAFMEBNFOB(::ODCELNBAEIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODCELNBAEIB*))((::PBYTE)hIl2Cpp + GMAOEPIDIKC_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAOEPIDIKC_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GMAOEPIDIKC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAOEPIDIKC_KAGICIAJEEA_OFFSET))(this);
		}

		::System::Void ONCPBPEOIOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAOEPIDIKC_ONCPBPEOIOH_OFFSET))(this);
		}

	};
