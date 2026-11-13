#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFPHPFENACO;
namespace System { class Object; }

#define OFPHPFENACO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F210060)
#define OFPHPFENACO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2100A0)
#define OFPHPFENACO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F2100B0)

inline static constexpr unsigned int OFPHPFENACO___c_TypeDefinitionIndex = 26690;

	class OFPHPFENACO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x144B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFPHPFENACO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPHPFENACO___C_CTOR_OFFSET))(this);
		}

		::OFPHPFENACO* __cctor_b__23_0()
		{
			return ((::OFPHPFENACO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPHPFENACO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
