#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMEPOENPEIF;
namespace System { class Object; }

#define DMEPOENPEIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4C7A40)
#define DMEPOENPEIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4C7A80)
#define DMEPOENPEIF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F4C7A90)

inline static constexpr unsigned int DMEPOENPEIF___c_TypeDefinitionIndex = 30897;

	class DMEPOENPEIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39E70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMEPOENPEIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEPOENPEIF___C_CTOR_OFFSET))(this);
		}

		::DMEPOENPEIF* __cctor_b__23_0()
		{
			return ((::DMEPOENPEIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEPOENPEIF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
