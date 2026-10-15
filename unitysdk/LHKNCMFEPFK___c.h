#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHKNCMFEPFK;
namespace System { class Object; }

#define LHKNCMFEPFK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E938380)
#define LHKNCMFEPFK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9383B0)
#define LHKNCMFEPFK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9383C0)

inline static constexpr unsigned int LHKNCMFEPFK___c_TypeDefinitionIndex = 32865;

	class LHKNCMFEPFK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHKNCMFEPFK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKNCMFEPFK___C_CTOR_OFFSET))(this);
		}

		::LHKNCMFEPFK* __cctor_b__33_0()
		{
			return ((::LHKNCMFEPFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKNCMFEPFK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
