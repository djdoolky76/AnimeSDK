#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHMLENGPLLD;
namespace System { class Object; }

#define MHMLENGPLLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA0A400)
#define MHMLENGPLLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0A430)
#define MHMLENGPLLD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA0A440)

inline static constexpr unsigned int MHMLENGPLLD___c_TypeDefinitionIndex = 28247;

	class MHMLENGPLLD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHMLENGPLLD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMLENGPLLD___C_CTOR_OFFSET))(this);
		}

		::MHMLENGPLLD* __cctor_b__28_0()
		{
			return ((::MHMLENGPLLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMLENGPLLD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
