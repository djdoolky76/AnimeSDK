#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEJLPCAIODP;
namespace System { class Object; }

#define AEJLPCAIODP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDED6C0)
#define AEJLPCAIODP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDED700)
#define AEJLPCAIODP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDED710)

inline static constexpr unsigned int AEJLPCAIODP___c_TypeDefinitionIndex = 32849;

	class AEJLPCAIODP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CA90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEJLPCAIODP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLPCAIODP___C_CTOR_OFFSET))(this);
		}

		::AEJLPCAIODP* __cctor_b__23_0()
		{
			return ((::AEJLPCAIODP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJLPCAIODP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
