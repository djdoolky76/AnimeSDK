#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGJLLHMJKPC;
namespace System { class Object; }

#define IGJLLHMJKPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6212B0)
#define IGJLLHMJKPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6212F0)
#define IGJLLHMJKPC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E621300)

inline static constexpr unsigned int IGJLLHMJKPC___c_TypeDefinitionIndex = 27749;

	class IGJLLHMJKPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGJLLHMJKPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJLLHMJKPC___C_CTOR_OFFSET))(this);
		}

		::IGJLLHMJKPC* __cctor_b__28_0()
		{
			return ((::IGJLLHMJKPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJLLHMJKPC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
