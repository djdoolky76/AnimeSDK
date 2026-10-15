#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBMFAHMBLAA;
namespace System { class Object; }

#define GBMFAHMBLAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4042B0)
#define GBMFAHMBLAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4042E0)
#define GBMFAHMBLAA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4042F0)

inline static constexpr unsigned int GBMFAHMBLAA___c_TypeDefinitionIndex = 34006;

	class GBMFAHMBLAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCF00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBMFAHMBLAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMFAHMBLAA___C_CTOR_OFFSET))(this);
		}

		::GBMFAHMBLAA* __cctor_b__23_0()
		{
			return ((::GBMFAHMBLAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMFAHMBLAA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
