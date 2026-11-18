#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigMainCityObject;
class MainCityObjectState_ScriptConfig;
class TrafficRedLimitArea;
namespace MoleMole { class ClientSceneObjectStateLooperConfigBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BNDIBFGHLKF_ALILGJNDDBD_OFFSET UNITYSDK_OFFSET(0x113FCC90)
#define BNDIBFGHLKF_BAHBNHIACBK_OFFSET UNITYSDK_OFFSET(0x113FC870)
#define BNDIBFGHLKF_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x113FD000)
#define BNDIBFGHLKF_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x113FCF10)
#define BNDIBFGHLKF_MKIBGCHJLJL_OFFSET UNITYSDK_OFFSET(0x113FCA90)
#define BNDIBFGHLKF_OFOMGMKHLOD_OFFSET UNITYSDK_OFFSET(0x113FD220)

inline static constexpr unsigned int BNDIBFGHLKF_TypeDefinitionIndex = 77904;

class BNDIBFGHLKF : public ::System::Object
{
public:
	static ::ConfigMainCityObject** StaticGet_DFMKILICPFB()
	{
		return (::ConfigMainCityObject**)Il2CppClass::FromTypeDefinitionIndex(BNDIBFGHLKF_TypeDefinitionIndex)->GetStaticField(0x3A480);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>* BAHBNHIACBK()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>*(*)())((::PBYTE)hIl2Cpp + BNDIBFGHLKF_BAHBNHIACBK_OFFSET))();
	}

	static ::TrafficRedLimitArea* MKIBGCHJLJL(::System::String* NNDPEENOBEO)
	{
		return ((::TrafficRedLimitArea*(*)(::System::String*))((::PBYTE)hIl2Cpp + BNDIBFGHLKF_MKIBGCHJLJL_OFFSET))(NNDPEENOBEO);
	}

	static ::System::Int32 ALILGJNDDBD(::System::Int32 KLAAEIAPIKP)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + BNDIBFGHLKF_ALILGJNDDBD_OFFSET))(KLAAEIAPIKP);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + BNDIBFGHLKF_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BNDIBFGHLKF_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MainCityObjectState_ScriptConfig* OFOMGMKHLOD(::System::String* CAGFMLEKFGG)
	{
		return ((::MainCityObjectState_ScriptConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + BNDIBFGHLKF_OFOMGMKHLOD_OFFSET))(CAGFMLEKFGG);
	}
};
