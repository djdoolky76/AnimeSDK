#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGBAFBEMICB;
namespace System { class Object; }

#define KGBAFBEMICB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E807CA0)
#define KGBAFBEMICB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E807CE0)
#define KGBAFBEMICB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E807CF0)

inline static constexpr unsigned int KGBAFBEMICB___c_TypeDefinitionIndex = 28939;

	class KGBAFBEMICB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGBAFBEMICB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBAFBEMICB___C_CTOR_OFFSET))(this);
		}

		::KGBAFBEMICB* __cctor_b__28_0()
		{
			return ((::KGBAFBEMICB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBAFBEMICB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
