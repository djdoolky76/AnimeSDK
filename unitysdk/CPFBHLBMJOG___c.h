#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPFBHLBMJOG;
namespace System { class Object; }

#define CPFBHLBMJOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E10E890)
#define CPFBHLBMJOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E10E8C0)
#define CPFBHLBMJOG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E10E8D0)

inline static constexpr unsigned int CPFBHLBMJOG___c_TypeDefinitionIndex = 26203;

	class CPFBHLBMJOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EE80);
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
