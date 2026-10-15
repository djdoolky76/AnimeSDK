#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEDNIHCAHGP;
namespace System { class Object; }

#define FEDNIHCAHGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E334040)
#define FEDNIHCAHGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E334080)
#define FEDNIHCAHGP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E334090)

inline static constexpr unsigned int FEDNIHCAHGP___c_TypeDefinitionIndex = 29838;

	class FEDNIHCAHGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEDNIHCAHGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDNIHCAHGP___C_CTOR_OFFSET))(this);
		}

		::FEDNIHCAHGP* __cctor_b__28_0()
		{
			return ((::FEDNIHCAHGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDNIHCAHGP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
