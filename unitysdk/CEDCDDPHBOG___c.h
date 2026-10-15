#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEDCDDPHBOG;
namespace System { class Object; }

#define CEDCDDPHBOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0905D0)
#define CEDCDDPHBOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E090610)
#define CEDCDDPHBOG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E090620)

inline static constexpr unsigned int CEDCDDPHBOG___c_TypeDefinitionIndex = 32953;

	class CEDCDDPHBOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEDCDDPHBOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCDDPHBOG___C_CTOR_OFFSET))(this);
		}

		::CEDCDDPHBOG* __cctor_b__18_0()
		{
			return ((::CEDCDDPHBOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCDDPHBOG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
