#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKNPAOHOGHI;
namespace System { class Object; }

#define NKNPAOHOGHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA207B0)
#define NKNPAOHOGHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA207E0)
#define NKNPAOHOGHI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FA207F0)

inline static constexpr unsigned int NKNPAOHOGHI___c_TypeDefinitionIndex = 34372;

	class NKNPAOHOGHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKNPAOHOGHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNPAOHOGHI___C_CTOR_OFFSET))(this);
		}

		::NKNPAOHOGHI* __cctor_b__43_0()
		{
			return ((::NKNPAOHOGHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNPAOHOGHI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
