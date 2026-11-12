#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBLJIEELMKN;
namespace System { class Object; }

#define MBLJIEELMKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD112E0)
#define MBLJIEELMKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD11320)
#define MBLJIEELMKN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD11330)

inline static constexpr unsigned int MBLJIEELMKN___c_TypeDefinitionIndex = 27735;

	class MBLJIEELMKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DC10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBLJIEELMKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLJIEELMKN___C_CTOR_OFFSET))(this);
		}

		::MBLJIEELMKN* __cctor_b__23_0()
		{
			return ((::MBLJIEELMKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLJIEELMKN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
