#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEOKBKBJGOG;
namespace System { class Object; }

#define OEOKBKBJGOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1F5020)
#define OEOKBKBJGOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1F5050)
#define OEOKBKBJGOG___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F1F5060)

inline static constexpr unsigned int OEOKBKBJGOG___c_TypeDefinitionIndex = 30643;

	class OEOKBKBJGOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEOKBKBJGOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOKBKBJGOG___C_CTOR_OFFSET))(this);
		}

		::OEOKBKBJGOG* __cctor_b__43_0()
		{
			return ((::OEOKBKBJGOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOKBKBJGOG___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
