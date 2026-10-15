#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCPGBPNGOFF;
namespace System { class Object; }

#define GCPGBPNGOFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E443870)
#define GCPGBPNGOFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4438B0)
#define GCPGBPNGOFF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4438C0)

inline static constexpr unsigned int GCPGBPNGOFF___c_TypeDefinitionIndex = 32790;

	class GCPGBPNGOFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFDD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCPGBPNGOFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPGBPNGOFF___C_CTOR_OFFSET))(this);
		}

		::GCPGBPNGOFF* __cctor_b__33_0()
		{
			return ((::GCPGBPNGOFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPGBPNGOFF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
