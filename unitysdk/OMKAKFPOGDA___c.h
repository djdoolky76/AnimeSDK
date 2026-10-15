#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMKAKFPOGDA;
namespace System { class Object; }

#define OMKAKFPOGDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE8BC00)
#define OMKAKFPOGDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8BC40)
#define OMKAKFPOGDA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE8BC50)

inline static constexpr unsigned int OMKAKFPOGDA___c_TypeDefinitionIndex = 35029;

	class OMKAKFPOGDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22DF0);
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
