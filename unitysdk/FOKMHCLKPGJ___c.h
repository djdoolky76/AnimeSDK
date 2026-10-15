#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOKMHCLKPGJ;
namespace System { class Object; }

#define FOKMHCLKPGJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3FE8F0)
#define FOKMHCLKPGJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3FE920)
#define FOKMHCLKPGJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3FE930)

inline static constexpr unsigned int FOKMHCLKPGJ___c_TypeDefinitionIndex = 30768;

	class FOKMHCLKPGJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOKMHCLKPGJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKMHCLKPGJ___C_CTOR_OFFSET))(this);
		}

		::FOKMHCLKPGJ* __cctor_b__28_0()
		{
			return ((::FOKMHCLKPGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKMHCLKPGJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
