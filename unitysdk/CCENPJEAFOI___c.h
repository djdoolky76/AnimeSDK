#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCENPJEAFOI;
namespace System { class Object; }

#define CCENPJEAFOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E046650)
#define CCENPJEAFOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E046690)
#define CCENPJEAFOI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0466A0)

inline static constexpr unsigned int CCENPJEAFOI___c_TypeDefinitionIndex = 29888;

	class CCENPJEAFOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCB60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCENPJEAFOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCENPJEAFOI___C_CTOR_OFFSET))(this);
		}

		::CCENPJEAFOI* __cctor_b__23_0()
		{
			return ((::CCENPJEAFOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCENPJEAFOI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
