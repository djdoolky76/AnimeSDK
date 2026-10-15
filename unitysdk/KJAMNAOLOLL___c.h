#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJAMNAOLOLL;
namespace System { class Object; }

#define KJAMNAOLOLL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E83A0E0)
#define KJAMNAOLOLL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E83A110)
#define KJAMNAOLOLL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E83A120)

inline static constexpr unsigned int KJAMNAOLOLL___c_TypeDefinitionIndex = 30280;

	class KJAMNAOLOLL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19C00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJAMNAOLOLL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNAOLOLL___C_CTOR_OFFSET))(this);
		}

		::KJAMNAOLOLL* __cctor_b__28_0()
		{
			return ((::KJAMNAOLOLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNAOLOLL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
