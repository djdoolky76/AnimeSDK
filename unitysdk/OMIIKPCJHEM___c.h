#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMIIKPCJHEM;
namespace System { class Object; }

#define OMIIKPCJHEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB6040)
#define OMIIKPCJHEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB6080)
#define OMIIKPCJHEM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DEB6090)

inline static constexpr unsigned int OMIIKPCJHEM___c_TypeDefinitionIndex = 25316;

	class OMIIKPCJHEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B2C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMIIKPCJHEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIIKPCJHEM___C_CTOR_OFFSET))(this);
		}

		::OMIIKPCJHEM* __cctor_b__33_0()
		{
			return ((::OMIIKPCJHEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIIKPCJHEM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
