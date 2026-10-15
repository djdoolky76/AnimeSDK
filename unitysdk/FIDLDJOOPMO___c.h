#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIDLDJOOPMO;
namespace System { class Object; }

#define FIDLDJOOPMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E369900)
#define FIDLDJOOPMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E369930)
#define FIDLDJOOPMO___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E369940)

inline static constexpr unsigned int FIDLDJOOPMO___c_TypeDefinitionIndex = 25442;

	class FIDLDJOOPMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x578F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIDLDJOOPMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDLDJOOPMO___C_CTOR_OFFSET))(this);
		}

		::FIDLDJOOPMO* __cctor_b__53_0()
		{
			return ((::FIDLDJOOPMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDLDJOOPMO___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
