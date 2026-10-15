#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPOMECJONGO;
namespace System { class Object; }

#define BPOMECJONGO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E051210)
#define BPOMECJONGO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E051250)
#define BPOMECJONGO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E051260)

inline static constexpr unsigned int BPOMECJONGO___c_TypeDefinitionIndex = 27529;

	class BPOMECJONGO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPOMECJONGO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOMECJONGO___C_CTOR_OFFSET))(this);
		}

		::BPOMECJONGO* __cctor_b__48_0()
		{
			return ((::BPOMECJONGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOMECJONGO___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
