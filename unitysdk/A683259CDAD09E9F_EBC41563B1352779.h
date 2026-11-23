#pragma once
#include "unitysdk/unitysdk.h"

class F2506AB93417C87F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define A683259CDAD09E9F_EBC41563B1352779__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C6FF10)
#define A683259CDAD09E9F_EBC41563B1352779__CTOR_OFFSET UNITYSDK_OFFSET(0x3C6FFD0)

inline static constexpr unsigned int A683259CDAD09E9F_EBC41563B1352779_TypeDefinitionIndex = 11655;

class A683259CDAD09E9F_EBC41563B1352779
{
public:
	static ::System::Action_1<::System::Object*>** StaticGet_E9B330B73D1E321B()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(A683259CDAD09E9F_EBC41563B1352779_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::F2506AB93417C87F* B802A2E101446A9E; // 0x58
	::System::Int16 A8A375F33E855088; // 0x60

	::System::Void _ctor(::F2506AB93417C87F* AFE8F10692F5139F, ::System::Int16 BD2C65BCCC92F212)
	{
		return ((::System::Void(*)(::PVOID, ::F2506AB93417C87F*, ::System::Int16))((::PBYTE)hIl2Cpp + A683259CDAD09E9F_EBC41563B1352779__CTOR_OFFSET))(this, AFE8F10692F5139F, BD2C65BCCC92F212);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A683259CDAD09E9F_EBC41563B1352779__CCTOR_OFFSET))();
	}
};
