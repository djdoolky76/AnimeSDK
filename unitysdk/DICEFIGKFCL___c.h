#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DICEFIGKFCL;
namespace System { class Object; }

#define DICEFIGKFCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E18E6B0)
#define DICEFIGKFCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E18E6F0)
#define DICEFIGKFCL___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E18E700)

inline static constexpr unsigned int DICEFIGKFCL___c_TypeDefinitionIndex = 29915;

	class DICEFIGKFCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DICEFIGKFCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICEFIGKFCL___C_CTOR_OFFSET))(this);
		}

		::DICEFIGKFCL* __cctor_b__48_0()
		{
			return ((::DICEFIGKFCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICEFIGKFCL___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
