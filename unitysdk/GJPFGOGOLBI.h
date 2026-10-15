#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"
#include "unitysdk/System/Object.h"
class BGMKDGACBNI;
class MNBNFBAMKKI;

#define GJPFGOGOLBI_CHINLBJOLJE_OFFSET UNITYSDK_OFFSET(0x15A767E0)
#define GJPFGOGOLBI_CLEAR_OFFSET UNITYSDK_OFFSET(0x15A76990)
#define GJPFGOGOLBI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A76B40)
#define GJPFGOGOLBI_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x15A769D0)
#define GJPFGOGOLBI_DOPDFMCCNCO_OFFSET UNITYSDK_OFFSET(0x15A76A60)
#define GJPFGOGOLBI_EFKLLLLPAJH_OFFSET UNITYSDK_OFFSET(0x15A76A50)
#define GJPFGOGOLBI_JIKPFKJFKIC_OFFSET UNITYSDK_OFFSET(0x15A768A0)
#define GJPFGOGOLBI_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x15A76A10)
#define GJPFGOGOLBI_PKHHFCJDKHD_OFFSET UNITYSDK_OFFSET(0x15A76A70)

inline static constexpr unsigned int GJPFGOGOLBI_TypeDefinitionIndex = 53779;

	class GJPFGOGOLBI : public ::System::Object
	{
	public:
		::MNBNFBAMKKI* PAGEHGAAAFL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPFGOGOLBI_CTOR_OFFSET))(this);
		}

		::System::Void CHINLBJOLJE(::MNBNFBAMKKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + GJPFGOGOLBI_CHINLBJOLJE_OFFSET))(this, a1);
		}

		::System::Void JIKPFKJFKIC(::MNBNFBAMKKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + GJPFGOGOLBI_JIKPFKJFKIC_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPFGOGOLBI_CLEAR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPFGOGOLBI_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPFGOGOLBI_NLBNJGKAMII_OFFSET))(this);
		}

		::RPG::GameCore::RtModifierBehaviorLifeBinding EFKLLLLPAJH()
		{
			return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPFGOGOLBI_EFKLLLLPAJH_OFFSET))(this);
		}

		::MNBNFBAMKKI* DOPDFMCCNCO()
		{
			return ((::MNBNFBAMKKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPFGOGOLBI_DOPDFMCCNCO_OFFSET))(this);
		}

		::BGMKDGACBNI* PKHHFCJDKHD()
		{
			return ((::BGMKDGACBNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPFGOGOLBI_PKHHFCJDKHD_OFFSET))(this);
		}

	};
