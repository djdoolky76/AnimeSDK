#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define MFBKLAENAEC___C_AAMGBFOJAEK_OFFSET UNITYSDK_OFFSET(0x14DDF580)
#define MFBKLAENAEC___C_DGPEBBANBMO_OFFSET UNITYSDK_OFFSET(0x14DDF460)
#define MFBKLAENAEC___C_HICEFMBDKGJ_OFFSET UNITYSDK_OFFSET(0x14DDF450)
#define MFBKLAENAEC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DDF400)
#define MFBKLAENAEC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DDF440)

inline static constexpr unsigned int MFBKLAENAEC___c_TypeDefinitionIndex = 70835;

class MFBKLAENAEC___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>** StaticGet___9__21_2()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MFBKLAENAEC___c_TypeDefinitionIndex)->GetStaticField(0x4D660);
	}
	static ::System::Action** StaticGet___9__21_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MFBKLAENAEC___c_TypeDefinitionIndex)->GetStaticField(0x4D668);
	}
	static ::System::Func_1<::System::UInt32>** StaticGet___9__21_4()
	{
		return (::System::Func_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MFBKLAENAEC___c_TypeDefinitionIndex)->GetStaticField(0x4D670);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MFBKLAENAEC___c_TypeDefinitionIndex)->GetStaticField(0x4D678);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFBKLAENAEC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBKLAENAEC___C__CTOR_OFFSET))(this);
	}

	::System::Boolean HICEFMBDKGJ(::MoleMole::Battle::Entity* PIIPCLCCOIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MFBKLAENAEC___C_HICEFMBDKGJ_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void DGPEBBANBMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBKLAENAEC___C_DGPEBBANBMO_OFFSET))(this);
	}

	::System::UInt32 AAMGBFOJAEK()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBKLAENAEC___C_AAMGBFOJAEK_OFFSET))(this);
	}
};
