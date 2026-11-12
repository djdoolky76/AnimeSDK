#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFPLDMFCLHA;
namespace System { class Object; }

#define NFPLDMFCLHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE4C740)
#define NFPLDMFCLHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE4C780)
#define NFPLDMFCLHA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FE4C790)

inline static constexpr unsigned int NFPLDMFCLHA___c_TypeDefinitionIndex = 30353;

	class NFPLDMFCLHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFPLDMFCLHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPLDMFCLHA___C_CTOR_OFFSET))(this);
		}

		::NFPLDMFCLHA* __cctor_b__33_0()
		{
			return ((::NFPLDMFCLHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPLDMFCLHA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
