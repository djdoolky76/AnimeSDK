#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFOJKMHIACH;
namespace System { class Object; }

#define KFOJKMHIACH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E82F8D0)
#define KFOJKMHIACH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E82F900)
#define KFOJKMHIACH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E82F910)

inline static constexpr unsigned int KFOJKMHIACH___c_TypeDefinitionIndex = 33823;

	class KFOJKMHIACH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14EB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFOJKMHIACH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOJKMHIACH___C_CTOR_OFFSET))(this);
		}

		::KFOJKMHIACH* __cctor_b__28_0()
		{
			return ((::KFOJKMHIACH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOJKMHIACH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
