#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOBALACAPKF;
namespace System { class Object; }

#define KOBALACAPKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E87F340)
#define KOBALACAPKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E87F380)
#define KOBALACAPKF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E87F390)

inline static constexpr unsigned int KOBALACAPKF___c_TypeDefinitionIndex = 26985;

	class KOBALACAPKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20F20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOBALACAPKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBALACAPKF___C_CTOR_OFFSET))(this);
		}

		::KOBALACAPKF* __cctor_b__38_0()
		{
			return ((::KOBALACAPKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBALACAPKF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
