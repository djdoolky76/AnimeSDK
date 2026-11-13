#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJAMNAOLOLL;
namespace System { class Object; }

#define KJAMNAOLOLL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFD7C40)
#define KJAMNAOLOLL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFD7C70)
#define KJAMNAOLOLL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FFD7C80)

inline static constexpr unsigned int KJAMNAOLOLL___c_TypeDefinitionIndex = 31182;

	class KJAMNAOLOLL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x155F0);
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
