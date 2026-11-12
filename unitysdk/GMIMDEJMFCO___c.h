#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMIMDEJMFCO;
namespace System { class Object; }

#define GMIMDEJMFCO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7E6BF0)
#define GMIMDEJMFCO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E6C20)
#define GMIMDEJMFCO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F7E6C30)

inline static constexpr unsigned int GMIMDEJMFCO___c_TypeDefinitionIndex = 34312;

	class GMIMDEJMFCO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMIMDEJMFCO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIMDEJMFCO___C_CTOR_OFFSET))(this);
		}

		::GMIMDEJMFCO* __cctor_b__28_0()
		{
			return ((::GMIMDEJMFCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIMDEJMFCO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
