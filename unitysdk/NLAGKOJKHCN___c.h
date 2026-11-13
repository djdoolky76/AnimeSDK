#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLAGKOJKHCN;
namespace System { class Object; }

#define NLAGKOJKHCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA240A0)
#define NLAGKOJKHCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA240E0)
#define NLAGKOJKHCN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA240F0)

inline static constexpr unsigned int NLAGKOJKHCN___c_TypeDefinitionIndex = 32752;

	class NLAGKOJKHCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLAGKOJKHCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGKOJKHCN___C_CTOR_OFFSET))(this);
		}

		::NLAGKOJKHCN* __cctor_b__28_0()
		{
			return ((::NLAGKOJKHCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGKOJKHCN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
