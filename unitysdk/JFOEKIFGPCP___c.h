#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFOEKIFGPCP;
namespace System { class Object; }

#define JFOEKIFGPCP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206266D0)
#define JFOEKIFGPCP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20626710)
#define JFOEKIFGPCP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20626720)

inline static constexpr unsigned int JFOEKIFGPCP___c_TypeDefinitionIndex = 31069;

	class JFOEKIFGPCP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FD50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFOEKIFGPCP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOEKIFGPCP___C_CTOR_OFFSET))(this);
		}

		::JFOEKIFGPCP* __cctor_b__28_0()
		{
			return ((::JFOEKIFGPCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOEKIFGPCP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
