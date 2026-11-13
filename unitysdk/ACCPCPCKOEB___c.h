#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACCPCPCKOEB;
namespace System { class Object; }

#define ACCPCPCKOEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20094010)
#define ACCPCPCKOEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20094050)
#define ACCPCPCKOEB___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x20094060)

inline static constexpr unsigned int ACCPCPCKOEB___c_TypeDefinitionIndex = 34791;

	class ACCPCPCKOEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38BA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACCPCPCKOEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCPCPCKOEB___C_CTOR_OFFSET))(this);
		}

		::ACCPCPCKOEB* __cctor_b__43_0()
		{
			return ((::ACCPCPCKOEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCPCPCKOEB___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
