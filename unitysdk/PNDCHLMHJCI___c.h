#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNDCHLMHJCI;
namespace System { class Object; }

#define PNDCHLMHJCI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2658D0)
#define PNDCHLMHJCI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F265900)
#define PNDCHLMHJCI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F265910)

inline static constexpr unsigned int PNDCHLMHJCI___c_TypeDefinitionIndex = 33328;

	class PNDCHLMHJCI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNDCHLMHJCI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDCHLMHJCI___C_CTOR_OFFSET))(this);
		}

		::PNDCHLMHJCI* __cctor_b__28_0()
		{
			return ((::PNDCHLMHJCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDCHLMHJCI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
