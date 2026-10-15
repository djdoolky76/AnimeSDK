#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFNIHDLFMCJ;
namespace System { class Object; }

#define HFNIHDLFMCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E543380)
#define HFNIHDLFMCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5433C0)
#define HFNIHDLFMCJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5433D0)

inline static constexpr unsigned int HFNIHDLFMCJ___c_TypeDefinitionIndex = 29689;

	class HFNIHDLFMCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFNIHDLFMCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNIHDLFMCJ___C_CTOR_OFFSET))(this);
		}

		::HFNIHDLFMCJ* __cctor_b__28_0()
		{
			return ((::HFNIHDLFMCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNIHDLFMCJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
