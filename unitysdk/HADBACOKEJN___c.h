#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HADBACOKEJN;
namespace System { class Object; }

#define HADBACOKEJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD0B280)
#define HADBACOKEJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD0B2C0)
#define HADBACOKEJN___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FD0B2D0)

inline static constexpr unsigned int HADBACOKEJN___c_TypeDefinitionIndex = 30611;

	class HADBACOKEJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HADBACOKEJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HADBACOKEJN___C_CTOR_OFFSET))(this);
		}

		::HADBACOKEJN* __cctor_b__43_0()
		{
			return ((::HADBACOKEJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HADBACOKEJN___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
