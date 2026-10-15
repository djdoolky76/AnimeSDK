#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNDOLAFNJED;
namespace System { class Object; }

#define KNDOLAFNJED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E873620)
#define KNDOLAFNJED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E873660)
#define KNDOLAFNJED___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E873670)

inline static constexpr unsigned int KNDOLAFNJED___c_TypeDefinitionIndex = 29349;

	class KNDOLAFNJED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FB70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNDOLAFNJED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDOLAFNJED___C_CTOR_OFFSET))(this);
		}

		::KNDOLAFNJED* __cctor_b__18_0()
		{
			return ((::KNDOLAFNJED*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDOLAFNJED___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
