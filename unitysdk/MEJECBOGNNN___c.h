#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEJECBOGNNN;
namespace System { class Object; }

#define MEJECBOGNNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA0D4D0)
#define MEJECBOGNNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0D510)
#define MEJECBOGNNN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA0D520)

inline static constexpr unsigned int MEJECBOGNNN___c_TypeDefinitionIndex = 27107;

	class MEJECBOGNNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AC00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEJECBOGNNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJECBOGNNN___C_CTOR_OFFSET))(this);
		}

		::MEJECBOGNNN* __cctor_b__23_0()
		{
			return ((::MEJECBOGNNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJECBOGNNN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
