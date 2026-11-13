#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNCFCDJAFOJ;
namespace System { class Object; }

#define CNCFCDJAFOJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205EE720)
#define CNCFCDJAFOJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205EE760)
#define CNCFCDJAFOJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x205EE770)

inline static constexpr unsigned int CNCFCDJAFOJ___c_TypeDefinitionIndex = 31321;

	class CNCFCDJAFOJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16240);
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
