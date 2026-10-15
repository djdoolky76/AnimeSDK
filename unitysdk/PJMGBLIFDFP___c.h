#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJMGBLIFDFP;
namespace System { class Object; }

#define PJMGBLIFDFP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF53E00)
#define PJMGBLIFDFP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF53E40)
#define PJMGBLIFDFP___C___CCTOR_B__44_0_OFFSET UNITYSDK_OFFSET(0x1DF53E50)

inline static constexpr unsigned int PJMGBLIFDFP___c_TypeDefinitionIndex = 25797;

	class PJMGBLIFDFP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJMGBLIFDFP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMGBLIFDFP___C_CTOR_OFFSET))(this);
		}

		::PJMGBLIFDFP* __cctor_b__44_0()
		{
			return ((::PJMGBLIFDFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMGBLIFDFP___C___CCTOR_B__44_0_OFFSET))(this);
		}

	};
