#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJPOMFIDLOA;
namespace System { class Object; }

#define CJPOMFIDLOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205934C0)
#define CJPOMFIDLOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20593500)
#define CJPOMFIDLOA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20593510)

inline static constexpr unsigned int CJPOMFIDLOA___c_TypeDefinitionIndex = 30260;

	class CJPOMFIDLOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x124F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJPOMFIDLOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPOMFIDLOA___C_CTOR_OFFSET))(this);
		}

		::CJPOMFIDLOA* __cctor_b__23_0()
		{
			return ((::CJPOMFIDLOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPOMFIDLOA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
