#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMFGIAEEAFC;
namespace System { class Object; }

#define GMFGIAEEAFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A3F40)
#define GMFGIAEEAFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A3F70)
#define GMFGIAEEAFC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E4A3F80)

inline static constexpr unsigned int GMFGIAEEAFC___c_TypeDefinitionIndex = 32697;

	class GMFGIAEEAFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EA50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMFGIAEEAFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFGIAEEAFC___C_CTOR_OFFSET))(this);
		}

		::GMFGIAEEAFC* __cctor_b__18_0()
		{
			return ((::GMFGIAEEAFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFGIAEEAFC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
