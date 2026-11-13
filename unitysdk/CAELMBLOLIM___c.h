#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define CAELMBLOLIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B621F60)
#define CAELMBLOLIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B621F90)
#define CAELMBLOLIM___C__OPENSCREENTRANSFER_B__79_2_OFFSET UNITYSDK_OFFSET(0x1B6220B0)
#define CAELMBLOLIM___C___ONGAMEFINALLEAVE_B__41_0_OFFSET UNITYSDK_OFFSET(0x1B621FA0)

inline static constexpr unsigned int CAELMBLOLIM___c_TypeDefinitionIndex = 61850;

	class CAELMBLOLIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70790);
		}

		static ::System::Action** StaticGet___9__41_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70798);
		}

		static ::System::Action** StaticGet___9__79_2()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x707A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAELMBLOLIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAELMBLOLIM___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnGameFinalLeave_b__41_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAELMBLOLIM___C___ONGAMEFINALLEAVE_B__41_0_OFFSET))(this);
		}

		::System::Void _OpenScreenTransfer_b__79_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAELMBLOLIM___C__OPENSCREENTRANSFER_B__79_2_OFFSET))(this);
		}

	};
