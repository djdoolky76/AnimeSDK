#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMIMDEJMFCO;
namespace System { class Object; }

#define GMIMDEJMFCO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D61B0)
#define GMIMDEJMFCO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D61E0)
#define GMIMDEJMFCO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4D61F0)

	class GMIMDEJMFCO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMIMDEJMFCO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIMDEJMFCO___C_CTOR_OFFSET))(this);
		}

		::GMIMDEJMFCO* __cctor_b__28_0()
		{
			return ((::GMIMDEJMFCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIMDEJMFCO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
