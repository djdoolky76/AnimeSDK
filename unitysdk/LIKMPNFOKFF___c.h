#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIKMPNFOKFF;
namespace System { class Object; }

#define LIKMPNFOKFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9436A0)
#define LIKMPNFOKFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9436E0)
#define LIKMPNFOKFF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9436F0)

inline static constexpr unsigned int LIKMPNFOKFF___c_TypeDefinitionIndex = 35116;

	class LIKMPNFOKFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIKMPNFOKFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKMPNFOKFF___C_CTOR_OFFSET))(this);
		}

		::LIKMPNFOKFF* __cctor_b__23_0()
		{
			return ((::LIKMPNFOKFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKMPNFOKFF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
