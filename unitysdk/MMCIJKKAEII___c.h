#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMCIJKKAEII;
namespace System { class Object; }

#define MMCIJKKAEII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA8BA40)
#define MMCIJKKAEII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8BA80)
#define MMCIJKKAEII___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA8BA90)

inline static constexpr unsigned int MMCIJKKAEII___c_TypeDefinitionIndex = 28515;

	class MMCIJKKAEII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMCIJKKAEII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCIJKKAEII___C_CTOR_OFFSET))(this);
		}

		::MMCIJKKAEII* __cctor_b__28_0()
		{
			return ((::MMCIJKKAEII*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCIJKKAEII___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
