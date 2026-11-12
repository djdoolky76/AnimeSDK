#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGODFDFPEI;
namespace System { class Object; }

#define DMGODFDFPEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4CA3B0)
#define DMGODFDFPEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4CA3E0)
#define DMGODFDFPEI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F4CA3F0)

inline static constexpr unsigned int DMGODFDFPEI___c_TypeDefinitionIndex = 27837;

	class DMGODFDFPEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMGODFDFPEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGODFDFPEI___C_CTOR_OFFSET))(this);
		}

		::DMGODFDFPEI* __cctor_b__28_0()
		{
			return ((::DMGODFDFPEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGODFDFPEI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
