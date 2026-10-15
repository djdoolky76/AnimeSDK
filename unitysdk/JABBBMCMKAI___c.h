#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JABBBMCMKAI;
namespace System { class Object; }

#define JABBBMCMKAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6EB6D0)
#define JABBBMCMKAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6EB710)
#define JABBBMCMKAI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6EB720)

inline static constexpr unsigned int JABBBMCMKAI___c_TypeDefinitionIndex = 30349;

	class JABBBMCMKAI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BB80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JABBBMCMKAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JABBBMCMKAI___C_CTOR_OFFSET))(this);
		}

		::JABBBMCMKAI* __cctor_b__28_0()
		{
			return ((::JABBBMCMKAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JABBBMCMKAI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
