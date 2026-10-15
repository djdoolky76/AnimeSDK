#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJHOCMLPMJD;
namespace System { class Object; }

#define CJHOCMLPMJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B0620)
#define CJHOCMLPMJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B0660)
#define CJHOCMLPMJD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0B0670)

inline static constexpr unsigned int CJHOCMLPMJD___c_TypeDefinitionIndex = 27631;

	class CJHOCMLPMJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJHOCMLPMJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHOCMLPMJD___C_CTOR_OFFSET))(this);
		}

		::CJHOCMLPMJD* __cctor_b__23_0()
		{
			return ((::CJHOCMLPMJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHOCMLPMJD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
