#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialPropertySettings; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Shader; }

#define KLEKPGJKAIB_CDJCFOAOADL_OFFSET UNITYSDK_OFFSET(0xD402070)
#define KLEKPGJKAIB_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xD4026F0)
#define KLEKPGJKAIB_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xD402600)
#define KLEKPGJKAIB_EDLAHOCCCCA_OFFSET UNITYSDK_OFFSET(0xD402250)
#define KLEKPGJKAIB_MBEPBIILJKO_1_OFFSET UNITYSDK_OFFSET(0xD402260)
#define KLEKPGJKAIB_MBEPBIILJKO_OFFSET UNITYSDK_OFFSET(0xD401DC0)

inline static constexpr unsigned int KLEKPGJKAIB_TypeDefinitionIndex = 42548;

class KLEKPGJKAIB : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigMaterialPropertySettings** StaticGet_ODLDMDDCEEH()
	{
		return (::MoleMole::Config::ConfigMaterialPropertySettings**)Il2CppClass::FromTypeDefinitionIndex(KLEKPGJKAIB_TypeDefinitionIndex)->GetStaticField(0x329C0);
	}

	static ::System::Boolean MBEPBIILJKO(::MoleMole::Config::MaterialPropertyType CBKIEGMDEIE, ::System::String*& MAIFBMEJPAB)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::MaterialPropertyType, ::System::String*&))((::PBYTE)hIl2Cpp + KLEKPGJKAIB_MBEPBIILJKO_OFFSET))(CBKIEGMDEIE, MAIFBMEJPAB);
	}

	static ::MoleMole::Config::ConfigMaterialPropertySettings* CDJCFOAOADL()
	{
		return ((::MoleMole::Config::ConfigMaterialPropertySettings*(*)())((::PBYTE)hIl2Cpp + KLEKPGJKAIB_CDJCFOAOADL_OFFSET))();
	}

	static ::System::Void EDLAHOCCCCA(::MoleMole::Config::ConfigMaterialPropertySettings* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigMaterialPropertySettings*))((::PBYTE)hIl2Cpp + KLEKPGJKAIB_EDLAHOCCCCA_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean MBEPBIILJKO_1(::MoleMole::Config::MaterialPropertyType CBKIEGMDEIE, ::UnityEngine::Shader*& JJIILBHFPEI)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::MaterialPropertyType, ::UnityEngine::Shader*&))((::PBYTE)hIl2Cpp + KLEKPGJKAIB_MBEPBIILJKO_1_OFFSET))(CBKIEGMDEIE, JJIILBHFPEI);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + KLEKPGJKAIB_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KLEKPGJKAIB_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
