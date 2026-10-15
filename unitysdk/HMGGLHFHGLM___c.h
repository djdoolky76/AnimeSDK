#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMGGLHFHGLM;
namespace System { class Object; }

#define HMGGLHFHGLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A09E0)
#define HMGGLHFHGLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A0A20)
#define HMGGLHFHGLM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5A0A30)

inline static constexpr unsigned int HMGGLHFHGLM___c_TypeDefinitionIndex = 33683;

	class HMGGLHFHGLM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMGGLHFHGLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGGLHFHGLM___C_CTOR_OFFSET))(this);
		}

		::HMGGLHFHGLM* __cctor_b__28_0()
		{
			return ((::HMGGLHFHGLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGGLHFHGLM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
