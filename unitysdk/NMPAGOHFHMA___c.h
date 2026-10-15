#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMPAGOHFHMA;
namespace System { class Object; }

#define NMPAGOHFHMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB7D170)
#define NMPAGOHFHMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7D1B0)
#define NMPAGOHFHMA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB7D1C0)

inline static constexpr unsigned int NMPAGOHFHMA___c_TypeDefinitionIndex = 32624;

	class NMPAGOHFHMA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMPAGOHFHMA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPAGOHFHMA___C_CTOR_OFFSET))(this);
		}

		::NMPAGOHFHMA* __cctor_b__28_0()
		{
			return ((::NMPAGOHFHMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPAGOHFHMA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
