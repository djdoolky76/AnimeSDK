#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDCCLPKPEKJ;
namespace System { class Object; }

#define NDCCLPKPEKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE4190)
#define NDCCLPKPEKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE41D0)
#define NDCCLPKPEKJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EAE41E0)

	class NDCCLPKPEKJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDCCLPKPEKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCCLPKPEKJ___C_CTOR_OFFSET))(this);
		}

		::NDCCLPKPEKJ* __cctor_b__18_0()
		{
			return ((::NDCCLPKPEKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCCLPKPEKJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
