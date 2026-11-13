#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAGGFIOGHGE;
namespace System { class Object; }

#define DAGGFIOGHGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202A7480)
#define DAGGFIOGHGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202A74C0)
#define DAGGFIOGHGE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x202A74D0)

inline static constexpr unsigned int DAGGFIOGHGE___c_TypeDefinitionIndex = 32659;

	class DAGGFIOGHGE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BA40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAGGFIOGHGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGGFIOGHGE___C_CTOR_OFFSET))(this);
		}

		::DAGGFIOGHGE* __cctor_b__38_0()
		{
			return ((::DAGGFIOGHGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGGFIOGHGE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
