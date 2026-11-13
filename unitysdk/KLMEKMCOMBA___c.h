#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLMEKMCOMBA;
namespace System { class Object; }

#define KLMEKMCOMBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDC05F0)
#define KLMEKMCOMBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDC0630)
#define KLMEKMCOMBA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FDC0640)

inline static constexpr unsigned int KLMEKMCOMBA___c_TypeDefinitionIndex = 33004;

	class KLMEKMCOMBA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C7D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLMEKMCOMBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMEKMCOMBA___C_CTOR_OFFSET))(this);
		}

		::KLMEKMCOMBA* __cctor_b__23_0()
		{
			return ((::KLMEKMCOMBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMEKMCOMBA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
