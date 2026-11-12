#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBIPBHFLPHL;
namespace System { class Object; }

#define EBIPBHFLPHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F540090)
#define EBIPBHFLPHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5400C0)
#define EBIPBHFLPHL___C___CCTOR_B__463_0_OFFSET UNITYSDK_OFFSET(0x1F5400D0)

inline static constexpr unsigned int EBIPBHFLPHL___c_TypeDefinitionIndex = 32986;

	class EBIPBHFLPHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BC90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBIPBHFLPHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIPBHFLPHL___C_CTOR_OFFSET))(this);
		}

		::EBIPBHFLPHL* __cctor_b__463_0()
		{
			return ((::EBIPBHFLPHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIPBHFLPHL___C___CCTOR_B__463_0_OFFSET))(this);
		}

	};
