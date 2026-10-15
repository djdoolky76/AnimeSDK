#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OELHDNEGGBB;
namespace System { class Object; }

#define OELHDNEGGBB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE2EA20)
#define OELHDNEGGBB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE2EA60)
#define OELHDNEGGBB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE2EA70)

inline static constexpr unsigned int OELHDNEGGBB___c_TypeDefinitionIndex = 31234;

	class OELHDNEGGBB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OELHDNEGGBB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELHDNEGGBB___C_CTOR_OFFSET))(this);
		}

		::OELHDNEGGBB* __cctor_b__23_0()
		{
			return ((::OELHDNEGGBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELHDNEGGBB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
