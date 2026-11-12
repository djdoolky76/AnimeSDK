#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIDCLKLDHLE;
namespace System { class Object; }

#define HIDCLKLDHLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F88A7E0)
#define HIDCLKLDHLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F88A820)
#define HIDCLKLDHLE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F88A830)

inline static constexpr unsigned int HIDCLKLDHLE___c_TypeDefinitionIndex = 30841;

	class HIDCLKLDHLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30890);
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
