#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIGMJHLOHKG;
namespace System { class Object; }

#define JIGMJHLOHKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA5E080)
#define JIGMJHLOHKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA5E0B0)
#define JIGMJHLOHKG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA5E0C0)

inline static constexpr unsigned int JIGMJHLOHKG___c_TypeDefinitionIndex = 35557;

	class JIGMJHLOHKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIGMJHLOHKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGMJHLOHKG___C_CTOR_OFFSET))(this);
		}

		::JIGMJHLOHKG* __cctor_b__28_0()
		{
			return ((::JIGMJHLOHKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGMJHLOHKG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
