#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEPGAKKOHLE;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BILJOFMFHAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C516950)
#define BILJOFMFHAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C516990)
#define BILJOFMFHAJ___C__CREATE_B__9_0_OFFSET UNITYSDK_OFFSET(0x1C5169A0)

inline static constexpr unsigned int BILJOFMFHAJ___c_TypeDefinitionIndex = 41816;

	class BILJOFMFHAJ___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::JEPGAKKOHLE*, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::JEPGAKKOHLE*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FB00);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FB08);
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
