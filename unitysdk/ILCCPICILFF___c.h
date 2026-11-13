#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILCCPICILFF;
namespace System { class Object; }

#define ILCCPICILFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206AE7D0)
#define ILCCPICILFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206AE810)
#define ILCCPICILFF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x206AE820)

inline static constexpr unsigned int ILCCPICILFF___c_TypeDefinitionIndex = 35008;

	class ILCCPICILFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BC90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILCCPICILFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCCPICILFF___C_CTOR_OFFSET))(this);
		}

		::ILCCPICILFF* __cctor_b__33_0()
		{
			return ((::ILCCPICILFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCCPICILFF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
