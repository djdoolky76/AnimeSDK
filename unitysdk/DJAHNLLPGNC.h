#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIKCJNHCNGH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define DJAHNLLPGNC_GGKCCAHMGNF_OFFSET UNITYSDK_OFFSET(0x12088310)
#define DJAHNLLPGNC_HOIJICBODBD_OFFSET UNITYSDK_OFFSET(0x12088020)
#define DJAHNLLPGNC_IJKJOKCNCEB_1_OFFSET UNITYSDK_OFFSET(0x12087FC0)
#define DJAHNLLPGNC_IJKJOKCNCEB_OFFSET UNITYSDK_OFFSET(0x12087F50)

inline static constexpr unsigned int DJAHNLLPGNC_TypeDefinitionIndex = 68302;

class DJAHNLLPGNC : public ::System::Object
{
public:
	static ::System::Void IJKJOKCNCEB(::LIKCJNHCNGH IMOAKEGINJP, ::System::Boolean KANJODNFFOI, ::System::String* NAPFALLANDL, ::UnityEngine::Color JBBFCGAMDHI, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::LIKCJNHCNGH, ::System::Boolean, ::System::String*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + DJAHNLLPGNC_IJKJOKCNCEB_OFFSET))(IMOAKEGINJP, KANJODNFFOI, NAPFALLANDL, JBBFCGAMDHI, MDPPNMIPDMP);
	}

	static ::System::Void IJKJOKCNCEB_1(::LIKCJNHCNGH IMOAKEGINJP, ::System::Boolean KANJODNFFOI, ::System::String* NAPFALLANDL, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::LIKCJNHCNGH, ::System::Boolean, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DJAHNLLPGNC_IJKJOKCNCEB_1_OFFSET))(IMOAKEGINJP, KANJODNFFOI, NAPFALLANDL, MDPPNMIPDMP);
	}

	static ::System::Void HOIJICBODBD(::UnityEngine::GameObject* EIFONLCJOPG, ::System::Boolean KKMENMCMMBN, ::System::Boolean IHFBPFEKFAG)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DJAHNLLPGNC_HOIJICBODBD_OFFSET))(EIFONLCJOPG, KKMENMCMMBN, IHFBPFEKFAG);
	}

	static ::System::Void GGKCCAHMGNF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJAHNLLPGNC_GGKCCAHMGNF_OFFSET))();
	}
};
