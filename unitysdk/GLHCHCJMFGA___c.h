#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLHCHCJMFGA;
namespace System { class Object; }

#define GLHCHCJMFGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7B29B0)
#define GLHCHCJMFGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7B29E0)
#define GLHCHCJMFGA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F7B29F0)

inline static constexpr unsigned int GLHCHCJMFGA___c_TypeDefinitionIndex = 30450;

	class GLHCHCJMFGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLHCHCJMFGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHCHCJMFGA___C_CTOR_OFFSET))(this);
		}

		::GLHCHCJMFGA* __cctor_b__33_0()
		{
			return ((::GLHCHCJMFGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHCHCJMFGA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
