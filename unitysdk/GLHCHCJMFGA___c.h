#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLHCHCJMFGA;
namespace System { class Object; }

#define GLHCHCJMFGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA3D850)
#define GLHCHCJMFGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA3D880)
#define GLHCHCJMFGA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA3D890)

inline static constexpr unsigned int GLHCHCJMFGA___c_TypeDefinitionIndex = 30450;

	class GLHCHCJMFGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x162A0);
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
