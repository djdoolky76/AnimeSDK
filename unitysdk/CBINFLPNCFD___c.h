#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBINFLPNCFD;
namespace System { class Object; }

#define CBINFLPNCFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E03EE80)
#define CBINFLPNCFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E03EEC0)
#define CBINFLPNCFD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E03EED0)

inline static constexpr unsigned int CBINFLPNCFD___c_TypeDefinitionIndex = 25137;

	class CBINFLPNCFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBINFLPNCFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBINFLPNCFD___C_CTOR_OFFSET))(this);
		}

		::CBINFLPNCFD* __cctor_b__33_0()
		{
			return ((::CBINFLPNCFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBINFLPNCFD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
