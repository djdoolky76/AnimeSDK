#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKINJCDPGIF;
namespace System { class Object; }

#define AKINJCDPGIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3CD7E0)
#define AKINJCDPGIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3CD820)
#define AKINJCDPGIF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3CD830)

inline static constexpr unsigned int AKINJCDPGIF___c_TypeDefinitionIndex = 33463;

	class AKINJCDPGIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKINJCDPGIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINJCDPGIF___C_CTOR_OFFSET))(this);
		}

		::AKINJCDPGIF* __cctor_b__28_0()
		{
			return ((::AKINJCDPGIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINJCDPGIF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
