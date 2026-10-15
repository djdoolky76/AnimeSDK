#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOJAAMHMCAB;
namespace System { class Object; }

#define JOJAAMHMCAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7775B0)
#define JOJAAMHMCAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7775F0)
#define JOJAAMHMCAB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E777600)

inline static constexpr unsigned int JOJAAMHMCAB___c_TypeDefinitionIndex = 34837;

	class JOJAAMHMCAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68BA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOJAAMHMCAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJAAMHMCAB___C_CTOR_OFFSET))(this);
		}

		::JOJAAMHMCAB* __cctor_b__33_0()
		{
			return ((::JOJAAMHMCAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJAAMHMCAB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
