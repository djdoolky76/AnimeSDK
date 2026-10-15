#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define GOCODBMFHPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B2A340)
#define GOCODBMFHPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2A380)
#define GOCODBMFHPH___C___EXECUTESWITCHPHASE_B__9_3_OFFSET UNITYSDK_OFFSET(0x15B2A390)

inline static constexpr unsigned int GOCODBMFHPH___c_TypeDefinitionIndex = 76302;

	class GOCODBMFHPH___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__9_3()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CC50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CC58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOCODBMFHPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCODBMFHPH___C_CTOR_OFFSET))(this);
		}

		::System::Void __ExecuteSwitchPhase_b__9_3(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + GOCODBMFHPH___C___EXECUTESWITCHPHASE_B__9_3_OFFSET))(this, a1);
		}

	};
