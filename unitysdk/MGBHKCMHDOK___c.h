#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGBHKCMHDOK;
namespace System { class Object; }

#define MGBHKCMHDOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB222A0)
#define MGBHKCMHDOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB222E0)
#define MGBHKCMHDOK___C___CCTOR_B__117_0_OFFSET UNITYSDK_OFFSET(0x1FB222F0)

inline static constexpr unsigned int MGBHKCMHDOK___c_TypeDefinitionIndex = 29796;

	class MGBHKCMHDOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGBHKCMHDOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBHKCMHDOK___C_CTOR_OFFSET))(this);
		}

		::MGBHKCMHDOK* __cctor_b__117_0()
		{
			return ((::MGBHKCMHDOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBHKCMHDOK___C___CCTOR_B__117_0_OFFSET))(this);
		}

	};
