#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SurfGameItemDataEntry.h"
#include "unitysdk/MoleMole/Config/SurfGameTriggerDataEntry.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSurfGameItemData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOKBENHNOHG_ANHPADDDGNJ_OFFSET UNITYSDK_OFFSET(0x13172440)
#define NOKBENHNOHG_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x13172160)
#define NOKBENHNOHG_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x13172070)
#define NOKBENHNOHG_JDIDEOJIGME_OFFSET UNITYSDK_OFFSET(0x13172E90)
#define NOKBENHNOHG_KACHGOIJOOO_OFFSET UNITYSDK_OFFSET(0x13172F60)
#define NOKBENHNOHG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x131723F0)
#define NOKBENHNOHG_ODJBBMOAPEN_OFFSET UNITYSDK_OFFSET(0x13172510)
#define NOKBENHNOHG_OMFMDJLMIEC_OFFSET UNITYSDK_OFFSET(0x131729D0)
#define NOKBENHNOHG__CCTOR_OFFSET UNITYSDK_OFFSET(0x13172060)
#define NOKBENHNOHG__CTOR_OFFSET UNITYSDK_OFFSET(0x13172050)

inline static constexpr unsigned int NOKBENHNOHG_TypeDefinitionIndex = 52979;

class NOKBENHNOHG : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::SurfGameTriggerDataEntry>** StaticGet_BCBMMFGDOFM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::SurfGameTriggerDataEntry>**)Il2CppClass::FromTypeDefinitionIndex(NOKBENHNOHG_TypeDefinitionIndex)->GetStaticField(0x425A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::SurfGameItemDataEntry>** StaticGet_CBEAFDIKGKC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::SurfGameItemDataEntry>**)Il2CppClass::FromTypeDefinitionIndex(NOKBENHNOHG_TypeDefinitionIndex)->GetStaticField(0x425A8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKBENHNOHG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOKBENHNOHG__CCTOR_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NOKBENHNOHG_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOKBENHNOHG_NPOLNFDBOOD_OFFSET))();
	}

	static ::System::Boolean ANHPADDDGNJ(::System::Int32 CLACNEMIOBA, ::MoleMole::Config::SurfGameTriggerDataEntry& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Config::SurfGameTriggerDataEntry&))((::PBYTE)hIl2Cpp + NOKBENHNOHG_ANHPADDDGNJ_OFFSET))(CLACNEMIOBA, EGEGIMGMJHN);
	}

	static ::System::Void ODJBBMOAPEN(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSurfGameItemData*>* FJDCNBOBIGI)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSurfGameItemData*>*))((::PBYTE)hIl2Cpp + NOKBENHNOHG_ODJBBMOAPEN_OFFSET))(FJDCNBOBIGI);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NOKBENHNOHG_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void OMFMDJLMIEC(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSurfGameItemData*>* FJDCNBOBIGI)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSurfGameItemData*>*))((::PBYTE)hIl2Cpp + NOKBENHNOHG_OMFMDJLMIEC_OFFSET))(FJDCNBOBIGI);
	}

	static ::System::Boolean JDIDEOJIGME(::System::Int32 CLACNEMIOBA, ::MoleMole::Config::SurfGameItemDataEntry& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Config::SurfGameItemDataEntry&))((::PBYTE)hIl2Cpp + NOKBENHNOHG_JDIDEOJIGME_OFFSET))(CLACNEMIOBA, EGEGIMGMJHN);
	}

	static ::System::Void KACHGOIJOOO(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSurfGameItemData*>* FJDCNBOBIGI)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSurfGameItemData*>*))((::PBYTE)hIl2Cpp + NOKBENHNOHG_KACHGOIJOOO_OFFSET))(FJDCNBOBIGI);
	}
};
