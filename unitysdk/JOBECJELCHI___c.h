#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define JOBECJELCHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4D96A0)
#define JOBECJELCHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D96E0)
#define JOBECJELCHI___C__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B4D96F0)

inline static constexpr unsigned int JOBECJELCHI___c_TypeDefinitionIndex = 60027;

	class JOBECJELCHI___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28B90);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28B98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOBECJELCHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBECJELCHI___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBECJELCHI___C__ONTASKBEGIN_B__2_0_OFFSET))(this);
		}

	};
