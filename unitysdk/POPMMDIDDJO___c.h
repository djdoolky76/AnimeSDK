#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POPMMDIDDJO;
namespace System { class Object; }

#define POPMMDIDDJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD1980)
#define POPMMDIDDJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD19C0)
#define POPMMDIDDJO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFD19D0)

	class POPMMDIDDJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x435E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POPMMDIDDJO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPMMDIDDJO___C_CTOR_OFFSET))(this);
		}

		::POPMMDIDDJO* __cctor_b__28_0()
		{
			return ((::POPMMDIDDJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + POPMMDIDDJO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
