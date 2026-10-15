#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADOJBOKNGMB.h"
#include "unitysdk/FCFLKPABIOM.h"
class DEBEAKKOHLN;
class LAJCPEFEOPN;
namespace System { class String; }

#define AFEMJIAJBFD_CTOR_OFFSET UNITYSDK_OFFSET(0xCF016D0)
#define AFEMJIAJBFD_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xCF01690)
#define AFEMJIAJBFD_GFIJGKKMMIP_OFFSET UNITYSDK_OFFSET(0xCF01710)
#define AFEMJIAJBFD_HHPNEJMBACH_OFFSET UNITYSDK_OFFSET(0xCF018C0)
#define AFEMJIAJBFD_HPIHBILPDJP_1_OFFSET UNITYSDK_OFFSET(0xCF01C50)
#define AFEMJIAJBFD_HPIHBILPDJP_OFFSET UNITYSDK_OFFSET(0xCF01780)
#define AFEMJIAJBFD_JFIIFBJPHPC_OFFSET UNITYSDK_OFFSET(0xCF01880)
#define AFEMJIAJBFD_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xCF01830)
#define AFEMJIAJBFD_NMBMEBMCJGE_OFFSET UNITYSDK_OFFSET(0xCF019D0)

inline static constexpr unsigned int AFEMJIAJBFD_TypeDefinitionIndex = 69265;

	class AFEMJIAJBFD : public ::FCFLKPABIOM
	{
	public:
		::LAJCPEFEOPN* IGPNICLDPOM; // 0x20
		::ADOJBOKNGMB EABKOHGCHFP; // 0x28
		::DEBEAKKOHLN* OIDAGBPPNBJ; // 0x60
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
