#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIDCLKLDHLE;
namespace System { class Object; }

#define HIDCLKLDHLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E58FB00)
#define HIDCLKLDHLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E58FB40)
#define HIDCLKLDHLE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E58FB50)

inline static constexpr unsigned int HIDCLKLDHLE___c_TypeDefinitionIndex = 29943;

	class HIDCLKLDHLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BAB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIDCLKLDHLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDCLKLDHLE___C_CTOR_OFFSET))(this);
		}

		::HIDCLKLDHLE* __cctor_b__38_0()
		{
			return ((::HIDCLKLDHLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDCLKLDHLE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
