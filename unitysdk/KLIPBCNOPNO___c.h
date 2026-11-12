#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLIPBCNOPNO;
namespace System { class Object; }

#define KLIPBCNOPNO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBA8CC0)
#define KLIPBCNOPNO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBA8CF0)
#define KLIPBCNOPNO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FBA8D00)

inline static constexpr unsigned int KLIPBCNOPNO___c_TypeDefinitionIndex = 31148;

	class KLIPBCNOPNO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLIPBCNOPNO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIPBCNOPNO___C_CTOR_OFFSET))(this);
		}

		::KLIPBCNOPNO* __cctor_b__33_0()
		{
			return ((::KLIPBCNOPNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIPBCNOPNO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
