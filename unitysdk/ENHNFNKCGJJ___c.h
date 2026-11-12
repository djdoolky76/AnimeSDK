#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENHNFNKCGJJ;
namespace System { class Object; }

#define ENHNFNKCGJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5D3B70)
#define ENHNFNKCGJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5D3BA0)
#define ENHNFNKCGJJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F5D3BB0)

inline static constexpr unsigned int ENHNFNKCGJJ___c_TypeDefinitionIndex = 27541;

	class ENHNFNKCGJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENHNFNKCGJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHNFNKCGJJ___C_CTOR_OFFSET))(this);
		}

		::ENHNFNKCGJJ* __cctor_b__28_0()
		{
			return ((::ENHNFNKCGJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHNFNKCGJJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
