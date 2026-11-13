#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPFBHLBMJOG;
namespace System { class Object; }

#define CPFBHLBMJOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204E5070)
#define CPFBHLBMJOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204E50A0)
#define CPFBHLBMJOG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x204E50B0)

inline static constexpr unsigned int CPFBHLBMJOG___c_TypeDefinitionIndex = 26730;

	class CPFBHLBMJOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPFBHLBMJOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFBHLBMJOG___C_CTOR_OFFSET))(this);
		}

		::CPFBHLBMJOG* __cctor_b__18_0()
		{
			return ((::CPFBHLBMJOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFBHLBMJOG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
