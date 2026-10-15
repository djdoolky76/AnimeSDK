#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEHOGIENDKC;
namespace System { class Object; }

#define KEHOGIENDKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7DD4B0)
#define KEHOGIENDKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DD4F0)
#define KEHOGIENDKC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E7DD500)

inline static constexpr unsigned int KEHOGIENDKC___c_TypeDefinitionIndex = 32214;

	class KEHOGIENDKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEHOGIENDKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHOGIENDKC___C_CTOR_OFFSET))(this);
		}

		::KEHOGIENDKC* __cctor_b__33_0()
		{
			return ((::KEHOGIENDKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHOGIENDKC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
