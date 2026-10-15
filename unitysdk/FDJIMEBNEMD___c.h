#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDJIMEBNEMD;
namespace System { class Object; }

#define FDJIMEBNEMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32EA50)
#define FDJIMEBNEMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E32EA90)
#define FDJIMEBNEMD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E32EAA0)

inline static constexpr unsigned int FDJIMEBNEMD___c_TypeDefinitionIndex = 32271;

	class FDJIMEBNEMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52D90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDJIMEBNEMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD___C_CTOR_OFFSET))(this);
		}

		::FDJIMEBNEMD* __cctor_b__28_0()
		{
			return ((::FDJIMEBNEMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
