#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABIEGBANPEE;
namespace System { class Object; }

#define ABIEGBANPEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD9F860)
#define ABIEGBANPEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD9F890)
#define ABIEGBANPEE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DD9F8A0)

inline static constexpr unsigned int ABIEGBANPEE___c_TypeDefinitionIndex = 25482;

	class ABIEGBANPEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABIEGBANPEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABIEGBANPEE___C_CTOR_OFFSET))(this);
		}

		::ABIEGBANPEE* __cctor_b__33_0()
		{
			return ((::ABIEGBANPEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABIEGBANPEE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
