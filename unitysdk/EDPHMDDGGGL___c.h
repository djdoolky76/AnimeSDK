#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define EDPHMDDGGGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1334C0F0)
#define EDPHMDDGGGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1334C120)
#define EDPHMDDGGGL___C___ONFINALEND_B__378_0_OFFSET UNITYSDK_OFFSET(0x1334C130)

	class EDPHMDDGGGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FFE0);
		}

		static ::System::Action** StaticGet___9__378_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FFE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDPHMDDGGGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPHMDDGGGL___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnFinalEnd_b__378_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPHMDDGGGL___C___ONFINALEND_B__378_0_OFFSET))(this);
		}

	};
