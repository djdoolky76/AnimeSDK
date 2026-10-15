#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHHHDBGHDCF;
namespace System { class Object; }

#define LHHHDBGHDCF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E934300)
#define LHHHDBGHDCF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E934340)
#define LHHHDBGHDCF___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E934350)

inline static constexpr unsigned int LHHHDBGHDCF___c_TypeDefinitionIndex = 26467;

	class LHHHDBGHDCF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36650);
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
