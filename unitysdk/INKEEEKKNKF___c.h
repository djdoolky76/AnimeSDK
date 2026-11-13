#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INKEEEKKNKF;
namespace System { class Object; }

#define INKEEEKKNKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F66E8A0)
#define INKEEEKKNKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F66E8E0)
#define INKEEEKKNKF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F66E8F0)

inline static constexpr unsigned int INKEEEKKNKF___c_TypeDefinitionIndex = 31735;

	class INKEEEKKNKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INKEEEKKNKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INKEEEKKNKF___C_CTOR_OFFSET))(this);
		}

		::INKEEEKKNKF* __cctor_b__23_0()
		{
			return ((::INKEEEKKNKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKEEEKKNKF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
