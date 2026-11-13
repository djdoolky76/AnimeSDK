#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIEEKOEECHB;
namespace System { class Object; }

#define CIEEKOEECHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F844740)
#define CIEEKOEECHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F844770)
#define CIEEKOEECHB___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1F844780)

inline static constexpr unsigned int CIEEKOEECHB___c_TypeDefinitionIndex = 27223;

	class CIEEKOEECHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFE60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIEEKOEECHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEEKOEECHB___C_CTOR_OFFSET))(this);
		}

		::CIEEKOEECHB* __cctor_b__68_0()
		{
			return ((::CIEEKOEECHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEEKOEECHB___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
