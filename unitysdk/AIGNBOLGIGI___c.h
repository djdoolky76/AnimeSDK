#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIGNBOLGIGI;
namespace System { class Object; }

#define AIGNBOLGIGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E24E870)
#define AIGNBOLGIGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E24E8B0)
#define AIGNBOLGIGI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E24E8C0)

inline static constexpr unsigned int AIGNBOLGIGI___c_TypeDefinitionIndex = 29753;

	class AIGNBOLGIGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIGNBOLGIGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGNBOLGIGI___C_CTOR_OFFSET))(this);
		}

		::AIGNBOLGIGI* __cctor_b__28_0()
		{
			return ((::AIGNBOLGIGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGNBOLGIGI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
