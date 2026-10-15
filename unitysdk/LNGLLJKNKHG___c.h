#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNGLLJKNKHG;
namespace System { class Object; }

#define LNGLLJKNKHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9870F0)
#define LNGLLJKNKHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E987130)
#define LNGLLJKNKHG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E987140)

inline static constexpr unsigned int LNGLLJKNKHG___c_TypeDefinitionIndex = 28757;

	class LNGLLJKNKHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x401D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNGLLJKNKHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGLLJKNKHG___C_CTOR_OFFSET))(this);
		}

		::LNGLLJKNKHG* __cctor_b__38_0()
		{
			return ((::LNGLLJKNKHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGLLJKNKHG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
