#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKCNEPIJJAO;
namespace System { class Object; }

#define FKCNEPIJJAO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E37FB80)
#define FKCNEPIJJAO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E37FBC0)
#define FKCNEPIJJAO___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E37FBD0)

inline static constexpr unsigned int FKCNEPIJJAO___c_TypeDefinitionIndex = 28913;

	class FKCNEPIJJAO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A7B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKCNEPIJJAO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCNEPIJJAO___C_CTOR_OFFSET))(this);
		}

		::FKCNEPIJJAO* __cctor_b__38_0()
		{
			return ((::FKCNEPIJJAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCNEPIJJAO___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
