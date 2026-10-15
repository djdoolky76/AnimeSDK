#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INBDBFEEBAD;
namespace System { class Object; }

#define INBDBFEEBAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6BD650)
#define INBDBFEEBAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6BD690)
#define INBDBFEEBAD___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E6BD6A0)

	class INBDBFEEBAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INBDBFEEBAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INBDBFEEBAD___C_CTOR_OFFSET))(this);
		}

		::INBDBFEEBAD* __cctor_b__38_0()
		{
			return ((::INBDBFEEBAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + INBDBFEEBAD___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
