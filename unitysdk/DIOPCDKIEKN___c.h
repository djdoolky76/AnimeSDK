#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIOPCDKIEKN;
namespace System { class Object; }

#define DIOPCDKIEKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F49FFB0)
#define DIOPCDKIEKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F49FFF0)
#define DIOPCDKIEKN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F4A0000)

inline static constexpr unsigned int DIOPCDKIEKN___c_TypeDefinitionIndex = 35448;

	class DIOPCDKIEKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIOPCDKIEKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOPCDKIEKN___C_CTOR_OFFSET))(this);
		}

		::DIOPCDKIEKN* __cctor_b__33_0()
		{
			return ((::DIOPCDKIEKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOPCDKIEKN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
