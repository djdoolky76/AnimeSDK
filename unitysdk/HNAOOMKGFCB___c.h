#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNAOOMKGFCB;
namespace System { class Object; }

#define HNAOOMKGFCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D8470)
#define HNAOOMKGFCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D84B0)
#define HNAOOMKGFCB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E5D84C0)

inline static constexpr unsigned int HNAOOMKGFCB___c_TypeDefinitionIndex = 27550;

	class HNAOOMKGFCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B2A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNAOOMKGFCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAOOMKGFCB___C_CTOR_OFFSET))(this);
		}

		::HNAOOMKGFCB* __cctor_b__33_0()
		{
			return ((::HNAOOMKGFCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAOOMKGFCB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
