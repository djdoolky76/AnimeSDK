#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENEHBCOCEGB;
namespace System { class Object; }

#define ENEHBCOCEGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2EB990)
#define ENEHBCOCEGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EB9D0)
#define ENEHBCOCEGB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2EB9E0)

inline static constexpr unsigned int ENEHBCOCEGB___c_TypeDefinitionIndex = 29020;

	class ENEHBCOCEGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x544E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENEHBCOCEGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEHBCOCEGB___C_CTOR_OFFSET))(this);
		}

		::ENEHBCOCEGB* __cctor_b__33_0()
		{
			return ((::ENEHBCOCEGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEHBCOCEGB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
