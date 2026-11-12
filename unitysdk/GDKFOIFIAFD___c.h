#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDKFOIFIAFD;
namespace System { class Object; }

#define GDKFOIFIAFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F73B3B0)
#define GDKFOIFIAFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F73B3F0)
#define GDKFOIFIAFD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F73B400)

inline static constexpr unsigned int GDKFOIFIAFD___c_TypeDefinitionIndex = 33330;

	class GDKFOIFIAFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x576E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDKFOIFIAFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKFOIFIAFD___C_CTOR_OFFSET))(this);
		}

		::GDKFOIFIAFD* __cctor_b__28_0()
		{
			return ((::GDKFOIFIAFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKFOIFIAFD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
