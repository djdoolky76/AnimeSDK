#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNEODFOHENL;
namespace System { class Object; }

#define JNEODFOHENL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAC5390)
#define JNEODFOHENL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAC53D0)
#define JNEODFOHENL___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1FAC53E0)

inline static constexpr unsigned int JNEODFOHENL___c_TypeDefinitionIndex = 27262;

	class JNEODFOHENL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56BC0);
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
