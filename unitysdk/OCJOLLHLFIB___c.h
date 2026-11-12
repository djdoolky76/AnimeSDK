#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCJOLLHLFIB;
namespace System { class Object; }

#define OCJOLLHLFIB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0B57A0)
#define OCJOLLHLFIB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0B57D0)
#define OCJOLLHLFIB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F0B57E0)

inline static constexpr unsigned int OCJOLLHLFIB___c_TypeDefinitionIndex = 31695;

	class OCJOLLHLFIB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCB70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCJOLLHLFIB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJOLLHLFIB___C_CTOR_OFFSET))(this);
		}

		::OCJOLLHLFIB* __cctor_b__23_0()
		{
			return ((::OCJOLLHLFIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJOLLHLFIB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
