#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENHNFNKCGJJ;
namespace System { class Object; }

#define ENHNFNKCGJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C1740)
#define ENHNFNKCGJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C1770)
#define ENHNFNKCGJJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2C1780)

inline static constexpr unsigned int ENHNFNKCGJJ___c_TypeDefinitionIndex = 27010;

	class ENHNFNKCGJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44DD0);
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
