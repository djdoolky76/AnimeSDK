#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class GHLNPFDIJLF;
class IJFIHJJPHNA;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LCHDCIDBJAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C738510)
#define LCHDCIDBJAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C738550)
#define LCHDCIDBJAG___C__USETACTICSCARD_B__74_0_OFFSET UNITYSDK_OFFSET(0x1C7385B0)
#define LCHDCIDBJAG___C__USETACTICSCARD_B__74_1_OFFSET UNITYSDK_OFFSET(0x1C738590)
#define LCHDCIDBJAG___C__USETACTICSCARD_B__74_2_OFFSET UNITYSDK_OFFSET(0x1C7385A0)
#define LCHDCIDBJAG___C___APPLYTACTICSCARDMODIFIER_B__73_0_OFFSET UNITYSDK_OFFSET(0x1C738560)

	class LCHDCIDBJAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13E40);
		}

		static ::System::Func_2<::System::Int32, ::RPG::GameCore::FixPoint>** StaticGet___9__73_0()
		{
			return (::System::Func_2<::System::Int32, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13E48);
		}

		static ::System::Func_2<::GHLNPFDIJLF*, ::System::String*>** StaticGet___9__74_0()
		{
			return (::System::Func_2<::GHLNPFDIJLF*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13E50);
		}

		static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__74_2()
		{
			return (::System::Func_2<::System::Int32, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13E58);
		}

		static ::System::Func_2<::System::ValueTuple, ::System::Int32>** StaticGet___9__74_1()
		{
			return (::System::Func_2<::System::ValueTuple, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCHDCIDBJAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCHDCIDBJAG___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint __ApplyTacticsCardModifier_b__73_0(::System::Int32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LCHDCIDBJAG___C___APPLYTACTICSCARDMODIFIER_B__73_0_OFFSET))(this, a1);
		}

		::System::Int32 _UseTacticsCard_b__74_1(::System::ValueTuple a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + LCHDCIDBJAG___C__USETACTICSCARD_B__74_1_OFFSET))(this, a1);
		}

		::System::Int32 _UseTacticsCard_b__74_2(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LCHDCIDBJAG___C__USETACTICSCARD_B__74_2_OFFSET))(this, a1);
		}

		::System::String* _UseTacticsCard_b__74_0(::GHLNPFDIJLF* a1)
		{
			return ((::System::String*(*)(::PVOID, ::GHLNPFDIJLF*))((::PBYTE)hIl2Cpp + LCHDCIDBJAG___C__USETACTICSCARD_B__74_0_OFFSET))(this, a1);
		}

	};
