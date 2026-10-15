#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIJCAGLKGCO_eFileLoaderPosType.h"
#include "unitysdk/System/Object.h"
class ECPDFJJNDBI;
class HJEIEIFLDGN;
class MDIMPDIOOIE;
namespace System { class String; }

#define GLMDCJNPCGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C453200)
#define GLMDCJNPCGC_EFMKONMGMNA_1_OFFSET UNITYSDK_OFFSET(0x1C452AE0)
#define GLMDCJNPCGC_EFMKONMGMNA_OFFSET UNITYSDK_OFFSET(0x1C452A80)
#define GLMDCJNPCGC_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x1C452870)
#define GLMDCJNPCGC_KADJIDHNIEM_OFFSET UNITYSDK_OFFSET(0x1C4527F0)
#define GLMDCJNPCGC_KLGNPCAOBJJ_1_OFFSET UNITYSDK_OFFSET(0x1C452D90)
#define GLMDCJNPCGC_KLGNPCAOBJJ_OFFSET UNITYSDK_OFFSET(0x1C401010)
#define GLMDCJNPCGC_OEFHAKMALIC_1_OFFSET UNITYSDK_OFFSET(0x1C452FA0)
#define GLMDCJNPCGC_OEFHAKMALIC_OFFSET UNITYSDK_OFFSET(0x1C400E00)
#define GLMDCJNPCGC_OHCJOIANPFG_OFFSET UNITYSDK_OFFSET(0x1C4531B0)

inline static constexpr unsigned int GLMDCJNPCGC_TypeDefinitionIndex = 41509;

	class GLMDCJNPCGC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMDCJNPCGC_CTOR_OFFSET))(this);
		}

		static ::System::Boolean KADJIDHNIEM(::HJEIEIFLDGN* a1, ::MDIMPDIOOIE* a2, ::ECPDFJJNDBI* a3)
		{
			return ((::System::Boolean(*)(::HJEIEIFLDGN*, ::MDIMPDIOOIE*, ::ECPDFJJNDBI*))((::PBYTE)hIl2Cpp + GLMDCJNPCGC_KADJIDHNIEM_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HKEPJLDBGIG(::HJEIEIFLDGN* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::HJEIEIFLDGN*, ::System::String*))((::PBYTE)hIl2Cpp + GLMDCJNPCGC_HKEPJLDBGIG_OFFSET))(a1, a2);
		}

		static ::HJEIEIFLDGN* EFMKONMGMNA(::System::String* a1)
		{
			return ((::HJEIEIFLDGN*(*)(::System::String*))((::PBYTE)hIl2Cpp + GLMDCJNPCGC_EFMKONMGMNA_OFFSET))(a1);
		}

		static ::HJEIEIFLDGN* EFMKONMGMNA_1(::System::String* a1, ::BIJCAGLKGCO_eFileLoaderPosType a2)
		{
			return ((::HJEIEIFLDGN*(*)(::System::String*, ::BIJCAGLKGCO_eFileLoaderPosType))((::PBYTE)hIl2Cpp + GLMDCJNPCGC_EFMKONMGMNA_1_OFFSET))(a1, a2);
		}

		static ::HJEIEIFLDGN* KLGNPCAOBJJ(::System::String* a1)
		{
			return ((::HJEIEIFLDGN*(*)(::System::String*))((::PBYTE)hIl2Cpp + GLMDCJNPCGC_KLGNPCAOBJJ_OFFSET))(a1);
		}

		static ::System::Boolean KLGNPCAOBJJ_1(::HJEIEIFLDGN* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::HJEIEIFLDGN*, ::System::String*))((::PBYTE)hIl2Cpp + GLMDCJNPCGC_KLGNPCAOBJJ_1_OFFSET))(a1, a2);
		}

		static ::HJEIEIFLDGN* OEFHAKMALIC(::System::String* a1)
		{
			return ((::HJEIEIFLDGN*(*)(::System::String*))((::PBYTE)hIl2Cpp + GLMDCJNPCGC_OEFHAKMALIC_OFFSET))(a1);
		}

		static ::System::Boolean OEFHAKMALIC_1(::HJEIEIFLDGN* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::HJEIEIFLDGN*, ::System::String*))((::PBYTE)hIl2Cpp + GLMDCJNPCGC_OEFHAKMALIC_1_OFFSET))(a1, a2);
		}

		static ::System::Void OHCJOIANPFG(::HJEIEIFLDGN* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::HJEIEIFLDGN*, ::System::String*))((::PBYTE)hIl2Cpp + GLMDCJNPCGC_OHCJOIANPFG_OFFSET))(a1, a2);
		}

	};
