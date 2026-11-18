#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigTextureColor;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DDABKHLEBNH_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1832BBB0)
#define DDABKHLEBNH_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1832BC00)
#define DDABKHLEBNH_MOFHFLAOBHI_OFFSET UNITYSDK_OFFSET(0x1832B7B0)
#define DDABKHLEBNH_NCJKBNGFAIJ_OFFSET UNITYSDK_OFFSET(0x1832B990)

inline static constexpr unsigned int DDABKHLEBNH_TypeDefinitionIndex = 42031;

class DDABKHLEBNH : public ::System::Object
{
public:
	static ::ConfigTextureColor** StaticGet_OJNGKPGHECC()
	{
		return (::ConfigTextureColor**)Il2CppClass::FromTypeDefinitionIndex(DDABKHLEBNH_TypeDefinitionIndex)->GetStaticField(0x51300);
	}

	static ::ConfigTextureColor* MOFHFLAOBHI()
	{
		return ((::ConfigTextureColor*(*)())((::PBYTE)hIl2Cpp + DDABKHLEBNH_MOFHFLAOBHI_OFFSET))();
	}

	static ::System::Void NCJKBNGFAIJ(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DDABKHLEBNH_NCJKBNGFAIJ_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DDABKHLEBNH_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + DDABKHLEBNH_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
