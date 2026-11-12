#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCBHOIJLBFL;
namespace System { class Object; }

#define GCBHOIJLBFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F727E70)
#define GCBHOIJLBFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F727EB0)
#define GCBHOIJLBFL___C___CCTOR_B__61_0_OFFSET UNITYSDK_OFFSET(0x1F727EC0)

inline static constexpr unsigned int GCBHOIJLBFL___c_TypeDefinitionIndex = 25714;

	class GCBHOIJLBFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCBHOIJLBFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBHOIJLBFL___C_CTOR_OFFSET))(this);
		}

		::GCBHOIJLBFL* __cctor_b__61_0()
		{
			return ((::GCBHOIJLBFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBHOIJLBFL___C___CCTOR_B__61_0_OFFSET))(this);
		}

	};
