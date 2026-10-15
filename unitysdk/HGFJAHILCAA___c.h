#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGFJAHILCAA;
namespace System { class Object; }

#define HGFJAHILCAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E54C330)
#define HGFJAHILCAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E54C360)
#define HGFJAHILCAA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E54C370)

inline static constexpr unsigned int HGFJAHILCAA___c_TypeDefinitionIndex = 33453;

	class HGFJAHILCAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGFJAHILCAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFJAHILCAA___C_CTOR_OFFSET))(this);
		}

		::HGFJAHILCAA* __cctor_b__33_0()
		{
			return ((::HGFJAHILCAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFJAHILCAA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
