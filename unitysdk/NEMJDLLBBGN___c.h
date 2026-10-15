#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEMJDLLBBGN;
namespace System { class Object; }

#define NEMJDLLBBGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD1050)
#define NEMJDLLBBGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD1090)
#define NEMJDLLBBGN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAD10A0)

inline static constexpr unsigned int NEMJDLLBBGN___c_TypeDefinitionIndex = 33094;

	class NEMJDLLBBGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62D50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEMJDLLBBGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMJDLLBBGN___C_CTOR_OFFSET))(this);
		}

		::NEMJDLLBBGN* __cctor_b__28_0()
		{
			return ((::NEMJDLLBBGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMJDLLBBGN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
