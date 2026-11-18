#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PIGMEPHNDLM_CANFNOJKGLC_OFFSET UNITYSDK_OFFSET(0x194A3540)
#define PIGMEPHNDLM_CGMOIFKEFGP_OFFSET UNITYSDK_OFFSET(0x194A3800)
#define PIGMEPHNDLM_CJANNHOPDNB_OFFSET UNITYSDK_OFFSET(0x194A3A40)
#define PIGMEPHNDLM_CNPFACEAEMC_OFFSET UNITYSDK_OFFSET(0x194A3360)
#define PIGMEPHNDLM_COAJNHGKIAH_OFFSET UNITYSDK_OFFSET(0x194A3720)
#define PIGMEPHNDLM_DMCNIONDPKE_OFFSET UNITYSDK_OFFSET(0x194A3620)
#define PIGMEPHNDLM_JGCOGJFBOLP_OFFSET UNITYSDK_OFFSET(0x194A3440)
#define PIGMEPHNDLM_JGKFAHNFIHG_OFFSET UNITYSDK_OFFSET(0x194A3960)

inline static constexpr unsigned int PIGMEPHNDLM_TypeDefinitionIndex = 80661;

class PIGMEPHNDLM : public ::System::Object
{
public:
	static ::System::Boolean CNPFACEAEMC(::Il2CppArray<::System::String*>* KOIBHLHLMFC, ::System::String* MCOHLHMKLIP, ::System::Int32& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + PIGMEPHNDLM_CNPFACEAEMC_OFFSET))(KOIBHLHLMFC, MCOHLHMKLIP, IGAAKDOIPNN);
	}

	static ::System::Boolean CANFNOJKGLC(::Il2CppArray<::System::String*>* KOIBHLHLMFC, ::System::String* MCOHLHMKLIP, ::System::Int64& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::System::String*, ::System::Int64&))((::PBYTE)hIl2Cpp + PIGMEPHNDLM_CANFNOJKGLC_OFFSET))(KOIBHLHLMFC, MCOHLHMKLIP, IGAAKDOIPNN);
	}

	static ::System::Boolean DMCNIONDPKE(::Il2CppArray<::System::String*>* KOIBHLHLMFC, ::System::String* MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + PIGMEPHNDLM_DMCNIONDPKE_OFFSET))(KOIBHLHLMFC, MCOHLHMKLIP);
	}

	static ::System::Boolean COAJNHGKIAH(::Il2CppArray<::System::String*>* KOIBHLHLMFC, ::System::String* MCOHLHMKLIP, ::System::Single& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + PIGMEPHNDLM_COAJNHGKIAH_OFFSET))(KOIBHLHLMFC, MCOHLHMKLIP, IGAAKDOIPNN);
	}

	static ::System::Boolean CGMOIFKEFGP(::Il2CppArray<::System::String*>* KOIBHLHLMFC, ::System::String* MCOHLHMKLIP, ::System::Boolean& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + PIGMEPHNDLM_CGMOIFKEFGP_OFFSET))(KOIBHLHLMFC, MCOHLHMKLIP, IGAAKDOIPNN);
	}

	static ::System::Boolean JGCOGJFBOLP(::Il2CppArray<::System::String*>* KOIBHLHLMFC, ::System::String* MCOHLHMKLIP, ::System::String*& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + PIGMEPHNDLM_JGCOGJFBOLP_OFFSET))(KOIBHLHLMFC, MCOHLHMKLIP, IGAAKDOIPNN);
	}

	static ::System::Boolean JGKFAHNFIHG(::Il2CppArray<::System::String*>* KOIBHLHLMFC, ::System::String* MCOHLHMKLIP, ::System::UInt64& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::System::String*, ::System::UInt64&))((::PBYTE)hIl2Cpp + PIGMEPHNDLM_JGKFAHNFIHG_OFFSET))(KOIBHLHLMFC, MCOHLHMKLIP, IGAAKDOIPNN);
	}

	static ::System::Boolean CJANNHOPDNB(::Il2CppArray<::System::String*>* KOIBHLHLMFC, ::System::String* MCOHLHMKLIP, ::System::Double& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::System::String*, ::System::Double&))((::PBYTE)hIl2Cpp + PIGMEPHNDLM_CJANNHOPDNB_OFFSET))(KOIBHLHLMFC, MCOHLHMKLIP, IGAAKDOIPNN);
	}
};
