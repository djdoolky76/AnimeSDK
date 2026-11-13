#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class JsonEnum; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KLDACPIHCCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x17373880)
#define KLDACPIHCCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x173738B0)
#define KLDACPIHCCN___C___BUILD_B__15_0_OFFSET UNITYSDK_OFFSET(0x173738C0)
#define KLDACPIHCCN___C___CCTOR_B__47_0_OFFSET UNITYSDK_OFFSET(0x173738F0)
#define KLDACPIHCCN___C___CCTOR_B__47_1_OFFSET UNITYSDK_OFFSET(0x173739B0)

inline static constexpr unsigned int KLDACPIHCCN___c_TypeDefinitionIndex = 57423;

	class KLDACPIHCCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F730);
		}

		static ::System::Func_2<::RPG::GameCore::JsonEnum*, ::System::String*>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::GameCore::JsonEnum*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F738);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLDACPIHCCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDACPIHCCN___C_CTOR_OFFSET))(this);
		}

		::System::String* __Build_b__15_0(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + KLDACPIHCCN___C___BUILD_B__15_0_OFFSET))(this, a1);
		}

		::System::String* __cctor_b__47_0(::RPG::GameCore::AbilityProperty a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + KLDACPIHCCN___C___CCTOR_B__47_0_OFFSET))(this, a1);
		}

		::System::String* __cctor_b__47_1(::RPG::GameCore::AbilityProperty a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + KLDACPIHCCN___C___CCTOR_B__47_1_OFFSET))(this, a1);
		}

	};
