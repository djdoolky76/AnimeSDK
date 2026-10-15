#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGALPBAPICA;
namespace System { class Object; }

#define LGALPBAPICA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E948E10)
#define LGALPBAPICA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E948E40)
#define LGALPBAPICA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E948E50)

inline static constexpr unsigned int LGALPBAPICA___c_TypeDefinitionIndex = 30520;

	class LGALPBAPICA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGALPBAPICA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALPBAPICA___C_CTOR_OFFSET))(this);
		}

		::LGALPBAPICA* __cctor_b__33_0()
		{
			return ((::LGALPBAPICA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGALPBAPICA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
