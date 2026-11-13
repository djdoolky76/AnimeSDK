#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHHHDBGHDCF;
namespace System { class Object; }

#define LHHHDBGHDCF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201BCFD0)
#define LHHHDBGHDCF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201BD010)
#define LHHHDBGHDCF___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x201BD020)

inline static constexpr unsigned int LHHHDBGHDCF___c_TypeDefinitionIndex = 26998;

	class LHHHDBGHDCF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38EA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHHHDBGHDCF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHDBGHDCF___C_CTOR_OFFSET))(this);
		}

		::LHHHDBGHDCF* __cctor_b__48_0()
		{
			return ((::LHHHDBGHDCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHDBGHDCF___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
