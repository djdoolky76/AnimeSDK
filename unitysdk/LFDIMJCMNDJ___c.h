#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFDIMJCMNDJ;
namespace System { class Object; }

#define LFDIMJCMNDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E90DFC0)
#define LFDIMJCMNDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E90E000)
#define LFDIMJCMNDJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E90E010)

inline static constexpr unsigned int LFDIMJCMNDJ___c_TypeDefinitionIndex = 29705;

	class LFDIMJCMNDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFDIMJCMNDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDIMJCMNDJ___C_CTOR_OFFSET))(this);
		}

		::LFDIMJCMNDJ* __cctor_b__23_0()
		{
			return ((::LFDIMJCMNDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDIMJCMNDJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
