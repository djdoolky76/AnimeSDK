#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMDGFHPOAIO;
namespace System { class Object; }

#define FMDGFHPOAIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E0AD0)
#define FMDGFHPOAIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E0B10)
#define FMDGFHPOAIO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3E0B20)

	class FMDGFHPOAIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMDGFHPOAIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDGFHPOAIO___C_CTOR_OFFSET))(this);
		}

		::FMDGFHPOAIO* __cctor_b__28_0()
		{
			return ((::FMDGFHPOAIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDGFHPOAIO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
