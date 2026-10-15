#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEPGAKKOHLE;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BILJOFMFHAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C544E10)
#define BILJOFMFHAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C544E50)
#define BILJOFMFHAJ___C__CREATE_B__9_0_OFFSET UNITYSDK_OFFSET(0x1C544E60)

	class BILJOFMFHAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16650);
		}

		static ::System::Func_2<::JEPGAKKOHLE*, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::JEPGAKKOHLE*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16658);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BILJOFMFHAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILJOFMFHAJ___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _Create_b__9_0(::JEPGAKKOHLE* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::JEPGAKKOHLE*))((::PBYTE)hIl2Cpp + BILJOFMFHAJ___C__CREATE_B__9_0_OFFSET))(this, a1);
		}

	};
