#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POBLGKIGINE;
namespace System { class Object; }

#define POBLGKIGINE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F276090)
#define POBLGKIGINE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2760D0)
#define POBLGKIGINE___C___CCTOR_B__47_0_OFFSET UNITYSDK_OFFSET(0x1F2760E0)

inline static constexpr unsigned int POBLGKIGINE___c_TypeDefinitionIndex = 26423;

	class POBLGKIGINE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x454B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POBLGKIGINE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBLGKIGINE___C_CTOR_OFFSET))(this);
		}

		::POBLGKIGINE* __cctor_b__47_0()
		{
			return ((::POBLGKIGINE*(*)(::PVOID))((::PBYTE)hIl2Cpp + POBLGKIGINE___C___CCTOR_B__47_0_OFFSET))(this);
		}

	};
