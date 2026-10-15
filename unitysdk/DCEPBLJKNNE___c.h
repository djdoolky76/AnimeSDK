#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCEPBLJKNNE;
namespace System { class Object; }

#define DCEPBLJKNNE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E13CE50)
#define DCEPBLJKNNE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E13CE90)
#define DCEPBLJKNNE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E13CEA0)

inline static constexpr unsigned int DCEPBLJKNNE___c_TypeDefinitionIndex = 33314;

	class DCEPBLJKNNE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCEPBLJKNNE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEPBLJKNNE___C_CTOR_OFFSET))(this);
		}

		::DCEPBLJKNNE* __cctor_b__33_0()
		{
			return ((::DCEPBLJKNNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEPBLJKNNE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
