#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HANMCLKOCBO;
namespace System { class Object; }

#define HANMCLKOCBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4DD350)
#define HANMCLKOCBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4DD390)
#define HANMCLKOCBO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4DD3A0)

inline static constexpr unsigned int HANMCLKOCBO___c_TypeDefinitionIndex = 31478;

	class HANMCLKOCBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x251F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HANMCLKOCBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANMCLKOCBO___C_CTOR_OFFSET))(this);
		}

		::HANMCLKOCBO* __cctor_b__33_0()
		{
			return ((::HANMCLKOCBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANMCLKOCBO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
