#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFFAFBIGNKP;
namespace System { class Object; }

#define HFFAFBIGNKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAE6FC0)
#define HFFAFBIGNKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAE7000)
#define HFFAFBIGNKP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FAE7010)

inline static constexpr unsigned int HFFAFBIGNKP___c_TypeDefinitionIndex = 26084;

	class HFFAFBIGNKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AE30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFFAFBIGNKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFAFBIGNKP___C_CTOR_OFFSET))(this);
		}

		::HFFAFBIGNKP* __cctor_b__38_0()
		{
			return ((::HFFAFBIGNKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFAFBIGNKP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
