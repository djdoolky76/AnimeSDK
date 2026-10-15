#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JACFBOEDEEB;
namespace System { class Object; }

#define JACFBOEDEEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6EC3F0)
#define JACFBOEDEEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6EC430)
#define JACFBOEDEEB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E6EC440)

inline static constexpr unsigned int JACFBOEDEEB___c_TypeDefinitionIndex = 26161;

	class JACFBOEDEEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BC30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JACFBOEDEEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBOEDEEB___C_CTOR_OFFSET))(this);
		}

		::JACFBOEDEEB* __cctor_b__33_0()
		{
			return ((::JACFBOEDEEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JACFBOEDEEB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
