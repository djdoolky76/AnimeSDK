#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBMFAHMBLAA;
namespace System { class Object; }

#define GBMFAHMBLAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F71F810)
#define GBMFAHMBLAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F71F840)
#define GBMFAHMBLAA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F71F850)

inline static constexpr unsigned int GBMFAHMBLAA___c_TypeDefinitionIndex = 34921;

	class GBMFAHMBLAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x559F0);
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
