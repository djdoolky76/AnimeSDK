#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JINIOBBNJPF;
namespace System { class Object; }

#define JINIOBBNJPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF248F0)
#define JINIOBBNJPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF24930)
#define JINIOBBNJPF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FF24940)

inline static constexpr unsigned int JINIOBBNJPF___c_TypeDefinitionIndex = 33372;

	class JINIOBBNJPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60D90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JINIOBBNJPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINIOBBNJPF___C_CTOR_OFFSET))(this);
		}

		::JINIOBBNJPF* __cctor_b__33_0()
		{
			return ((::JINIOBBNJPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JINIOBBNJPF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
