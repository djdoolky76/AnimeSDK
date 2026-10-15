#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define CAELMBLOLIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC473140)
#define CAELMBLOLIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC473170)
#define CAELMBLOLIM___C__OPENSCREENTRANSFER_B__68_2_OFFSET UNITYSDK_OFFSET(0xC473290)
#define CAELMBLOLIM___C___ONGAMEFINALLEAVE_B__38_0_OFFSET UNITYSDK_OFFSET(0xC473180)

inline static constexpr unsigned int CAELMBLOLIM___c_TypeDefinitionIndex = 60561;

	class CAELMBLOLIM___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__68_2()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10600);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10608);
		}

		static ::System::Action** StaticGet___9__38_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAELMBLOLIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAELMBLOLIM___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnGameFinalLeave_b__38_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAELMBLOLIM___C___ONGAMEFINALLEAVE_B__38_0_OFFSET))(this);
		}

		::System::Void _OpenScreenTransfer_b__68_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAELMBLOLIM___C__OPENSCREENTRANSFER_B__68_2_OFFSET))(this);
		}

	};
