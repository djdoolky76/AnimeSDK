#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGFNICBCMOA;
namespace System { class Object; }

#define KGFNICBCMOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E809000)
#define KGFNICBCMOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E809040)
#define KGFNICBCMOA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E809050)

inline static constexpr unsigned int KGFNICBCMOA___c_TypeDefinitionIndex = 29343;

	class KGFNICBCMOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14E70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGFNICBCMOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFNICBCMOA___C_CTOR_OFFSET))(this);
		}

		::KGFNICBCMOA* __cctor_b__23_0()
		{
			return ((::KGFNICBCMOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGFNICBCMOA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
