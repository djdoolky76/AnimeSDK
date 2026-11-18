#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/VideoQuality.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PNFMKCJCHAI_ADLKDGEAJPO_OFFSET UNITYSDK_OFFSET(0x1D9D6140)
#define PNFMKCJCHAI_AHGNPOOOONP_OFFSET UNITYSDK_OFFSET(0x1D9D6540)
#define PNFMKCJCHAI_GNFJNKJKJNP_OFFSET UNITYSDK_OFFSET(0x1D9D6710)
#define PNFMKCJCHAI_JHCPMMCEPKD_OFFSET UNITYSDK_OFFSET(0x1D9D6200)
#define PNFMKCJCHAI_PNGPDCAKJLK_OFFSET UNITYSDK_OFFSET(0x1D9D6370)
#define PNFMKCJCHAI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9D5EB0)

inline static constexpr unsigned int PNFMKCJCHAI_TypeDefinitionIndex = 87940;

class PNFMKCJCHAI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_FKLABFFDDKL()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PNFMKCJCHAI_TypeDefinitionIndex)->GetStaticField(0x4DED0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNFMKCJCHAI__CCTOR_OFFSET))();
	}

	static ::System::Boolean JHCPMMCEPKD(::System::String* CEKNHIDPNNA, ::System::String*& HNDHMJOMFHC)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + PNFMKCJCHAI_JHCPMMCEPKD_OFFSET))(CEKNHIDPNNA, HNDHMJOMFHC);
	}

	static ::System::String* PNGPDCAKJLK(::System::String* OLOMNNBBHPJ, ::System::String* LHIJMADONJC)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PNFMKCJCHAI_PNGPDCAKJLK_OFFSET))(OLOMNNBBHPJ, LHIJMADONJC);
	}

	static ::System::String* GNFJNKJKJNP(::System::String* CEKNHIDPNNA)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PNFMKCJCHAI_GNFJNKJKJNP_OFFSET))(CEKNHIDPNNA);
	}

	static ::System::String* ADLKDGEAJPO(::MoleMole::Config::VideoQuality HNDHMJOMFHC)
	{
		return ((::System::String*(*)(::MoleMole::Config::VideoQuality))((::PBYTE)hIl2Cpp + PNFMKCJCHAI_ADLKDGEAJPO_OFFSET))(HNDHMJOMFHC);
	}

	static ::System::String* AHGNPOOOONP(::System::String* LHIJMADONJC, ::MoleMole::Config::VideoQuality JFLDAALEMGB)
	{
		return ((::System::String*(*)(::System::String*, ::MoleMole::Config::VideoQuality))((::PBYTE)hIl2Cpp + PNFMKCJCHAI_AHGNPOOOONP_OFFSET))(LHIJMADONJC, JFLDAALEMGB);
	}
};
