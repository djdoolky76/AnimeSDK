#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJGFHIIBNGP;
namespace System { class Object; }

#define AJGFHIIBNGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E394260)
#define AJGFHIIBNGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3942A0)
#define AJGFHIIBNGP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E3942B0)

inline static constexpr unsigned int AJGFHIIBNGP___c_TypeDefinitionIndex = 34908;

	class AJGFHIIBNGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DA50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJGFHIIBNGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP___C_CTOR_OFFSET))(this);
		}

		::AJGFHIIBNGP* __cctor_b__33_0()
		{
			return ((::AJGFHIIBNGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
