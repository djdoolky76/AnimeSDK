#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEMJDLLBBGN;
namespace System { class Object; }

#define NEMJDLLBBGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE40690)
#define NEMJDLLBBGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE406D0)
#define NEMJDLLBBGN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FE406E0)

inline static constexpr unsigned int NEMJDLLBBGN___c_TypeDefinitionIndex = 34009;

	class NEMJDLLBBGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69510);
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
