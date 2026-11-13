#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADOJBOKNGMB.h"
#include "unitysdk/FCFLKPABIOM.h"
class DEBEAKKOHLN;
class LAJCPEFEOPN;
namespace System { class String; }

#define AFEMJIAJBFD_CTOR_OFFSET UNITYSDK_OFFSET(0x18DACD40)
#define AFEMJIAJBFD_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x18DACD00)
#define AFEMJIAJBFD_GFIJGKKMMIP_OFFSET UNITYSDK_OFFSET(0x18DACD80)
#define AFEMJIAJBFD_HHPNEJMBACH_OFFSET UNITYSDK_OFFSET(0x18DACF30)
#define AFEMJIAJBFD_HPIHBILPDJP_1_OFFSET UNITYSDK_OFFSET(0x18DAD2C0)
#define AFEMJIAJBFD_HPIHBILPDJP_OFFSET UNITYSDK_OFFSET(0x18DACDF0)
#define AFEMJIAJBFD_JFIIFBJPHPC_OFFSET UNITYSDK_OFFSET(0x18DACEF0)
#define AFEMJIAJBFD_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x18DACEA0)
#define AFEMJIAJBFD_NMBMEBMCJGE_OFFSET UNITYSDK_OFFSET(0x18DAD040)

inline static constexpr unsigned int AFEMJIAJBFD_TypeDefinitionIndex = 71219;

	class AFEMJIAJBFD : public ::FCFLKPABIOM
	{
	public:
		::ADOJBOKNGMB EABKOHGCHFP; // 0x20
		::DEBEAKKOHLN* OIDAGBPPNBJ; // 0x58
		::LAJCPEFEOPN* IGPNICLDPOM; // 0x60
		::System::Single CKIDJOPJMBP; // 0x68
		::System::Boolean AHIPPHLHGCO; // 0x6C
		::System::Void _ctor(::LAJCPEFEOPN* a1, ::ADOJBOKNGMB a2)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*, ::ADOJBOKNGMB))((::PBYTE)hIl2Cpp + AFEMJIAJBFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEMJIAJBFD_GET_PREFABPATH_OFFSET))(this);
		}

		::System::Void GFIJGKKMMIP(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + AFEMJIAJBFD_GFIJGKKMMIP_OFFSET))(this, a1, a2);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEMJIAJBFD_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Void JFIIFBJPHPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEMJIAJBFD_JFIIFBJPHPC_OFFSET))(this);
		}

		::System::Void HHPNEJMBACH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEMJIAJBFD_HHPNEJMBACH_OFFSET))(this);
		}

		::System::Void NMBMEBMCJGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEMJIAJBFD_NMBMEBMCJGE_OFFSET))(this);
		}

		::System::Void HPIHBILPDJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEMJIAJBFD_HPIHBILPDJP_OFFSET))(this);
		}

		::System::Void HPIHBILPDJP_1(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + AFEMJIAJBFD_HPIHBILPDJP_1_OFFSET))(this, a1, a2);
		}

	};
