#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHMOAPECAPB;
namespace System { class Object; }

#define GHMOAPECAPB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7801A0)
#define GHMOAPECAPB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7801E0)
#define GHMOAPECAPB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F7801F0)

inline static constexpr unsigned int GHMOAPECAPB___c_TypeDefinitionIndex = 32552;

	class GHMOAPECAPB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHMOAPECAPB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMOAPECAPB___C_CTOR_OFFSET))(this);
		}

		::GHMOAPECAPB* __cctor_b__38_0()
		{
			return ((::GHMOAPECAPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMOAPECAPB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
