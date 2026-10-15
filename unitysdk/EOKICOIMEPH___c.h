#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOKICOIMEPH;
namespace System { class Object; }

#define EOKICOIMEPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D1000)
#define EOKICOIMEPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D1040)
#define EOKICOIMEPH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2D1050)

inline static constexpr unsigned int EOKICOIMEPH___c_TypeDefinitionIndex = 33301;

	class EOKICOIMEPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x473D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOKICOIMEPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKICOIMEPH___C_CTOR_OFFSET))(this);
		}

		::EOKICOIMEPH* __cctor_b__28_0()
		{
			return ((::EOKICOIMEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKICOIMEPH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
