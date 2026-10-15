#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJANDMMOIPP;
namespace System { class Object; }

#define KJANDMMOIPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E83B1D0)
#define KJANDMMOIPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E83B210)
#define KJANDMMOIPP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E83B220)

inline static constexpr unsigned int KJANDMMOIPP___c_TypeDefinitionIndex = 32191;

	class KJANDMMOIPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJANDMMOIPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJANDMMOIPP___C_CTOR_OFFSET))(this);
		}

		::KJANDMMOIPP* __cctor_b__28_0()
		{
			return ((::KJANDMMOIPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJANDMMOIPP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
