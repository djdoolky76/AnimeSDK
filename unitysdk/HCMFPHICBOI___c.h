#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCMFPHICBOI;
namespace System { class Object; }

#define HCMFPHICBOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F83A8F0)
#define HCMFPHICBOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F83A930)
#define HCMFPHICBOI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F83A940)

inline static constexpr unsigned int HCMFPHICBOI___c_TypeDefinitionIndex = 34604;

	class HCMFPHICBOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCMFPHICBOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMFPHICBOI___C_CTOR_OFFSET))(this);
		}

		::HCMFPHICBOI* __cctor_b__33_0()
		{
			return ((::HCMFPHICBOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMFPHICBOI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
