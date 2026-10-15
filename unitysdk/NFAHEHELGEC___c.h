#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFAHEHELGEC;
namespace System { class Object; }

#define NFAHEHELGEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD1F60)
#define NFAHEHELGEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD1FA0)
#define NFAHEHELGEC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EAD1FB0)

inline static constexpr unsigned int NFAHEHELGEC___c_TypeDefinitionIndex = 27123;

	class NFAHEHELGEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62EA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFAHEHELGEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHEHELGEC___C_CTOR_OFFSET))(this);
		}

		::NFAHEHELGEC* __cctor_b__18_0()
		{
			return ((::NFAHEHELGEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHEHELGEC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
