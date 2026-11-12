#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHHLBGLNBHE;
namespace System { class Object; }

#define PHHLBGLNBHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2091C0)
#define PHHLBGLNBHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F209200)
#define PHHLBGLNBHE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F209210)

inline static constexpr unsigned int PHHLBGLNBHE___c_TypeDefinitionIndex = 34567;

	class PHHLBGLNBHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35AB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHHLBGLNBHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHLBGLNBHE___C_CTOR_OFFSET))(this);
		}

		::PHHLBGLNBHE* __cctor_b__23_0()
		{
			return ((::PHHLBGLNBHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHLBGLNBHE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
