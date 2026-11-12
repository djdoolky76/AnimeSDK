#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHBOOCGAKCM;
namespace System { class Object; }

#define JHBOOCGAKCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA528F0)
#define JHBOOCGAKCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA52930)
#define JHBOOCGAKCM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA52940)

inline static constexpr unsigned int JHBOOCGAKCM___c_TypeDefinitionIndex = 30742;

	class JHBOOCGAKCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x493D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHBOOCGAKCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBOOCGAKCM___C_CTOR_OFFSET))(this);
		}

		::JHBOOCGAKCM* __cctor_b__28_0()
		{
			return ((::JHBOOCGAKCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBOOCGAKCM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
