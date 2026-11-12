#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLAGFACLPDL;
namespace System { class Object; }

#define PLAGFACLPDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F24E7B0)
#define PLAGFACLPDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F24E7F0)
#define PLAGFACLPDL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F24E800)

inline static constexpr unsigned int PLAGFACLPDL___c_TypeDefinitionIndex = 29305;

	class PLAGFACLPDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLAGFACLPDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAGFACLPDL___C_CTOR_OFFSET))(this);
		}

		::PLAGFACLPDL* __cctor_b__33_0()
		{
			return ((::PLAGFACLPDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAGFACLPDL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
