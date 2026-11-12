#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGEFLGJIGIJ;
namespace System { class Object; }

#define LGEFLGJIGIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC6FEA0)
#define LGEFLGJIGIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6FED0)
#define LGEFLGJIGIJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FC6FEE0)

inline static constexpr unsigned int LGEFLGJIGIJ___c_TypeDefinitionIndex = 34308;

	class LGEFLGJIGIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x320B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGEFLGJIGIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ___C_CTOR_OFFSET))(this);
		}

		::LGEFLGJIGIJ* __cctor_b__33_0()
		{
			return ((::LGEFLGJIGIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEFLGJIGIJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
