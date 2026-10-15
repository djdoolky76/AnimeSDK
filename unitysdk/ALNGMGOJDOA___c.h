#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALNGMGOJDOA;
namespace System { class Object; }

#define ALNGMGOJDOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5143A0)
#define ALNGMGOJDOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5143D0)
#define ALNGMGOJDOA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E5143E0)

inline static constexpr unsigned int ALNGMGOJDOA___c_TypeDefinitionIndex = 30601;

	class ALNGMGOJDOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALNGMGOJDOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNGMGOJDOA___C_CTOR_OFFSET))(this);
		}

		::ALNGMGOJDOA* __cctor_b__38_0()
		{
			return ((::ALNGMGOJDOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNGMGOJDOA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
