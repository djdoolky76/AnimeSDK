#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNKCNKJOKPA;
namespace System { class Object; }

#define KNKCNKJOKPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205A31D0)
#define KNKCNKJOKPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205A3210)
#define KNKCNKJOKPA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x205A3220)

inline static constexpr unsigned int KNKCNKJOKPA___c_TypeDefinitionIndex = 27666;

	class KNKCNKJOKPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F9D0);
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
