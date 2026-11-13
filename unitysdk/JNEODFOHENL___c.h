#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNEODFOHENL;
namespace System { class Object; }

#define JNEODFOHENL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFFE170)
#define JNEODFOHENL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFFE1B0)
#define JNEODFOHENL___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1FFFE1C0)

inline static constexpr unsigned int JNEODFOHENL___c_TypeDefinitionIndex = 27262;

	class JNEODFOHENL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x67090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNEODFOHENL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEODFOHENL___C_CTOR_OFFSET))(this);
		}

		::JNEODFOHENL* __cctor_b__48_0()
		{
			return ((::JNEODFOHENL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEODFOHENL___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
