#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHLPFGCOJBN;
namespace System { class Object; }

#define EHLPFGCOJBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A1C60)
#define EHLPFGCOJBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A1CA0)
#define EHLPFGCOJBN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2A1CB0)

inline static constexpr unsigned int EHLPFGCOJBN___c_TypeDefinitionIndex = 33747;

	class EHLPFGCOJBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHLPFGCOJBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLPFGCOJBN___C_CTOR_OFFSET))(this);
		}

		::EHLPFGCOJBN* __cctor_b__23_0()
		{
			return ((::EHLPFGCOJBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLPFGCOJBN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
