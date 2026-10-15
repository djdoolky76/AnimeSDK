#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCHIJNKKOAM;
namespace System { class Object; }

#define MCHIJNKKOAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9CA880)
#define MCHIJNKKOAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9CA8C0)
#define MCHIJNKKOAM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9CA8D0)

inline static constexpr unsigned int MCHIJNKKOAM___c_TypeDefinitionIndex = 32951;

	class MCHIJNKKOAM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCHIJNKKOAM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHIJNKKOAM___C_CTOR_OFFSET))(this);
		}

		::MCHIJNKKOAM* __cctor_b__28_0()
		{
			return ((::MCHIJNKKOAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHIJNKKOAM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
