#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POFNNGOCEOK;
namespace System { class Object; }

#define POFNNGOCEOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F27BF00)
#define POFNNGOCEOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F27BF30)
#define POFNNGOCEOK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F27BF40)

inline static constexpr unsigned int POFNNGOCEOK___c_TypeDefinitionIndex = 28413;

	class POFNNGOCEOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POFNNGOCEOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFNNGOCEOK___C_CTOR_OFFSET))(this);
		}

		::POFNNGOCEOK* __cctor_b__33_0()
		{
			return ((::POFNNGOCEOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFNNGOCEOK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
