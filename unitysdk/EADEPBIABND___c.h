#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define EADEPBIABND___C_ABAALKIBGBN_OFFSET UNITYSDK_OFFSET(0x13494190)
#define EADEPBIABND___C_BFFJBEIPNKB_OFFSET UNITYSDK_OFFSET(0x13494070)
#define EADEPBIABND___C_GAKGJIKMNAD_OFFSET UNITYSDK_OFFSET(0x13493EA0)
#define EADEPBIABND___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13493E50)
#define EADEPBIABND___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13493E90)

inline static constexpr unsigned int EADEPBIABND___c_TypeDefinitionIndex = 89541;

class EADEPBIABND___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__10_10()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EADEPBIABND___c_TypeDefinitionIndex)->GetStaticField(0x37460);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__10_11()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EADEPBIABND___c_TypeDefinitionIndex)->GetStaticField(0x37468);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__10_9()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(EADEPBIABND___c_TypeDefinitionIndex)->GetStaticField(0x37470);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EADEPBIABND___c_TypeDefinitionIndex)->GetStaticField(0x37478);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EADEPBIABND___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADEPBIABND___C__CTOR_OFFSET))(this);
	}

	::System::Void GAKGJIKMNAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADEPBIABND___C_GAKGJIKMNAD_OFFSET))(this);
	}

	::System::Void BFFJBEIPNKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADEPBIABND___C_BFFJBEIPNKB_OFFSET))(this);
	}

	::System::Int32 ABAALKIBGBN(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EADEPBIABND___C_ABAALKIBGBN_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
