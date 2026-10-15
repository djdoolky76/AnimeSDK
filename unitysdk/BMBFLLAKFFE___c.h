#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMBFLLAKFFE;
namespace System { class Object; }

#define BMBFLLAKFFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF2640)
#define BMBFLLAKFFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF2670)
#define BMBFLLAKFFE___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1DFF2680)

inline static constexpr unsigned int BMBFLLAKFFE___c_TypeDefinitionIndex = 26885;

	class BMBFLLAKFFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMBFLLAKFFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBFLLAKFFE___C_CTOR_OFFSET))(this);
		}

		::BMBFLLAKFFE* __cctor_b__63_0()
		{
			return ((::BMBFLLAKFFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBFLLAKFFE___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
