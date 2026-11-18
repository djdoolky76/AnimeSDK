#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DynamicCheckTreeDataEntry.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDynamicCheckTree; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CGLCIADPCDC_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x145C29F0)
#define CGLCIADPCDC_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x145C2900)
#define CGLCIADPCDC_IBFJAHGGLPM_OFFSET UNITYSDK_OFFSET(0x145C2C80)
#define CGLCIADPCDC_LGPBOFECCMK_OFFSET UNITYSDK_OFFSET(0x145C2F00)
#define CGLCIADPCDC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x145C3400)
#define CGLCIADPCDC__CCTOR_OFFSET UNITYSDK_OFFSET(0x145C28F0)
#define CGLCIADPCDC__CTOR_OFFSET UNITYSDK_OFFSET(0x145C28E0)

inline static constexpr unsigned int CGLCIADPCDC_TypeDefinitionIndex = 50828;

class CGLCIADPCDC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DynamicCheckTreeDataEntry>** StaticGet_AKGFIAELDEG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DynamicCheckTreeDataEntry>**)Il2CppClass::FromTypeDefinitionIndex(CGLCIADPCDC_TypeDefinitionIndex)->GetStaticField(0x40360);
	}
	static ::System::Int32* StaticGet_NOCPEGHFANC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CGLCIADPCDC_TypeDefinitionIndex)->GetStaticField(0xED20);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLCIADPCDC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGLCIADPCDC__CCTOR_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CGLCIADPCDC_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Boolean IBFJAHGGLPM(::System::Int32 CLACNEMIOBA, ::MoleMole::DynamicCheckTreeDataEntry& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::DynamicCheckTreeDataEntry&))((::PBYTE)hIl2Cpp + CGLCIADPCDC_IBFJAHGGLPM_OFFSET))(CLACNEMIOBA, EGEGIMGMJHN);
	}

	static ::System::Void LGPBOFECCMK(::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicCheckTree*>* HPILKGCAPGF)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicCheckTree*>*))((::PBYTE)hIl2Cpp + CGLCIADPCDC_LGPBOFECCMK_OFFSET))(HPILKGCAPGF);
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGLCIADPCDC_NPOLNFDBOOD_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CGLCIADPCDC_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
