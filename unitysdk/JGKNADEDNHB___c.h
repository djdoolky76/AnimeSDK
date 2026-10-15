#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGKNADEDNHB;
namespace System { class Object; }

#define JGKNADEDNHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E70F0B0)
#define JGKNADEDNHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E70F0F0)
#define JGKNADEDNHB___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E70F100)

inline static constexpr unsigned int JGKNADEDNHB___c_TypeDefinitionIndex = 31144;

	class JGKNADEDNHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E8B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGKNADEDNHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKNADEDNHB___C_CTOR_OFFSET))(this);
		}

		::JGKNADEDNHB* __cctor_b__48_0()
		{
			return ((::JGKNADEDNHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKNADEDNHB___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
