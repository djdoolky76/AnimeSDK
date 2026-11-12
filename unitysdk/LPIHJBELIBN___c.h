#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPIHJBELIBN;
namespace System { class Object; }

#define LPIHJBELIBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCF4DC0)
#define LPIHJBELIBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCF4DF0)
#define LPIHJBELIBN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FCF4E00)

inline static constexpr unsigned int LPIHJBELIBN___c_TypeDefinitionIndex = 27524;

	class LPIHJBELIBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x495A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPIHJBELIBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIHJBELIBN___C_CTOR_OFFSET))(this);
		}

		::LPIHJBELIBN* __cctor_b__33_0()
		{
			return ((::LPIHJBELIBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIHJBELIBN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
