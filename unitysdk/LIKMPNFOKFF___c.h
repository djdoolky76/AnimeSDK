#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIKMPNFOKFF;
namespace System { class Object; }

#define LIKMPNFOKFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E970D20)
#define LIKMPNFOKFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E970D60)
#define LIKMPNFOKFF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E970D70)

	class LIKMPNFOKFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45A50);
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
