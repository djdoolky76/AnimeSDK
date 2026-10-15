#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIIJEIADMFP;
namespace System { class Object; }

#define PIIJEIADMFP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF3BEC0)
#define PIIJEIADMFP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF3BF00)
#define PIIJEIADMFP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF3BF10)

inline static constexpr unsigned int PIIJEIADMFP___c_TypeDefinitionIndex = 27158;

	class PIIJEIADMFP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIIJEIADMFP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIJEIADMFP___C_CTOR_OFFSET))(this);
		}

		::PIIJEIADMFP* __cctor_b__23_0()
		{
			return ((::PIIJEIADMFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIJEIADMFP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
