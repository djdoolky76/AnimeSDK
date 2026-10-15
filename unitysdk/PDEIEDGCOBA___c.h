#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDEIEDGCOBA;
namespace System { class Object; }

#define PDEIEDGCOBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF0DA20)
#define PDEIEDGCOBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0DA50)
#define PDEIEDGCOBA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF0DA60)

	class PDEIEDGCOBA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDEIEDGCOBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEIEDGCOBA___C_CTOR_OFFSET))(this);
		}

		::PDEIEDGCOBA* __cctor_b__28_0()
		{
			return ((::PDEIEDGCOBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDEIEDGCOBA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
