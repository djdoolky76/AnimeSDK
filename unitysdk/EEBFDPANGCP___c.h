#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEBFDPANGCP;
namespace System { class Object; }

#define EEBFDPANGCP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2389A0)
#define EEBFDPANGCP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2389E0)
#define EEBFDPANGCP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E2389F0)

inline static constexpr unsigned int EEBFDPANGCP___c_TypeDefinitionIndex = 26772;

	class EEBFDPANGCP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEBFDPANGCP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBFDPANGCP___C_CTOR_OFFSET))(this);
		}

		::EEBFDPANGCP* __cctor_b__38_0()
		{
			return ((::EEBFDPANGCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBFDPANGCP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
