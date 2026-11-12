#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBLAIDFENOE;
namespace System { class Object; }

#define MBLAIDFENOE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD10890)
#define MBLAIDFENOE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD108D0)
#define MBLAIDFENOE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FD108E0)

inline static constexpr unsigned int MBLAIDFENOE___c_TypeDefinitionIndex = 35527;

	class MBLAIDFENOE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBLAIDFENOE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLAIDFENOE___C_CTOR_OFFSET))(this);
		}

		::MBLAIDFENOE* __cctor_b__33_0()
		{
			return ((::MBLAIDFENOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLAIDFENOE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
