#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNKCNKJOKPA;
namespace System { class Object; }

#define KNKCNKJOKPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E877FF0)
#define KNKCNKJOKPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E878030)
#define KNKCNKJOKPA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E878040)

inline static constexpr unsigned int KNKCNKJOKPA___c_TypeDefinitionIndex = 27135;

	class KNKCNKJOKPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x201D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNKCNKJOKPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKCNKJOKPA___C_CTOR_OFFSET))(this);
		}

		::KNKCNKJOKPA* __cctor_b__23_0()
		{
			return ((::KNKCNKJOKPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKCNKJOKPA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
