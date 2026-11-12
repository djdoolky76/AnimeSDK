#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJGHHOHJGEO;
namespace System { class Object; }

#define NJGHHOHJGEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0270B0)
#define NJGHHOHJGEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0270F0)
#define NJGHHOHJGEO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F027100)

inline static constexpr unsigned int NJGHHOHJGEO___c_TypeDefinitionIndex = 33343;

	class NJGHHOHJGEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6D1E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJGHHOHJGEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHHOHJGEO___C_CTOR_OFFSET))(this);
		}

		::NJGHHOHJGEO* __cctor_b__28_0()
		{
			return ((::NJGHHOHJGEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHHOHJGEO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
