#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIKJHPHHBLD.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/MNAGAGOHIGH.h"

namespace MoleMole { class MonoGamepadVirtualCursor; }
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace MoleMole { class UIUrbanMapRightTastListWidget02WidgetContext; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RenderTexture; }
template <typename T> class BFMLEHMAGAK_1;
template <typename T> class DBMAHDDGMHM_1;
template <typename T> class NMANHEHIJAL_1;

#define PGFBGFBDBAH_LIGMMPDPPDA_KAJDKLDGGGK_OFFSET UNITYSDK_OFFSET(0x178C8D90)
#define PGFBGFBDBAH_LIGMMPDPPDA_LKNBCFOKJLO_OFFSET UNITYSDK_OFFSET(0x178C8E10)
#define PGFBGFBDBAH_LIGMMPDPPDA_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x178C8740)
#define PGFBGFBDBAH_LIGMMPDPPDA__CTOR_OFFSET UNITYSDK_OFFSET(0x178C85C0)

inline static constexpr unsigned int PGFBGFBDBAH_LIGMMPDPPDA_TypeDefinitionIndex = 46120;

class PGFBGFBDBAH_LIGMMPDPPDA : public ::FIKJHPHHBLD
{
public:
	::DBMAHDDGMHM_1<::MoleMole::MonoGamepadVirtualCursor*>* DIGMLBMAPKC; // 0xD8
	::DBMAHDDGMHM_1<::System::Int32>* BGPAKCANLED; // 0xE0
	::DBMAHDDGMHM_1<::System::Boolean>* BBKPIJFOMFO; // 0xE8
	::BFMLEHMAGAK_1<::System::Boolean>* ADNPFJMKDNM; // 0xF0
	::DBMAHDDGMHM_1<::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext*>* HDEIAJALADH; // 0xF8
	::DBMAHDDGMHM_1<::UnityEngine::RenderTexture*>* FEMOAFILJEO; // 0x100
	::NMANHEHIJAL_1<::UnityEngine::Bounds>* FCEDAPCJIKD; // 0x108
	::System::Func_1<::System::Boolean>* CIFLENFEEGN; // 0x110
	::DBMAHDDGMHM_1<::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext*>* NCPBBBEIDOE; // 0x118
	::DBMAHDDGMHM_1<::UnityEngine::Vector2>* DFEJEPECPEM; // 0x120
	::DBMAHDDGMHM_1<::MoleMole::UIUrbanMapPointWidgetContext*>* NIDBECLMOMP; // 0x128
	::DBMAHDDGMHM_1<::UnityEngine::Bounds>* MNEGNHAPHIA; // 0x130
	::DBMAHDDGMHM_1<::System::Object*>* BDLOKEAEDJG; // 0x138
	::System::Action_1<::System::Object*>* ONHBLFPPEBA; // 0x140
	::DBMAHDDGMHM_1<::UnityEngine::Rect>* FFKFLDJMMNJ; // 0x148
	::DBMAHDDGMHM_1<::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*>* DOPCNIIBHNJ; // 0x150

	::System::Void _ctor(::System::Func_1<::System::Boolean>* FIPHFGHNNBE, ::System::Action_1<::System::Object*>* FDOHAEOEDEO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_LIGMMPDPPDA__CTOR_OFFSET))(this, FIPHFGHNNBE, FDOHAEOEDEO);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_LIGMMPDPPDA_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void KAJDKLDGGGK(::MNAGAGOHIGH& KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_LIGMMPDPPDA_KAJDKLDGGGK_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void LKNBCFOKJLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_LIGMMPDPPDA_LKNBCFOKJLO_OFFSET))(this);
	}
};
