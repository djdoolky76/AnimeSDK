#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKFCLDMEMGN;
namespace System { class Object; }

#define MKFCLDMEMGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDAA540)
#define MKFCLDMEMGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDAA580)
#define MKFCLDMEMGN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FDAA590)

inline static constexpr unsigned int MKFCLDMEMGN___c_TypeDefinitionIndex = 34266;

	class MKFCLDMEMGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BB50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKFCLDMEMGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCLDMEMGN___C_CTOR_OFFSET))(this);
		}

		::MKFCLDMEMGN* __cctor_b__23_0()
		{
			return ((::MKFCLDMEMGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCLDMEMGN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
