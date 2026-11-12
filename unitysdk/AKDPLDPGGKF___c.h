#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKDPLDPGGKF;
namespace System { class Object; }

#define AKDPLDPGGKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F686A60)
#define AKDPLDPGGKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F686AA0)
#define AKDPLDPGGKF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F686AB0)

inline static constexpr unsigned int AKDPLDPGGKF___c_TypeDefinitionIndex = 30229;

	class AKDPLDPGGKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DB90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKDPLDPGGKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPLDPGGKF___C_CTOR_OFFSET))(this);
		}

		::AKDPLDPGGKF* __cctor_b__38_0()
		{
			return ((::AKDPLDPGGKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPLDPGGKF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
