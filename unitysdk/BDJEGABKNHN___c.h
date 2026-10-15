#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDJEGABKNHN;
namespace System { class Object; }

#define BDJEGABKNHN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8EA630)
#define BDJEGABKNHN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EA670)
#define BDJEGABKNHN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8EA680)

inline static constexpr unsigned int BDJEGABKNHN___c_TypeDefinitionIndex = 28328;

	class BDJEGABKNHN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDJEGABKNHN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJEGABKNHN___C_CTOR_OFFSET))(this);
		}

		::BDJEGABKNHN* __cctor_b__28_0()
		{
			return ((::BDJEGABKNHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJEGABKNHN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
