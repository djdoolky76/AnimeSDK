#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INHBMHCJJCN;
namespace System { class Object; }

#define INHBMHCJJCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E695100)
#define INHBMHCJJCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E695130)
#define INHBMHCJJCN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E695140)

inline static constexpr unsigned int INHBMHCJJCN___c_TypeDefinitionIndex = 33179;

	class INHBMHCJJCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x539F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INHBMHCJJCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INHBMHCJJCN___C_CTOR_OFFSET))(this);
		}

		::INHBMHCJJCN* __cctor_b__28_0()
		{
			return ((::INHBMHCJJCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + INHBMHCJJCN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
