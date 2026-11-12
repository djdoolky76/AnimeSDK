#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFIDFIANHAN;
namespace System { class Object; }

#define HFIDFIANHAN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8661F0)
#define HFIDFIANHAN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F866220)
#define HFIDFIANHAN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F866230)

inline static constexpr unsigned int HFIDFIANHAN___c_TypeDefinitionIndex = 30474;

	class HFIDFIANHAN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFIDFIANHAN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIDFIANHAN___C_CTOR_OFFSET))(this);
		}

		::HFIDFIANHAN* __cctor_b__23_0()
		{
			return ((::HFIDFIANHAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIDFIANHAN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
