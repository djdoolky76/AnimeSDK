#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHLMFDBFCEC;
namespace System { class Object; }

#define MHLMFDBFCEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA35780)
#define MHLMFDBFCEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA357C0)
#define MHLMFDBFCEC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA357D0)

	class MHLMFDBFCEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHLMFDBFCEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLMFDBFCEC___C_CTOR_OFFSET))(this);
		}

		::MHLMFDBFCEC* __cctor_b__28_0()
		{
			return ((::MHLMFDBFCEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLMFDBFCEC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
