#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGLIOOODBPN;
namespace System { class Object; }

#define KGLIOOODBPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E839EA0)
#define KGLIOOODBPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E839EE0)
#define KGLIOOODBPN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E839EF0)

inline static constexpr unsigned int KGLIOOODBPN___c_TypeDefinitionIndex = 33165;

	class KGLIOOODBPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x161D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGLIOOODBPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLIOOODBPN___C_CTOR_OFFSET))(this);
		}

		::KGLIOOODBPN* __cctor_b__33_0()
		{
			return ((::KGLIOOODBPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLIOOODBPN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
