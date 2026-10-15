#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCFKHDIKCNI;
namespace System { class Object; }

#define NCFKHDIKCNI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAADFA0)
#define NCFKHDIKCNI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAADFE0)
#define NCFKHDIKCNI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAADFF0)

inline static constexpr unsigned int NCFKHDIKCNI___c_TypeDefinitionIndex = 31738;

	class NCFKHDIKCNI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EB80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCFKHDIKCNI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFKHDIKCNI___C_CTOR_OFFSET))(this);
		}

		::NCFKHDIKCNI* __cctor_b__23_0()
		{
			return ((::NCFKHDIKCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFKHDIKCNI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
