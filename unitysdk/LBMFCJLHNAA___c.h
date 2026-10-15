#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBMFCJLHNAA;
namespace System { class Object; }

#define LBMFCJLHNAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B1C70)
#define LBMFCJLHNAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B1CB0)
#define LBMFCJLHNAA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8B1CC0)

inline static constexpr unsigned int LBMFCJLHNAA___c_TypeDefinitionIndex = 35134;

	class LBMFCJLHNAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBMFCJLHNAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMFCJLHNAA___C_CTOR_OFFSET))(this);
		}

		::LBMFCJLHNAA* __cctor_b__23_0()
		{
			return ((::LBMFCJLHNAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMFCJLHNAA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
