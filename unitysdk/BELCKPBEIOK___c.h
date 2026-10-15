#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BELCKPBEIOK;
namespace System { class Object; }

#define BELCKPBEIOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA645C0)
#define BELCKPBEIOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA64600)
#define BELCKPBEIOK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA64610)

	class BELCKPBEIOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40EC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BELCKPBEIOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BELCKPBEIOK___C_CTOR_OFFSET))(this);
		}

		::BELCKPBEIOK* __cctor_b__28_0()
		{
			return ((::BELCKPBEIOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BELCKPBEIOK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
