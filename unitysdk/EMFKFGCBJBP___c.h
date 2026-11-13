#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMFKFGCBJBP;
namespace System { class Object; }

#define EMFKFGCBJBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206D7A90)
#define EMFKFGCBJBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206D7AD0)
#define EMFKFGCBJBP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x206D7AE0)

inline static constexpr unsigned int EMFKFGCBJBP___c_TypeDefinitionIndex = 33083;

	class EMFKFGCBJBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49C00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMFKFGCBJBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFKFGCBJBP___C_CTOR_OFFSET))(this);
		}

		::EMFKFGCBJBP* __cctor_b__18_0()
		{
			return ((::EMFKFGCBJBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFKFGCBJBP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
