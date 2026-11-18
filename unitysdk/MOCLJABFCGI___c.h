#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimatorEventPattern; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

#define MOCLJABFCGI___C_GKLDDKDOLFC_OFFSET UNITYSDK_OFFSET(0x1C597DD0)
#define MOCLJABFCGI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C597D80)
#define MOCLJABFCGI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C597DC0)

inline static constexpr unsigned int MOCLJABFCGI___c_TypeDefinitionIndex = 63248;

class MOCLJABFCGI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MOCLJABFCGI___c_TypeDefinitionIndex)->GetStaticField(0x4D730);
	}
	static ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::SortedList_2<::System::String*, ::MoleMole::Config::AnimatorEventPattern*>*>>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::SortedList_2<::System::String*, ::MoleMole::Config::AnimatorEventPattern*>*>>**)Il2CppClass::FromTypeDefinitionIndex(MOCLJABFCGI___c_TypeDefinitionIndex)->GetStaticField(0x4D738);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOCLJABFCGI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCLJABFCGI___C__CTOR_OFFSET))(this);
	}

	::System::Void GKLDDKDOLFC(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::SortedList_2<::System::String*, ::MoleMole::Config::AnimatorEventPattern*>*> HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::SortedList_2<::System::String*, ::MoleMole::Config::AnimatorEventPattern*>*>))((::PBYTE)hIl2Cpp + MOCLJABFCGI___C_GKLDDKDOLFC_OFFSET))(this, HAAEBCOBKFF);
	}
};
