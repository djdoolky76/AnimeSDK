#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/JJEJBPGJPJN.h"

class LFLKAEJOACL;
template <typename T> class BFMLEHMAGAK_1;
template <typename T> class LJHFMILANJA_1;

#define OKCAFFHCJAF_KLCDKDEHOMA_OFFSET UNITYSDK_OFFSET(0x11B39770)
#define OKCAFFHCJAF_LFFIIEHFKAF_OFFSET UNITYSDK_OFFSET(0x11B394F0)
#define OKCAFFHCJAF_NLACPNKJCII_OFFSET UNITYSDK_OFFSET(0x11B39AB0)
#define OKCAFFHCJAF_NOBAJOENMMO_OFFSET UNITYSDK_OFFSET(0x11B39C40)
#define OKCAFFHCJAF_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x11B39300)
#define OKCAFFHCJAF_PKAAHLLNINF_OFFSET UNITYSDK_OFFSET(0x11B39C80)
#define OKCAFFHCJAF__CTOR_OFFSET UNITYSDK_OFFSET(0x11B394E0)

inline static constexpr unsigned int OKCAFFHCJAF_TypeDefinitionIndex = 70983;

class OKCAFFHCJAF : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::LFLKAEJOACL*>* HPEMFJDOAKL; // 0x88
	::BFMLEHMAGAK_1<::System::Boolean>* GFNLLIJJCBA; // 0x90
	::BFMLEHMAGAK_1<::System::Int32>* DDDGJKKFPOO; // 0x98
	::LJHFMILANJA_1<::System::Boolean>* OPJGFNENAHC; // 0xA0
	::BFMLEHMAGAK_1<::Foundation::AssetPath>* AOOLNBKIHAG; // 0xA8
	::BFMLEHMAGAK_1<::System::Boolean>* OHNGNGJEMGJ; // 0xB0
	::LJHFMILANJA_1<::System::Boolean>* LHAICGJMNOF; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCAFFHCJAF__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCAFFHCJAF_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void LFFIIEHFKAF(::LFLKAEJOACL* HPEMFJDOAKL, ::System::Boolean OPJGFNENAHC, ::System::Boolean LHAICGJMNOF)
	{
		return ((::System::Void(*)(::PVOID, ::LFLKAEJOACL*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OKCAFFHCJAF_LFFIIEHFKAF_OFFSET))(this, HPEMFJDOAKL, OPJGFNENAHC, LHAICGJMNOF);
	}

	::System::Boolean KLCDKDEHOMA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCAFFHCJAF_KLCDKDEHOMA_OFFSET))(this);
	}

	::System::Boolean NLACPNKJCII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCAFFHCJAF_NLACPNKJCII_OFFSET))(this);
	}

	::Foundation::AssetPath NOBAJOENMMO()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCAFFHCJAF_NOBAJOENMMO_OFFSET))(this);
	}

	::System::Int32 PKAAHLLNINF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCAFFHCJAF_PKAAHLLNINF_OFFSET))(this);
	}
};
