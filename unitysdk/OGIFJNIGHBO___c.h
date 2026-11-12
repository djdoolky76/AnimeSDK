#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGIFJNIGHBO;
namespace System { class Object; }

#define OGIFJNIGHBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0FCEF0)
#define OGIFJNIGHBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0FCF30)
#define OGIFJNIGHBO___C___CCTOR_B__128_0_OFFSET UNITYSDK_OFFSET(0x1F0FCF40)

inline static constexpr unsigned int OGIFJNIGHBO___c_TypeDefinitionIndex = 26914;

	class OGIFJNIGHBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGIFJNIGHBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIFJNIGHBO___C_CTOR_OFFSET))(this);
		}

		::OGIFJNIGHBO* __cctor_b__128_0()
		{
			return ((::OGIFJNIGHBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIFJNIGHBO___C___CCTOR_B__128_0_OFFSET))(this);
		}

	};
