#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INBMHMPKACI;
namespace System { class Object; }

#define INBMHMPKACI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E692D10)
#define INBMHMPKACI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E692D40)
#define INBMHMPKACI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E692D50)

inline static constexpr unsigned int INBMHMPKACI___c_TypeDefinitionIndex = 30568;

	class INBMHMPKACI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x537E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INBMHMPKACI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INBMHMPKACI___C_CTOR_OFFSET))(this);
		}

		::INBMHMPKACI* __cctor_b__33_0()
		{
			return ((::INBMHMPKACI*(*)(::PVOID))((::PBYTE)hIl2Cpp + INBMHMPKACI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
