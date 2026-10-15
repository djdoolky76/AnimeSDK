#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CINMCBDCBMJ;
namespace System { class Object; }

#define CINMCBDCBMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A9390)
#define CINMCBDCBMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A93D0)
#define CINMCBDCBMJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0A93E0)

inline static constexpr unsigned int CINMCBDCBMJ___c_TypeDefinitionIndex = 32729;

	class CINMCBDCBMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINMCBDCBMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINMCBDCBMJ___C_CTOR_OFFSET))(this);
		}

		::CINMCBDCBMJ* __cctor_b__23_0()
		{
			return ((::CINMCBDCBMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINMCBDCBMJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
