#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBigSceneGroupEntityPriority; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JIODKFCCEOL_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x198CBFD0)
#define JIODKFCCEOL_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x198CC720)
#define JIODKFCCEOL_LGPBOFECCMK_OFFSET UNITYSDK_OFFSET(0x198CC2C0)
#define JIODKFCCEOL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x198CBDA0)
#define JIODKFCCEOL_PMACFDJCCHK_OFFSET UNITYSDK_OFFSET(0x198CBDF0)
#define JIODKFCCEOL__CTOR_OFFSET UNITYSDK_OFFSET(0x198CBD90)

inline static constexpr unsigned int JIODKFCCEOL_TypeDefinitionIndex = 64133;

class JIODKFCCEOL : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_GIICANFAPLD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JIODKFCCEOL_TypeDefinitionIndex)->GetStaticField(0x4D430);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIODKFCCEOL__CTOR_OFFSET))(this);
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIODKFCCEOL_NPOLNFDBOOD_OFFSET))();
	}

	static ::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Int32>* PMACFDJCCHK()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Int32>*(*)())((::PBYTE)hIl2Cpp + JIODKFCCEOL_PMACFDJCCHK_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + JIODKFCCEOL_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void LGPBOFECCMK(::System::Collections::Generic::List_1<::MoleMole::ConfigBigSceneGroupEntityPriority*>* JICBDECIBGK)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ConfigBigSceneGroupEntityPriority*>*))((::PBYTE)hIl2Cpp + JIODKFCCEOL_LGPBOFECCMK_OFFSET))(JICBDECIBGK);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + JIODKFCCEOL_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
