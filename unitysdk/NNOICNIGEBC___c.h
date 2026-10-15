#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNOICNIGEBC;
namespace System { class Object; }

#define NNOICNIGEBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB84090)
#define NNOICNIGEBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB840C0)
#define NNOICNIGEBC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EB840D0)

inline static constexpr unsigned int NNOICNIGEBC___c_TypeDefinitionIndex = 34743;

	class NNOICNIGEBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xABB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNOICNIGEBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOICNIGEBC___C_CTOR_OFFSET))(this);
		}

		::NNOICNIGEBC* __cctor_b__18_0()
		{
			return ((::NNOICNIGEBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOICNIGEBC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
