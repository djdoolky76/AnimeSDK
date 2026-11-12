#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
class CEAIGOBEACN;
class GKEPCDFBABH;
class HJCHNOIBJCA;
class KJILOMKCDEM;
class MHOICJPNIML;
class NMLGHIFLBNN;
class OBJANKHLNGO;
class POICJJPPMDA;
namespace System { class Object; }

#define GJGPEPABEBJ_ABJOLCKALPA_OFFSET UNITYSDK_OFFSET(0x169A4E40)
#define GJGPEPABEBJ_BEEKMEJDKCM_OFFSET UNITYSDK_OFFSET(0x169A5000)
#define GJGPEPABEBJ_BONCKNMLMNP_OFFSET UNITYSDK_OFFSET(0x169A4F00)
#define GJGPEPABEBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x169A4A60)
#define GJGPEPABEBJ_FAGFEPPGHOG_OFFSET UNITYSDK_OFFSET(0x169A50C0)
#define GJGPEPABEBJ_OPMGENINLDF_OFFSET UNITYSDK_OFFSET(0x169A5060)
#define GJGPEPABEBJ_POKBLLFACLC_OFFSET UNITYSDK_OFFSET(0x169A4F90)
#define GJGPEPABEBJ_START_OFFSET UNITYSDK_OFFSET(0x169A4BA0)
#define GJGPEPABEBJ_STOP_OFFSET UNITYSDK_OFFSET(0x169A4DA0)

inline static constexpr unsigned int GJGPEPABEBJ_TypeDefinitionIndex = 68663;

	class GJGPEPABEBJ : public ::BHPMNMMGLHI
	{
	public:
		::MHOICJPNIML* FOLKHIGMIGN; // 0x20
		::HJCHNOIBJCA* MEGLBLIJGCF; // 0x28
		::POICJJPPMDA* LBNAGLIGKIO; // 0x30
		::OBJANKHLNGO* GJALMBBNNOF; // 0x38
		::KJILOMKCDEM* CPLMEGBNGOL; // 0x40
		::System::Void _ctor(::HJCHNOIBJCA* a1, ::POICJJPPMDA* a2, ::KJILOMKCDEM* a3, ::MHOICJPNIML* a4, ::OBJANKHLNGO* a5)
		{
			return ((::System::Void(*)(::PVOID, ::HJCHNOIBJCA*, ::POICJJPPMDA*, ::KJILOMKCDEM*, ::MHOICJPNIML*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + GJGPEPABEBJ_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGPEPABEBJ_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGPEPABEBJ_STOP_OFFSET))(this);
		}

		::System::Void ABJOLCKALPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGPEPABEBJ_ABJOLCKALPA_OFFSET))(this);
		}

		::System::Void BONCKNMLMNP(::System::UInt16 a1, ::NMLGHIFLBNN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::NMLGHIFLBNN*))((::PBYTE)hIl2Cpp + GJGPEPABEBJ_BONCKNMLMNP_OFFSET))(this, a1, a2);
		}

		::System::Void POKBLLFACLC(::System::UInt16 a1, ::CEAIGOBEACN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::CEAIGOBEACN*))((::PBYTE)hIl2Cpp + GJGPEPABEBJ_POKBLLFACLC_OFFSET))(this, a1, a2);
		}

		::System::Void BEEKMEJDKCM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJGPEPABEBJ_BEEKMEJDKCM_OFFSET))(this, a1);
		}

		::System::Void OPMGENINLDF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJGPEPABEBJ_OPMGENINLDF_OFFSET))(this, a1);
		}

		::System::Void FAGFEPPGHOG(::GKEPCDFBABH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKEPCDFBABH*))((::PBYTE)hIl2Cpp + GJGPEPABEBJ_FAGFEPPGHOG_OFFSET))(this, a1);
		}

	};
