#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDDJBPIOCMC;
namespace System { class Object; }

#define HDDJBPIOCMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F841090)
#define HDDJBPIOCMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8410C0)
#define HDDJBPIOCMC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F8410D0)

inline static constexpr unsigned int HDDJBPIOCMC___c_TypeDefinitionIndex = 34202;

	class HDDJBPIOCMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDDJBPIOCMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDJBPIOCMC___C_CTOR_OFFSET))(this);
		}

		::HDDJBPIOCMC* __cctor_b__43_0()
		{
			return ((::HDDJBPIOCMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDJBPIOCMC___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
