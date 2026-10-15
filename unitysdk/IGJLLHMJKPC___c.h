#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGJLLHMJKPC;
namespace System { class Object; }

#define IGJLLHMJKPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64E920)
#define IGJLLHMJKPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64E960)
#define IGJLLHMJKPC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E64E970)

inline static constexpr unsigned int IGJLLHMJKPC___c_TypeDefinitionIndex = 27749;

	class IGJLLHMJKPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B380);
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
