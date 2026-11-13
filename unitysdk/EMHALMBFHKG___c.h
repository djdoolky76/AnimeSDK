#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMHALMBFHKG;
namespace System { class Object; }

#define EMHALMBFHKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206D8F80)
#define EMHALMBFHKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206D8FC0)
#define EMHALMBFHKG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x206D8FD0)

inline static constexpr unsigned int EMHALMBFHKG___c_TypeDefinitionIndex = 33256;

	class EMHALMBFHKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMHALMBFHKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHALMBFHKG___C_CTOR_OFFSET))(this);
		}

		::EMHALMBFHKG* __cctor_b__23_0()
		{
			return ((::EMHALMBFHKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHALMBFHKG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
