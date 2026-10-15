#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKCAJHKCJDE;
namespace System { class Object; }

#define OKCAJHKCJDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE63260)
#define OKCAJHKCJDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE632A0)
#define OKCAJHKCJDE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DE632B0)

inline static constexpr unsigned int OKCAJHKCJDE___c_TypeDefinitionIndex = 26620;

	class OKCAJHKCJDE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D6E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKCAJHKCJDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCAJHKCJDE___C_CTOR_OFFSET))(this);
		}

		::OKCAJHKCJDE* __cctor_b__33_0()
		{
			return ((::OKCAJHKCJDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCAJHKCJDE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
