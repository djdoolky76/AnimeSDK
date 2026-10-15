#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFJLCKGPGGN;
namespace System { class Object; }

#define GFJLCKGPGGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E443500)
#define GFJLCKGPGGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E443540)
#define GFJLCKGPGGN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E443550)

inline static constexpr unsigned int GFJLCKGPGGN___c_TypeDefinitionIndex = 34307;

	class GFJLCKGPGGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFJLCKGPGGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJLCKGPGGN___C_CTOR_OFFSET))(this);
		}

		::GFJLCKGPGGN* __cctor_b__33_0()
		{
			return ((::GFJLCKGPGGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJLCKGPGGN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
