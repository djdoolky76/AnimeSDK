#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
namespace System { class String; }

#define JBOPMNKNLOM_AMLBHNCNBBI_OFFSET UNITYSDK_OFFSET(0x1989E010)
#define JBOPMNKNLOM_HCGIOEHANKM_OFFSET UNITYSDK_OFFSET(0x1989DE50)
#define JBOPMNKNLOM_IDDIMHCOHLP_OFFSET UNITYSDK_OFFSET(0x1989DF70)
#define JBOPMNKNLOM_KMABGJCDAMK_OFFSET UNITYSDK_OFFSET(0x1989DEF0)
#define JBOPMNKNLOM_KOFDBOBGNBN_OFFSET UNITYSDK_OFFSET(0x1989E0B0)
#define JBOPMNKNLOM_MELAMHJDNIE_OFFSET UNITYSDK_OFFSET(0x1989E130)
#define JBOPMNKNLOM_OJGCGPLPMAK_1_OFFSET UNITYSDK_OFFSET(0x1989E1C0)
#define JBOPMNKNLOM_OJGCGPLPMAK_OFFSET UNITYSDK_OFFSET(0x1989DDD0)

inline static constexpr unsigned int JBOPMNKNLOM_TypeDefinitionIndex = 39024;

class JBOPMNKNLOM : public ::System::Object
{
public:
	static ::System::Boolean OJGCGPLPMAK(::System::Int32 KCNOHOOPNAH, ::FILNFMCNCFE* AOOLNBKIHAG, ::System::Boolean FBFLOCACOIG)
	{
		return ((::System::Boolean(*)(::System::Int32, ::FILNFMCNCFE*, ::System::Boolean))((::PBYTE)hIl2Cpp + JBOPMNKNLOM_OJGCGPLPMAK_OFFSET))(KCNOHOOPNAH, AOOLNBKIHAG, FBFLOCACOIG);
	}

	static ::System::Boolean KMABGJCDAMK(::System::Int32 KCNOHOOPNAH, ::FGCOIBFFCHB* AOOLNBKIHAG, ::System::Boolean FBFLOCACOIG)
	{
		return ((::System::Boolean(*)(::System::Int32, ::FGCOIBFFCHB*, ::System::Boolean))((::PBYTE)hIl2Cpp + JBOPMNKNLOM_KMABGJCDAMK_OFFSET))(KCNOHOOPNAH, AOOLNBKIHAG, FBFLOCACOIG);
	}

	static ::System::String* HCGIOEHANKM(::System::Int32 KCNOHOOPNAH, ::System::Boolean FBFLOCACOIG)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JBOPMNKNLOM_HCGIOEHANKM_OFFSET))(KCNOHOOPNAH, FBFLOCACOIG);
	}

	static ::System::String* AMLBHNCNBBI(::System::Int32 KCNOHOOPNAH, ::System::Boolean FBFLOCACOIG)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JBOPMNKNLOM_AMLBHNCNBBI_OFFSET))(KCNOHOOPNAH, FBFLOCACOIG);
	}

	static ::System::Boolean KOFDBOBGNBN(::System::Int32 KCNOHOOPNAH, ::FGCOIBFFCHB* AOOLNBKIHAG, ::System::Boolean FBFLOCACOIG)
	{
		return ((::System::Boolean(*)(::System::Int32, ::FGCOIBFFCHB*, ::System::Boolean))((::PBYTE)hIl2Cpp + JBOPMNKNLOM_KOFDBOBGNBN_OFFSET))(KCNOHOOPNAH, AOOLNBKIHAG, FBFLOCACOIG);
	}

	static ::System::String* IDDIMHCOHLP(::System::Int32 KCNOHOOPNAH, ::System::Boolean FBFLOCACOIG)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JBOPMNKNLOM_IDDIMHCOHLP_OFFSET))(KCNOHOOPNAH, FBFLOCACOIG);
	}

	static ::System::Void MELAMHJDNIE(::FGCOIBFFCHB* CGJEBPGPIHO, ::System::Int32 EGOBOLCFHMO, ::System::Int32 OIKFFGKDHME)
	{
		return ((::System::Void(*)(::FGCOIBFFCHB*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JBOPMNKNLOM_MELAMHJDNIE_OFFSET))(CGJEBPGPIHO, EGOBOLCFHMO, OIKFFGKDHME);
	}

	static ::System::Boolean OJGCGPLPMAK_1(::System::Int32 KCNOHOOPNAH, ::FGCOIBFFCHB* AOOLNBKIHAG, ::System::Boolean FBFLOCACOIG)
	{
		return ((::System::Boolean(*)(::System::Int32, ::FGCOIBFFCHB*, ::System::Boolean))((::PBYTE)hIl2Cpp + JBOPMNKNLOM_OJGCGPLPMAK_1_OFFSET))(KCNOHOOPNAH, AOOLNBKIHAG, FBFLOCACOIG);
	}
};
