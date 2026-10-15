#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDGKFJFICDN;
namespace System { class Object; }

#define FDGKFJFICDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E358D90)
#define FDGKFJFICDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E358DD0)
#define FDGKFJFICDN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E358DE0)

inline static constexpr unsigned int FDGKFJFICDN___c_TypeDefinitionIndex = 25496;

	class FDGKFJFICDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDGKFJFICDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGKFJFICDN___C_CTOR_OFFSET))(this);
		}

		::FDGKFJFICDN* __cctor_b__28_0()
		{
			return ((::FDGKFJFICDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGKFJFICDN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
