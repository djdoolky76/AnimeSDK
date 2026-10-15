#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEIHGOEPANI;
namespace System { class Object; }

#define FEIHGOEPANI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E367910)
#define FEIHGOEPANI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E367950)
#define FEIHGOEPANI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E367960)

inline static constexpr unsigned int FEIHGOEPANI___c_TypeDefinitionIndex = 32212;

	class FEIHGOEPANI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEIHGOEPANI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIHGOEPANI___C_CTOR_OFFSET))(this);
		}

		::FEIHGOEPANI* __cctor_b__23_0()
		{
			return ((::FEIHGOEPANI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIHGOEPANI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
