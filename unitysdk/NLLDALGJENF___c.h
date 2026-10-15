#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLLDALGJENF;
namespace System { class Object; }

#define NLLDALGJENF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB39CC0)
#define NLLDALGJENF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB39D00)
#define NLLDALGJENF___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EB39D10)

inline static constexpr unsigned int NLLDALGJENF___c_TypeDefinitionIndex = 28528;

	class NLLDALGJENF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLLDALGJENF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLDALGJENF___C_CTOR_OFFSET))(this);
		}

		::NLLDALGJENF* __cctor_b__43_0()
		{
			return ((::NLLDALGJENF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLDALGJENF___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
