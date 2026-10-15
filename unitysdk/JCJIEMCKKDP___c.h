#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCJIEMCKKDP;
namespace System { class Object; }

#define JCJIEMCKKDP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7023C0)
#define JCJIEMCKKDP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E702400)
#define JCJIEMCKKDP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E702410)

inline static constexpr unsigned int JCJIEMCKKDP___c_TypeDefinitionIndex = 26114;

	class JCJIEMCKKDP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCJIEMCKKDP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJIEMCKKDP___C_CTOR_OFFSET))(this);
		}

		::JCJIEMCKKDP* __cctor_b__33_0()
		{
			return ((::JCJIEMCKKDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJIEMCKKDP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
