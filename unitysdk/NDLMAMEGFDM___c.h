#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDLMAMEGFDM;
namespace System { class Object; }

#define NDLMAMEGFDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20301280)
#define NDLMAMEGFDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203012B0)
#define NDLMAMEGFDM___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x203012C0)

inline static constexpr unsigned int NDLMAMEGFDM___c_TypeDefinitionIndex = 35655;

	class NDLMAMEGFDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DEE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDLMAMEGFDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLMAMEGFDM___C_CTOR_OFFSET))(this);
		}

		::NDLMAMEGFDM* __cctor_b__53_0()
		{
			return ((::NDLMAMEGFDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLMAMEGFDM___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
