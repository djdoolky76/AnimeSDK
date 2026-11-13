#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJKFNOJHHHJ;
namespace System { class Object; }

#define PJKFNOJHHHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205638F0)
#define PJKFNOJHHHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20563930)
#define PJKFNOJHHHJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20563940)

inline static constexpr unsigned int PJKFNOJHHHJ___c_TypeDefinitionIndex = 32298;

	class PJKFNOJHHHJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJKFNOJHHHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKFNOJHHHJ___C_CTOR_OFFSET))(this);
		}

		::PJKFNOJHHHJ* __cctor_b__28_0()
		{
			return ((::PJKFNOJHHHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKFNOJHHHJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
