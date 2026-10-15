#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHMNLHLADJO;
namespace System { class Object; }

#define FHMNLHLADJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E363630)
#define FHMNLHLADJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E363670)
#define FHMNLHLADJO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E363680)

inline static constexpr unsigned int FHMNLHLADJO___c_TypeDefinitionIndex = 30025;

	class FHMNLHLADJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56F20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHMNLHLADJO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMNLHLADJO___C_CTOR_OFFSET))(this);
		}

		::FHMNLHLADJO* __cctor_b__28_0()
		{
			return ((::FHMNLHLADJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMNLHLADJO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
