#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBMAHPJPGLM;
namespace System { class Object; }

#define GBMAHPJPGLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4038D0)
#define GBMAHPJPGLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E403910)
#define GBMAHPJPGLM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E403920)

inline static constexpr unsigned int GBMAHPJPGLM___c_TypeDefinitionIndex = 31717;

	class GBMAHPJPGLM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBMAHPJPGLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMAHPJPGLM___C_CTOR_OFFSET))(this);
		}

		::GBMAHPJPGLM* __cctor_b__23_0()
		{
			return ((::GBMAHPJPGLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMAHPJPGLM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
