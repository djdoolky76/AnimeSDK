#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMMAFJELEOF_DBIMHFOIFON.h"
#include "unitysdk/IMMAFJELEOF_NMNGBICHCBP.h"
#include "unitysdk/MoleMole/UISafeAreaHandler_OFHBMCHLDDC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Transform; }

#define IMMAFJELEOF_AEHJHBMICEN_OFFSET UNITYSDK_OFFSET(0x1381FC20)
#define IMMAFJELEOF_CLCNNBIFKCJ_OFFSET UNITYSDK_OFFSET(0x1381FC30)
#define IMMAFJELEOF_DLELGBBEGCB_OFFSET UNITYSDK_OFFSET(0x1381EFE0)
#define IMMAFJELEOF_EGNMJFNJJHG_OFFSET UNITYSDK_OFFSET(0x1381F8D0)
#define IMMAFJELEOF_FACJLNGCHGK_OFFSET UNITYSDK_OFFSET(0x1381FCA0)
#define IMMAFJELEOF_HEKOOCBHHAN_OFFSET UNITYSDK_OFFSET(0x1381EFD0)
#define IMMAFJELEOF_IIMNEBEBNJD_OFFSET UNITYSDK_OFFSET(0x1381EC00)
#define IMMAFJELEOF_MLPPDMLLEJC_OFFSET UNITYSDK_OFFSET(0x1381ECB0)

inline static constexpr unsigned int IMMAFJELEOF_TypeDefinitionIndex = 90467;

class IMMAFJELEOF : public ::System::Object
{
public:
	static ::UnityEngine::Rect IIMNEBEBNJD(::System::Single MCMEKLILMDP)
	{
		return ((::UnityEngine::Rect(*)(::System::Single))((::PBYTE)hIl2Cpp + IMMAFJELEOF_IIMNEBEBNJD_OFFSET))(MCMEKLILMDP);
	}

	static ::System::ValueTuple_4<::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Single> MLPPDMLLEJC()
	{
		return ((::System::ValueTuple_4<::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Single>(*)())((::PBYTE)hIl2Cpp + IMMAFJELEOF_MLPPDMLLEJC_OFFSET))();
	}

	static ::System::Int32 HEKOOCBHHAN()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + IMMAFJELEOF_HEKOOCBHHAN_OFFSET))();
	}

	static ::UnityEngine::Rect DLELGBBEGCB(::IMMAFJELEOF_DBIMHFOIFON HFOKLICIEGG, ::IMMAFJELEOF_NMNGBICHCBP DAGGLDGKLEL)
	{
		return ((::UnityEngine::Rect(*)(::IMMAFJELEOF_DBIMHFOIFON, ::IMMAFJELEOF_NMNGBICHCBP))((::PBYTE)hIl2Cpp + IMMAFJELEOF_DLELGBBEGCB_OFFSET))(HFOKLICIEGG, DAGGLDGKLEL);
	}

	static ::UnityEngine::Rect EGNMJFNJJHG(::UnityEngine::Transform* AAOCANGHBDG, ::IMMAFJELEOF_DBIMHFOIFON HFOKLICIEGG, ::IMMAFJELEOF_NMNGBICHCBP DAGGLDGKLEL)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Transform*, ::IMMAFJELEOF_DBIMHFOIFON, ::IMMAFJELEOF_NMNGBICHCBP))((::PBYTE)hIl2Cpp + IMMAFJELEOF_EGNMJFNJJHG_OFFSET))(AAOCANGHBDG, HFOKLICIEGG, DAGGLDGKLEL);
	}

	static ::System::Int32 AEHJHBMICEN()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + IMMAFJELEOF_AEHJHBMICEN_OFFSET))();
	}

	static ::UnityEngine::Rect CLCNNBIFKCJ(::MoleMole::UISafeAreaHandler_OFHBMCHLDDC DJHHDNDDGFL, ::UnityEngine::Canvas* FAKJDBJMJCH)
	{
		return ((::UnityEngine::Rect(*)(::MoleMole::UISafeAreaHandler_OFHBMCHLDDC, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + IMMAFJELEOF_CLCNNBIFKCJ_OFFSET))(DJHHDNDDGFL, FAKJDBJMJCH);
	}

	static ::System::Single FACJLNGCHGK()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + IMMAFJELEOF_FACJLNGCHGK_OFFSET))();
	}
};
