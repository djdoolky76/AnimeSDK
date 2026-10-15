#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOOLKFODKIK;
namespace System { class Object; }

#define MOOLKFODKIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA86560)
#define MOOLKFODKIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA865A0)
#define MOOLKFODKIK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EA865B0)

inline static constexpr unsigned int MOOLKFODKIK___c_TypeDefinitionIndex = 31837;

	class MOOLKFODKIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOOLKFODKIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOLKFODKIK___C_CTOR_OFFSET))(this);
		}

		::MOOLKFODKIK* __cctor_b__18_0()
		{
			return ((::MOOLKFODKIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOLKFODKIK___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
