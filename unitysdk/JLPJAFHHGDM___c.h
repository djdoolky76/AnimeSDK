#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLPJAFHHGDM;
namespace System { class Object; }

#define JLPJAFHHGDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E785A70)
#define JLPJAFHHGDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E785AB0)
#define JLPJAFHHGDM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E785AC0)

	class JLPJAFHHGDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BD50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLPJAFHHGDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPJAFHHGDM___C_CTOR_OFFSET))(this);
		}

		::JLPJAFHHGDM* __cctor_b__23_0()
		{
			return ((::JLPJAFHHGDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPJAFHHGDM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
