#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMHFBLDNPGB;
namespace System { class Object; }

#define CMHFBLDNPGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205E8D90)
#define CMHFBLDNPGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205E8DD0)
#define CMHFBLDNPGB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x205E8DE0)

inline static constexpr unsigned int CMHFBLDNPGB___c_TypeDefinitionIndex = 28350;

	class CMHFBLDNPGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMHFBLDNPGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHFBLDNPGB___C_CTOR_OFFSET))(this);
		}

		::CMHFBLDNPGB* __cctor_b__33_0()
		{
			return ((::CMHFBLDNPGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHFBLDNPGB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
