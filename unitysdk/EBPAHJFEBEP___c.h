#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBPAHJFEBEP;
namespace System { class Object; }

#define EBPAHJFEBEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E21A8A0)
#define EBPAHJFEBEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E21A8D0)
#define EBPAHJFEBEP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E21A8E0)

inline static constexpr unsigned int EBPAHJFEBEP___c_TypeDefinitionIndex = 26782;

	class EBPAHJFEBEP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x423B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBPAHJFEBEP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAHJFEBEP___C_CTOR_OFFSET))(this);
		}

		::EBPAHJFEBEP* __cctor_b__28_0()
		{
			return ((::EBPAHJFEBEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAHJFEBEP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
