#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GACMFAOEKMP;
namespace System { class Object; }

#define GACMFAOEKMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E416050)
#define GACMFAOEKMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E416090)
#define GACMFAOEKMP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E4160A0)

inline static constexpr unsigned int GACMFAOEKMP___c_TypeDefinitionIndex = 30856;

	class GACMFAOEKMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GACMFAOEKMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACMFAOEKMP___C_CTOR_OFFSET))(this);
		}

		::GACMFAOEKMP* __cctor_b__38_0()
		{
			return ((::GACMFAOEKMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACMFAOEKMP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
