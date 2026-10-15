#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHMHPNNMFCC;
namespace System { class Object; }

#define MHMHPNNMFCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA099A0)
#define MHMHPNNMFCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA099E0)
#define MHMHPNNMFCC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EA099F0)

inline static constexpr unsigned int MHMHPNNMFCC___c_TypeDefinitionIndex = 29800;

	class MHMHPNNMFCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x524D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHMHPNNMFCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMHPNNMFCC___C_CTOR_OFFSET))(this);
		}

		::MHMHPNNMFCC* __cctor_b__18_0()
		{
			return ((::MHMHPNNMFCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMHPNNMFCC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
