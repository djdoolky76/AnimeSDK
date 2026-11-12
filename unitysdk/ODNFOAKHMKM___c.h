#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODNFOAKHMKM;
namespace System { class Object; }

#define ODNFOAKHMKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0C2FC0)
#define ODNFOAKHMKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0C2FF0)
#define ODNFOAKHMKM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F0C3000)

inline static constexpr unsigned int ODNFOAKHMKM___c_TypeDefinitionIndex = 35566;

	class ODNFOAKHMKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEA80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODNFOAKHMKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNFOAKHMKM___C_CTOR_OFFSET))(this);
		}

		::ODNFOAKHMKM* __cctor_b__18_0()
		{
			return ((::ODNFOAKHMKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNFOAKHMKM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
