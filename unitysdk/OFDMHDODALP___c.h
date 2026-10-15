#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFDMHDODALP;
namespace System { class Object; }

#define OFDMHDODALP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE37870)
#define OFDMHDODALP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE378B0)
#define OFDMHDODALP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE378C0)

inline static constexpr unsigned int OFDMHDODALP___c_TypeDefinitionIndex = 30300;

	class OFDMHDODALP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x162C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFDMHDODALP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDMHDODALP___C_CTOR_OFFSET))(this);
		}

		::OFDMHDODALP* __cctor_b__28_0()
		{
			return ((::OFDMHDODALP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDMHDODALP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
