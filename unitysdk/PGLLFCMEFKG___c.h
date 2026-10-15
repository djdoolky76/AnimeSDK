#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGLLFCMEFKG;
namespace System { class Object; }

#define PGLLFCMEFKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF34A70)
#define PGLLFCMEFKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF34AB0)
#define PGLLFCMEFKG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF34AC0)

inline static constexpr unsigned int PGLLFCMEFKG___c_TypeDefinitionIndex = 33921;

	class PGLLFCMEFKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E6A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGLLFCMEFKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLFCMEFKG___C_CTOR_OFFSET))(this);
		}

		::PGLLFCMEFKG* __cctor_b__33_0()
		{
			return ((::PGLLFCMEFKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLFCMEFKG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
