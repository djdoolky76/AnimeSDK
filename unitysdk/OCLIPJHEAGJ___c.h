#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCLIPJHEAGJ;
namespace System { class Object; }

#define OCLIPJHEAGJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0B8110)
#define OCLIPJHEAGJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0B8150)
#define OCLIPJHEAGJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F0B8160)

inline static constexpr unsigned int OCLIPJHEAGJ___c_TypeDefinitionIndex = 32149;

	class OCLIPJHEAGJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCLIPJHEAGJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ___C_CTOR_OFFSET))(this);
		}

		::OCLIPJHEAGJ* __cctor_b__33_0()
		{
			return ((::OCLIPJHEAGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLIPJHEAGJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
