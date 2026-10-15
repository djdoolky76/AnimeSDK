#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLOIKIFPAJC;
namespace System { class Object; }

#define CLOIKIFPAJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D0600)
#define CLOIKIFPAJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D0640)
#define CLOIKIFPAJC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E0D0650)

inline static constexpr unsigned int CLOIKIFPAJC___c_TypeDefinitionIndex = 31482;

	class CLOIKIFPAJC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BA90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLOIKIFPAJC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOIKIFPAJC___C_CTOR_OFFSET))(this);
		}

		::CLOIKIFPAJC* __cctor_b__18_0()
		{
			return ((::CLOIKIFPAJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOIKIFPAJC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
