#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMKECAPDMAC;
namespace System { class Object; }

#define LMKECAPDMAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E97B690)
#define LMKECAPDMAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E97B6D0)
#define LMKECAPDMAC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E97B6E0)

inline static constexpr unsigned int LMKECAPDMAC___c_TypeDefinitionIndex = 34717;

	class LMKECAPDMAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMKECAPDMAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKECAPDMAC___C_CTOR_OFFSET))(this);
		}

		::LMKECAPDMAC* __cctor_b__33_0()
		{
			return ((::LMKECAPDMAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKECAPDMAC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
