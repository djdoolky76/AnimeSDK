#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKJHNGLHOBA;
namespace System { class Object; }

#define GKJHNGLHOBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B85D0)
#define GKJHNGLHOBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B8610)
#define GKJHNGLHOBA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4B8620)

inline static constexpr unsigned int GKJHNGLHOBA___c_TypeDefinitionIndex = 31289;

	class GKJHNGLHOBA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DEA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKJHNGLHOBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJHNGLHOBA___C_CTOR_OFFSET))(this);
		}

		::GKJHNGLHOBA* __cctor_b__33_0()
		{
			return ((::GKJHNGLHOBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJHNGLHOBA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
