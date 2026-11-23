#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define A507409E5647F760_F5628F8349D4A8A6_AC1294E06E62B766_OFFSET UNITYSDK_OFFSET(0x3AAFF00)
#define A507409E5647F760_F5628F8349D4A8A6_BA49587749A7FF3B_OFFSET UNITYSDK_OFFSET(0x3AB00D0)
#define A507409E5647F760_F5628F8349D4A8A6_BDBC67FC5F3FD052_OFFSET UNITYSDK_OFFSET(0x3AAFFB0)
#define A507409E5647F760_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AB22D0)
#define A507409E5647F760_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A507409E5647F760_F5628F8349D4A8A6_TypeDefinitionIndex = 12067;

class A507409E5647F760_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A507409E5647F760_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A507409E5647F760_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A507409E5647F760_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet_A6FCB71C4539A8BF()
	{
		return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(A507409E5647F760_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet_BFBEC0FF67E3BA80()
	{
		return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(A507409E5647F760_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet_E59D3D96EDFC10CF()
	{
		return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(A507409E5647F760_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A507409E5647F760_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A507409E5647F760_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void AC1294E06E62B766(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A507409E5647F760_F5628F8349D4A8A6_AC1294E06E62B766_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void BDBC67FC5F3FD052(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A507409E5647F760_F5628F8349D4A8A6_BDBC67FC5F3FD052_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void BA49587749A7FF3B(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A507409E5647F760_F5628F8349D4A8A6_BA49587749A7FF3B_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}
};
