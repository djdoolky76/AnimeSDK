#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLHIDBDFFKG;
namespace System { class Object; }

#define FLHIDBDFFKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3BC920)
#define FLHIDBDFFKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3BC960)
#define FLHIDBDFFKG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3BC970)

inline static constexpr unsigned int FLHIDBDFFKG___c_TypeDefinitionIndex = 29581;

	class FLHIDBDFFKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x643D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLHIDBDFFKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHIDBDFFKG___C_CTOR_OFFSET))(this);
		}

		::FLHIDBDFFKG* __cctor_b__23_0()
		{
			return ((::FLHIDBDFFKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHIDBDFFKG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
