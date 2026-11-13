#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGAMIKNEDGE;
namespace System { class Object; }

#define GGAMIKNEDGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2008AFE0)
#define GGAMIKNEDGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2008B020)
#define GGAMIKNEDGE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2008B030)

inline static constexpr unsigned int GGAMIKNEDGE___c_TypeDefinitionIndex = 30337;

	class GGAMIKNEDGE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCA80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGAMIKNEDGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAMIKNEDGE___C_CTOR_OFFSET))(this);
		}

		::GGAMIKNEDGE* __cctor_b__23_0()
		{
			return ((::GGAMIKNEDGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAMIKNEDGE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
