#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNCFCDJAFOJ;
namespace System { class Object; }

#define CNCFCDJAFOJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1075C0)
#define CNCFCDJAFOJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E107600)
#define CNCFCDJAFOJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E107610)

inline static constexpr unsigned int CNCFCDJAFOJ___c_TypeDefinitionIndex = 30415;

	class CNCFCDJAFOJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNCFCDJAFOJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCFCDJAFOJ___C_CTOR_OFFSET))(this);
		}

		::CNCFCDJAFOJ* __cctor_b__23_0()
		{
			return ((::CNCFCDJAFOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCFCDJAFOJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
