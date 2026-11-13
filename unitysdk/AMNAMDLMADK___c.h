#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMNAMDLMADK;
namespace System { class Object; }

#define AMNAMDLMADK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201967C0)
#define AMNAMDLMADK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20196800)
#define AMNAMDLMADK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20196810)

inline static constexpr unsigned int AMNAMDLMADK___c_TypeDefinitionIndex = 29759;

	class AMNAMDLMADK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AF10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMNAMDLMADK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNAMDLMADK___C_CTOR_OFFSET))(this);
		}

		::AMNAMDLMADK* __cctor_b__28_0()
		{
			return ((::AMNAMDLMADK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNAMDLMADK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
