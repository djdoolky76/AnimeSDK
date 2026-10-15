#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNFDDFJAEEC;
namespace System { class Object; }

#define GNFDDFJAEEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4DD2D0)
#define GNFDDFJAEEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4DD310)
#define GNFDDFJAEEC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E4DD320)

inline static constexpr unsigned int GNFDDFJAEEC___c_TypeDefinitionIndex = 28484;

	class GNFDDFJAEEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNFDDFJAEEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFDDFJAEEC___C_CTOR_OFFSET))(this);
		}

		::GNFDDFJAEEC* __cctor_b__38_0()
		{
			return ((::GNFDDFJAEEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFDDFJAEEC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
