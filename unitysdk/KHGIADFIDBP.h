#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDSetInLevelStateGroup_InLevelStateEnum.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDSetInLevelStateGroup_StateGroupEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class CDDABMFIGCJ;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define KHGIADFIDBP_DIIMCDJEJOD_OFFSET UNITYSDK_OFFSET(0xD3F84F0)
#define KHGIADFIDBP_NJBMCENOKHO_OFFSET UNITYSDK_OFFSET(0xD3F8570)
#define KHGIADFIDBP_OBOGCLNDIJO_OFFSET UNITYSDK_OFFSET(0xD3F8030)
#define KHGIADFIDBP__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3F7C30)

inline static constexpr unsigned int KHGIADFIDBP_TypeDefinitionIndex = 71926;

class KHGIADFIDBP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_PIKEIABODLG()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KHGIADFIDBP_TypeDefinitionIndex)->GetStaticField(0x32980);
	}
	static ::CDDABMFIGCJ** StaticGet_MELEMPBIPBL()
	{
		return (::CDDABMFIGCJ**)Il2CppClass::FromTypeDefinitionIndex(KHGIADFIDBP_TypeDefinitionIndex)->GetStaticField(0x32988);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_MJCJFIPPCFP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(KHGIADFIDBP_TypeDefinitionIndex)->GetStaticField(0x32990);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHGIADFIDBP__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::String*>* OBOGCLNDIJO(::System::String* NPLDFCGIJOE)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + KHGIADFIDBP_OBOGCLNDIJO_OFFSET))(NPLDFCGIJOE);
	}

	static ::Il2CppArray<::System::String*>* DIIMCDJEJOD()
	{
		return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + KHGIADFIDBP_DIIMCDJEJOD_OFFSET))();
	}

	static ::System::ValueTuple_2<::System::String*, ::System::String*> NJBMCENOKHO(::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum JPLKKOHBBKC, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum JKBLDFBGBPK, ::System::Type* OBNIAHNMHPF)
	{
		return ((::System::ValueTuple_2<::System::String*, ::System::String*>(*)(::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum, ::System::Type*))((::PBYTE)hIl2Cpp + KHGIADFIDBP_NJBMCENOKHO_OFFSET))(JPLKKOHBBKC, JKBLDFBGBPK, OBNIAHNMHPF);
	}
};
