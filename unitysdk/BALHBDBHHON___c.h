#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BALHBDBHHON;
namespace System { class Object; }

#define BALHBDBHHON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78DDA0)
#define BALHBDBHHON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E78DDE0)
#define BALHBDBHHON___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E78DDF0)

inline static constexpr unsigned int BALHBDBHHON___c_TypeDefinitionIndex = 25687;

	class BALHBDBHHON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CCE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BALHBDBHHON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BALHBDBHHON___C_CTOR_OFFSET))(this);
		}

		::BALHBDBHHON* __cctor_b__23_0()
		{
			return ((::BALHBDBHHON*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALHBDBHHON___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
