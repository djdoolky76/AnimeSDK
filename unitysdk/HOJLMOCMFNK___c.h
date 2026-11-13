#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOJLMOCMFNK;
namespace System { class Object; }

#define HOJLMOCMFNK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2003F2C0)
#define HOJLMOCMFNK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2003F300)
#define HOJLMOCMFNK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2003F310)

inline static constexpr unsigned int HOJLMOCMFNK___c_TypeDefinitionIndex = 30645;

	class HOJLMOCMFNK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E0E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOJLMOCMFNK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJLMOCMFNK___C_CTOR_OFFSET))(this);
		}

		::HOJLMOCMFNK* __cctor_b__33_0()
		{
			return ((::HOJLMOCMFNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJLMOCMFNK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
