#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEBJABOEDND;
namespace System { class Object; }

#define NEBJABOEDND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC2660)
#define NEBJABOEDND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC2690)
#define NEBJABOEDND___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAC26A0)

inline static constexpr unsigned int NEBJABOEDND___c_TypeDefinitionIndex = 27552;

	class NEBJABOEDND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x602F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEBJABOEDND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBJABOEDND___C_CTOR_OFFSET))(this);
		}

		::NEBJABOEDND* __cctor_b__28_0()
		{
			return ((::NEBJABOEDND*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBJABOEDND___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
