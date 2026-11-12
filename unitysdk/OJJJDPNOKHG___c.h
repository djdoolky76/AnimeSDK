#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJJJDPNOKHG;
namespace System { class Object; }

#define OJJJDPNOKHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F130000)
#define OJJJDPNOKHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F130040)
#define OJJJDPNOKHG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F130050)

inline static constexpr unsigned int OJJJDPNOKHG___c_TypeDefinitionIndex = 29642;

	class OJJJDPNOKHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B4D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJJJDPNOKHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJJJDPNOKHG___C_CTOR_OFFSET))(this);
		}

		::OJJJDPNOKHG* __cctor_b__33_0()
		{
			return ((::OJJJDPNOKHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJJJDPNOKHG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
