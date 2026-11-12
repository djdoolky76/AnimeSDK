#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMKAKFPOGDA;
namespace System { class Object; }

#define OMKAKFPOGDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F181160)
#define OMKAKFPOGDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1811A0)
#define OMKAKFPOGDA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F1811B0)

inline static constexpr unsigned int OMKAKFPOGDA___c_TypeDefinitionIndex = 35957;

	class OMKAKFPOGDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMKAKFPOGDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKAKFPOGDA___C_CTOR_OFFSET))(this);
		}

		::OMKAKFPOGDA* __cctor_b__28_0()
		{
			return ((::OMKAKFPOGDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKAKFPOGDA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
