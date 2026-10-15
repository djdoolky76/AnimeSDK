#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHLBFIOLAIA;
namespace System { class Object; }

#define LHLBFIOLAIA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E966310)
#define LHLBFIOLAIA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E966350)
#define LHLBFIOLAIA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E966360)

	class LHLBFIOLAIA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHLBFIOLAIA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLBFIOLAIA___C_CTOR_OFFSET))(this);
		}

		::LHLBFIOLAIA* __cctor_b__28_0()
		{
			return ((::LHLBFIOLAIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLBFIOLAIA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
