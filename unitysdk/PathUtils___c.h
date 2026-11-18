#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PathUtils_IndexedPathDistance.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define PATHUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1EE2B0)
#define PATHUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1EE2F0)
#define PATHUTILS___C__FINDNEARESTPOINTSBYPATH_B__6_0_OFFSET UNITYSDK_OFFSET(0x1C1EE300)
#define PATHUTILS___C__FINDNEARESTPOINTSBYPATH_B__6_1_OFFSET UNITYSDK_OFFSET(0x1C1EE360)

inline static constexpr unsigned int PathUtils___c_TypeDefinitionIndex = 39055;

class PathUtils___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PathUtils___c_TypeDefinitionIndex)->GetStaticField(0x49420);
	}
	static ::System::Comparison_1<::System::Object*>** StaticGet___9__6_0()
	{
		return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PathUtils___c_TypeDefinitionIndex)->GetStaticField(0x49428);
	}
	static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__6_1()
	{
		return (::System::Func_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PathUtils___c_TypeDefinitionIndex)->GetStaticField(0x49430);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PATHUTILS___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHUTILS___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _FindNearestPointsByPath_b__6_0(::PathUtils_IndexedPathDistance a, ::PathUtils_IndexedPathDistance b)
	{
		return ((::System::Int32(*)(::PVOID, ::PathUtils_IndexedPathDistance, ::PathUtils_IndexedPathDistance))((::PBYTE)hIl2Cpp + PATHUTILS___C__FINDNEARESTPOINTSBYPATH_B__6_0_OFFSET))(this, a, b);
	}

	::System::Int32 _FindNearestPointsByPath_b__6_1(::PathUtils_IndexedPathDistance item)
	{
		return ((::System::Int32(*)(::PVOID, ::PathUtils_IndexedPathDistance))((::PBYTE)hIl2Cpp + PATHUTILS___C__FINDNEARESTPOINTSBYPATH_B__6_1_OFFSET))(this, item);
	}
};
